# How to Search GitHub for ESP Projects

GitHub has separate repository, code, issue, and pull-request searches. Start broad, then add one qualifier at a time. GitHub’s official syntax documentation is the authority for current qualifiers: [repository search](https://docs.github.com/en/search-github/searching-on-github/searching-for-repositories), [code search](https://docs.github.com/en/search-github/github-code-search/understanding-github-code-search-syntax), and [search syntax](https://docs.github.com/en/search-github/getting-started-with-searching-on-github/understanding-the-search-syntax).

## Search for repositories

Use the GitHub search box with queries such as:

```text
esp32 iot language:C++ stars:>100
esp8266 sensor language:C++ pushed:>2025-01-01
microPython esp32 topic:micropython license:MIT
"wokwi" esp32 NOT is:fork
```

Useful repository qualifiers:

| Qualifier | Example | Meaning |
|---|---|---|
| `language:` | `language:C++` | Filter by primary language. |
| `stars:` | `stars:>100` | Prefer projects with community use. |
| `forks:` | `forks:>20` | Find projects reused by others. |
| `pushed:` | `pushed:>2025-01-01` | Filter for recent activity. |
| `topic:` | `topic:esp32` | Search repository topics. |
| `license:` | `license:MIT` | Filter by a recognised license. |
| `user:` / `org:` | `org:espressif` | Limit ownership. |
| `NOT is:fork` | `NOT is:fork` | Remove fork noise. |

## Search code

Code search needs a signed-in GitHub account. Use a complete repository name with `repo:`:

```text
repo:espressif/arduino-esp32 WiFiClientSecure
repo:esp8266/Arduino analogRead
repo:kokoye2007/ESP_Chitchat event_box
language:cpp path:src "pinMode"
"MQTTClient" language:cpp
```

Useful code qualifiers include `repo:`, `org:`, `user:`, `language:`, `path:`, `symbol:`, `content:`, and `in:file` / `in:path`. Code search indexes the default branch, so check the repository’s default branch and release tags before relying on a result.

## Use GitHub CLI

The same discovery process can be scripted:

```bash
gh search repos 'esp32 iot' --language C++ --stars '>100' --limit 20
gh search repos 'micropython esp32' --topic micropython --limit 20
gh search code 'analogRead' --language cpp --limit 20
gh search issues 'esp32 servo' --state open --limit 20
```

Inspect a candidate before adopting it:

```bash
gh repo view OWNER/REPO
gh api repos/OWNER/REPO --jq '{license: .license.spdx_id, pushed: .pushed_at, archived: .archived, stars: .stargazers_count}'
```

## Search quality rules

- A high star count is not proof of current compatibility.
- Prefer official maintainers for hardware cores and APIs.
- Check the license before copying code, diagrams, or images.
- Read the README, release notes, open issues, and wiring assumptions.
- Pin or record dependency versions in any example promoted into this repository.
