# Scratch Activity

Use Scratch to introduce the decision before showing the ESP board. This is a teaching recipe rather than a binary `.sb3` file so presenters can use their own characters and language.

## Touch project

Create a character and add these blocks:

```text
when green flag clicked
forever
  if <key [space] pressed?> then
    say [Touched!] for (1) seconds
    switch costume to [light on]
  else
    switch costume to [light off]
  end
end
```

Explain that the space key stands in for the physical touch sensor. Replace the key with a real sensor only after the logic is understood.

## Event Box project

Create buttons or sprites that broadcast `rain`, `goal`, and `plant`:

```text
when this sprite clicked
  broadcast [rain]
```

The receiving character uses `when I receive [rain]` to show an umbrella, play a sound, and say `Rain expected`. The same event names are used by the browser simulator and Arduino sketch.

## Teaching boundary

Scratch is the logic layer. Wokwi is the virtual hardware layer. Arduino C/C++ is the firmware layer. Avoid adding a custom Scratch-to-ESP bridge during Demo Day; it introduces setup risk without improving the first learning moment.
