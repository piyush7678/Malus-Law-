# Malus's Law - Virtual Lab

A simple console-based simulator in C that calculates the intensity of light after passing through a polarizer and one or more analyzers.

## Malus's Law

When polarized light passes through an analyzer, the transmitted intensity is:

```
I = I0 x cos²(θ)
```

- `I0` = intensity of light falling on the analyzer
- `θ` = angle between the polarization direction and the analyzer's axis

## How It Works

1. Enter the intensity of the incident (unpolarized) light.
2. Enter the number of analyzers placed after the polarizer.
3. The polarizer reduces the unpolarized light to half its intensity.
4. Enter the angle of each analyzer, measured from the previous one.
5. The program shows the intensity before and after every stage, and the final intensity.

## Run

```
gcc Physics_PBL.c -o Physics_PBL -lm
./Physics_PBL
```

On Windows, run `Physics_PBL` instead of `./Physics_PBL`.

## Sample

Incident intensity = 100, two analyzers at 30° and 60°:

| Stage | Calculation | Intensity |
|-------|-------------|-----------|
| Polarizer | 100 / 2 | 50.00 |
| Analyzer 1 (30°) | 50.00 x cos²30° | 37.50 |
| Analyzer 2 (60°) | 37.50 x cos²60° | 9.38 |

**Final intensity = 9.38**

## Files

- `Physics_PBL.c` - source code
- `README.md` - project description
