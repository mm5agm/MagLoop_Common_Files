<<<<<<< HEAD
# MagLoop Common Files

Shared header files for MagLoop stepper motor control projects.

## 📁 Contents

- **`stepper_commands.h`** - Command definitions and Message struct for ESP-NOW communication
- **`stepper_helpers.h`** - Helper functions and utilities
- **`circular_buffer.h`** - Template-based circular buffer implementation

## 🔗 Used By

- [StepperController](https://github.com/mm5agm/StepperController) - ESP32 stepper motor controller
- [StepperGUI](https://github.com/mm5agm/StepperGUI) - ESP32 touchscreen GUI controller

## 🚀 Usage

This repository is designed to be used as a Git submodule in projects that need these shared definitions.

### Adding to a New Project

```bash
# Add as submodule
git submodule add https://github.com/mm5agm/MagLoop_Common_Files.git MagLoop_Common_Files

# Include in your build system
# For PlatformIO: add to platformio.ini
build_flags = -IMagLoop_Common_Files

# For Arduino IDE: copy files to your project or add to include path
```

### Updating Shared Files

When changes are made to these common files, projects using them need to update their submodules.

#### Method 1: Using Update Scripts (Recommended)

Each project includes update scripts for easy maintenance:

```bash
# Windows
update-common.bat

# PowerShell (with options)
.\update-submodules.ps1 -Quiet

# Cross-platform
./update-common.sh
```

#### Method 2: Using Git Aliases

```bash
# Update submodule only
git update-subs

# Update, commit, and push
git sync-common
```

#### Method 3: Manual Git Commands

```bash
# Update submodule to latest
git submodule update --remote --merge

# If changes detected, commit and push
git add MagLoop_Common_Files
git commit -m "Update MagLoop_Common_Files submodule to latest version"
git push
```

## 🛠 Development Workflow

### Making Changes to Common Files

1. **Make changes** in any project that uses these files as a submodule
2. **Navigate to the submodule directory**:
   ```bash
   cd MagLoop_Common_Files
   ```
3. **Commit and push changes**:
   ```bash
   git add .
   git commit -m "Description of changes"
   git push origin main
   ```
4. **Update other projects** using one of the methods above

### Best Practices

- ✅ **Test changes** in one project before updating others
- ✅ **Use descriptive commit messages** for common file changes
- ✅ **Update all dependent projects** after making changes
- ✅ **Maintain backward compatibility** when possible
- ✅ **Document breaking changes** in commit messages

## 📋 File Descriptions

### stepper_commands.h
- **CommandType enum** - All ESP-NOW command definitions
- **Message struct** - Packed message format for wire communication
- **Constants** - Position limits and parameter defaults

### stepper_helpers.h
- **commandToString()** - Convert command enum to readable string
- **Helper stubs** - Placeholder for future utility functions

### circular_buffer.h
- **CircularBuffer template** - Thread-safe circular buffer implementation
- **Arduino compatible** - Works with ESP32/Arduino framework
- **Generic template** - Can store any data type

## 🔧 Technical Details

- **Wire Format**: Messages use packed structs with explicit sizes for consistency
- **Compatibility**: Designed for ESP32 with Arduino framework
- **Thread Safety**: CircularBuffer is interrupt-safe for ESP-NOW callbacks
- **Memory Usage**: Minimal footprint, suitable for embedded systems

## 📄 License

This project is part of the MagLoop stepper control system.

---

*Last updated: October 2025*
=======
# MagLoop Common Files

Shared header files for MagLoop stepper motor control projects.

## 📁 Contents

- **`stepper_commands.h`** - Command definitions and Message struct for ESP-NOW communication
- **`stepper_helpers.h`** - Helper functions and utilities
- **`circular_buffer.h`** - Template-based circular buffer implementation

## 🔗 Used By

- [StepperController](https://github.com/mm5agm/StepperController) - ESP32 stepper motor controller
- [StepperGUI](https://github.com/mm5agm/StepperGUI) - ESP32 touchscreen GUI controller

## 🚀 Usage

This repository is designed to be used as a Git submodule in projects that need these shared definitions.

### Adding to a New Project

```bash
# Add as submodule
git submodule add https://github.com/mm5agm/MagLoop_Common_Files.git MagLoop_Common_Files

# Include in your build system
# For PlatformIO: add to platformio.ini
build_flags = -IMagLoop_Common_Files

# For Arduino IDE: copy files to your project or add to include path
```

### Updating Shared Files

When changes are made to these common files, projects using them need to update their submodules.

#### Method 1: Using Update Scripts (Recommended)

Each project includes update scripts for easy maintenance:

```bash
# Windows
update-common.bat

# PowerShell (with options)
.\update-submodules.ps1 -Quiet

# Cross-platform
./update-common.sh
```

#### Method 2: Using Git Aliases

```bash
# Update submodule only
git update-subs

# Update, commit, and push
git sync-common
```

#### Method 3: Manual Git Commands

```bash
# Update submodule to latest
git submodule update --remote --merge

# If changes detected, commit and push
git add MagLoop_Common_Files
git commit -m "Update MagLoop_Common_Files submodule to latest version"
git push
```

## 🛠 Development Workflow

### Making Changes to Common Files

1. **Make changes** in any project that uses these files as a submodule
2. **Navigate to the submodule directory**:
   ```bash
   cd MagLoop_Common_Files
   ```
3. **Commit and push changes**:
   ```bash
   git add .
   git commit -m "Description of changes"
   git push origin main
   ```
4. **Update other projects** using one of the methods above

### Best Practices

- ✅ **Test changes** in one project before updating others
- ✅ **Use descriptive commit messages** for common file changes
- ✅ **Update all dependent projects** after making changes
- ✅ **Maintain backward compatibility** when possible
- ✅ **Document breaking changes** in commit messages

## 📋 File Descriptions

### stepper_commands.h
- **CommandType enum** - All ESP-NOW command definitions
- **Message struct** - Packed message format for wire communication
- **Constants** - Position limits and parameter defaults

### stepper_helpers.h
- **commandToString()** - Convert command enum to readable string
- **Helper stubs** - Placeholder for future utility functions

### circular_buffer.h
- **CircularBuffer template** - Thread-safe circular buffer implementation
- **Arduino compatible** - Works with ESP32/Arduino framework
- **Generic template** - Can store any data type

## 🔧 Technical Details

- **Wire Format**: Messages use packed structs with explicit sizes for consistency
- **Compatibility**: Designed for ESP32 with Arduino framework
- **Thread Safety**: CircularBuffer is interrupt-safe for ESP-NOW callbacks
- **Memory Usage**: Minimal footprint, suitable for embedded systems

## 📄 License

This project is part of the MagLoop stepper control system.

---

*Last updated: October 2025* Submodule

This directory contains shared header files used by both StepperGUI and StepperController projects.

## Files
- `stepper_commands.h` - Command definitions and message structures for ESP-NOW communication
- `stepper_helpers.h` - Helper functions and utilities
- `circular_buffer.h` - Circular buffer implementation

## Updating the Submodule

To update the shared files to the latest version:

### On Windows (PowerShell):
```powershell
.\update_submodule.ps1
```

### On Linux/Mac (Bash):
```bash
./update_submodule.sh
```

### Manual Update:
```bash
git submodule update --remote MagLoop_Common_Files
git add MagLoop_Common_Files
git commit -m "Update MagLoop_Common_Files submodule to latest version"
git push origin master
```

## Making Changes to Shared Files

1. Edit files directly in the `MagLoop_Common_Files/` directory
2. Commit and push changes from within the submodule:
   ```bash
   cd MagLoop_Common_Files
   git add .
   git commit -m "Your change description"
   git push origin main
   cd ..
   ```
3. Update the main project to reference the new submodule version:
   ```bash
   git add MagLoop_Common_Files
   git commit -m "Update submodule to latest version"
   git push origin master
   ```

This ensures both projects stay synchronized with the shared code changes.
>>>>>>> 75882ffda0e2f0d4817a0f91c4b9325b86645829
