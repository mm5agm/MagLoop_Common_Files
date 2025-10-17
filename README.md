# MagLoop Common Files

Shared header files for MagLoop stepper motor control projects.

## Contents

- `stepper_commands.h` — command definitions and `Message` struct for ESP-NOW communication
- `stepper_helpers.h` — helper functions and utilities (e.g. `commandToString()`)
- `circular_buffer.h` — a small template circular buffer used to defer handling from callbacks to the main loop

## Used by

- `StepperController` — ESP32-based stepper motor controller
- `StepperGUI` — ESP32 touchscreen GUI controller

## Usage

This folder is intended to be used as a Git submodule by projects that need the shared definitions.

### Add as a submodule

```sh
git submodule add https://github.com/mm5agm/MagLoop_Common_Files.git MagLoop_Common_Files
```

For PlatformIO projects, add an include path so the shared headers are found by the compiler (example in `platformio.ini`):

```ini
# MagLoop Common Files

Shared header files used by MagLoop stepper motor projects. These headers define the wire protocol, command enums and small helpers shared between the controller firmware and GUI.

## Contents

- `stepper_commands.h` — command definitions and `Message` struct for ESP-NOW communication
- `stepper_helpers.h` — helper functions and utilities (e.g. `commandToString()`)
- `circular_buffer.h` — a small template circular buffer used to defer handling from callbacks to the main loop

## Used by

- `StepperController` — ESP32-based stepper motor controller
- `StepperGUI` — ESP32 touchscreen GUI controller

## Usage

This folder is intended to be used as a Git submodule by projects that need the shared definitions.

### Add as a submodule

```sh
git submodule add https://github.com/mm5agm/MagLoop_Common_Files.git MagLoop_Common_Files
```

For PlatformIO projects, add an include path so the shared headers are found by the compiler (example in `platformio.ini`):

```ini
build_flags = -IMagLoop_Common_Files
```

For other IDEs you can either add the folder to the project's include path or copy the headers into your project.

## Batch scripts

This repository includes a couple of convenience batch scripts used by the main projects to keep the submodule and GUI in sync:

- `download_latest_code.bat` — pulls the latest code for both `StepperGUI` and `MagLoop_Common_Files` from GitHub
- `upload_code_if_changed.bat` — checks for changes (including `README.md` and other files) and pushes updates only if something changed

Run the scripts from the main project folder (double-click or run from a shell). If there are no changes, `upload_code_if_changed.bat` will warn and do nothing.

## Development workflow

When you need to edit the common files:

1. Open the submodule directory:

```sh
cd MagLoop_Common_Files
```

2. Make your changes, then commit and push:

```sh
git add .
git commit -m "Describe the change"
git push origin main
```

3. Update dependent projects (use the batch scripts or run `git submodule update --remote` in dependent projects).

### Best practices

- Test changes in a single consuming project before rolling them out to others
- Use descriptive commit messages for changes to shared headers
- Keep compatibility in mind; document breaking changes clearly

## Files (brief)

- `stepper_commands.h`
	- `CommandType` enum — all ESP-NOW command definitions
	- `Message` struct — packed message format for wire communication

- `stepper_helpers.h`
	- `commandToString()` — convert command enum to human-readable string

- `circular_buffer.h`
	- `CircularBuffer<T,N>` — small interrupt-safe circular buffer used by the ESP-NOW receive callback

## Technical details

- Wire format: packed structs with explicit sizes to ensure compatibility across devices
- Target: ESP32 (Arduino framework)
- Circular buffer is implemented to be safe to call from ESP-NOW callbacks and to defer processing to the main loop

---

This project is part of the MagLoop stepper control system.

## Changelog & Migration notes

Recent firmware updates changed how runtime pulse delays (PD) are stored in the ESP32 Preferences (NVS). The new, short keys are used by current firmware builds and will be migrated automatically if older keys are present.

New keys (namespace: `stepper`):

- `slow_pd` — slow speed pulse delay (microseconds)
- `med_pd` — medium speed pulse delay
- `fast_pd` — fast speed pulse delay
- `moveto_pd` — pulse delay used by MOVE_TO operations

Old keys (legacy): `slowPD`, `mediumPD`, `fastPD`, `moveToPD`.

Migration behavior (implemented in the controller firmware):

1. On startup the firmware checks for the new keys under the `stepper` namespace.
2. If a new key is missing but the corresponding old key exists, the firmware reads the old value and writes it into the new key (preserving the saved value).
3. After migration the firmware uses the new short keys going forward.

If you upgrade firmware and rely on custom pulse-delay values, the migration is automatic and no user action should be required. To reset the PD values to firmware defaults, use the GUI command (or add a reset command) that writes the desired defaults back into the new keys.

