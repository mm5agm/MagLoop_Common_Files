MagLoop Common Files
Shared header files for MagLoop stepper motor control projects.

📁 Contents
stepper_commands.h - Command definitions and Message struct for ESP-NOW communication
stepper_helpers.h - Helper functions and utilities
circular_buffer.h - Template-based circular buffer implementation
🔗 Used By
StepperController - ESP32 stepper motor controller
StepperGUI - ESP32 touchscreen GUI controller
🚀 Usage
This repository is designed to be used as a Git submodule in projects that need these shared definitions.

Adding to a New Project
# Add as submodule
git submodule add https://github.com/mm5agm/MagLoop_Common_Files.git MagLoop_Common_Files

# Include in your build system
# For PlatformIO: add to platformio.ini
build_flags = -IMagLoop_Common_Files

# For Arduino IDE: copy files to your project or add to include path
Updating Shared Files
# When changes are made to these common files, projects using them need to update their submodules.

and then double click
push_submodule_and_main.bat

## Batch Scripts for Updating and Uploading Code

The recommended way to keep MagLoop_Common_Files and StepperGUI in sync is to use the provided batch files in the main project folder:

- **download_latest_code.bat**: Pulls the latest code from both StepperGUI and MagLoop_Common_Files from GitHub.
- **upload_code_if_changed.bat**: Checks for changes (including README.md and all other files) in both repositories and pushes updates only if changes are detected.

### Usage

1. Double-click or run `download_latest_code.bat` to update your local code from GitHub.
2. Double-click or run `upload_code_if_changed.bat` to push any local changes (including README.md) to GitHub. If there are no changes, the script will warn and do nothing.

These scripts automate the most common sync operations for development and ensure documentation changes are included.

Method 2: Using Git Aliases
# Update submodule only
git update-subs

# Update, commit, and push
git sync-common

Method 3: Manual Git Commands
# Update submodule to latest
git submodule update --remote --merge

# If changes detected, commit and push
git add MagLoop_Common_Files
git commit -m "Update MagLoop_Common_Files submodule to latest version"
git push

🛠 Development Workflow
Making Changes to Common Files
Make changes in any project that uses these files as a submodule
Navigate to the submodule directory:
cd MagLoop_Common_Files

Commit and push changes:
git add .
git commit -m "Description of changes"
git push origin main
Update other projects using one of the methods above
Best Practices
✅ Test changes in one project before updating others
✅ Use descriptive commit messages for common file changes
✅ Update all dependent projects after making changes
✅ Maintain backward compatibility when possible
✅ Document breaking changes in commit messages
CommandType enum - All ESP-NOW command definitions
Message struct - Packed message format for wire communication
Constants - Position limits and parameter defaults
stepper_helpers.h
commandToString() - Convert command enum to readable string
Helper stubs - Placeholder for future utility functions
circular_buffer.h
CircularBuffer template - Thread-safe circular buffer implementation
Arduino compatible - Works with ESP32/Arduino framework
Generic template - Can store any data type
🔧 Technical Details
Wire Format: Messages use packed structs with explicit sizes for consistency
Compatibility: Designed for ESP32 with Arduino framework
Thread Safety: CircularBuffer is interrupt-safe for ESP-NOW callbacks
Memory Usage: Minimal footprint, suitable for embedded systems
📄 License
This project is part of the MagLoop stepper control system.

Last updated: October 2025
