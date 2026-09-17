.PHONY: serve render check

serve:
	python3 -m http.server 8000 --directory demo-day

render:
	marp --html esp32-open-hardware-demo-day-marp.md -o esp32-open-hardware-demo-day-marp.html
	marp --pdf esp32-open-hardware-demo-day-marp.md -o esp32-open-hardware-demo-day-marp.pdf
	marp --html esp32-open-hardware-chitchat-marp-v2.md -o esp32-open-hardware-chitchat-marp.html
	marp --pdf esp32-open-hardware-chitchat-marp-v2.md -o esp32-open-hardware-chitchat-marp-v2.pdf

check:
	git diff --check
	@test -f demo-day/web-simulator/index.html
	@test -f demo-day/arduino/touch_led/touch_led.ino
	@test -f demo-day/arduino/event_box/event_box.ino
