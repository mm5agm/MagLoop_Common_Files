# MagLoop Common Files

Shared header files for MagLoop stepper motor control projects.

## 📁 Contents

- **stepper_commands.h** – Command definitions and Message struct for ESP-NOW communication
- **stepper_helpers.h** – Helper functions and utilities
- **circular_buffer.h** – Template-based circular buffer implementation

## 🔗 Used By

- **StepperController** – ESP32 stepper motor controller
- **StepperGUI** – ESP32 touchscreen GUI controller

## 🚀 Usage

This repository is designed to be used as a Git submodule in projects that need these shared definitions.

### Adding to a New Project

```sh
# Add as submodule
git submodule add https://github.com/mm5agm/MagLoop_Common_Files.git MagLoop_Common_Files

# For PlatformIO: add to [platformio.ini](http://_vscodecontentref_/1)
build_flags = -IMagLoop_Common_Files

# For Arduino IDE: copy files to your project or add to include path

Batch Scripts for Updating and Uploading Code
Use the following batch files in your main project folder to keep MagLoop_Common_Files and StepperGUI in sync:

download_latest_code.bat – Pulls the latest code from both StepperGUI and MagLoop_Common_Files from GitHub.
upload_code_if_changed.bat – Checks for changes (including README.md and all other files) in both repositories and pushes updates only if changes are detected.
Usage
Double-click or run download_latest_code.bat to update your local code from GitHub.
Double-click or run upload_code_if_changed.bat to push any local changes (including README.md) to GitHub. If there are no changes, the script will warn and do nothing.
These scripts automate the most common sync operations for development and ensure documentation changes are included.

🛠 Development Workflow
Making Changes to Common Files
Make changes in any project that uses these files as a submodule.

Navigate to the submodule directory: