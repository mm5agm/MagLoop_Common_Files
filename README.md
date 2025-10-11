# MagLoop_Common_Files Submodule

This directory contains shared header files used by both StepperGUI and StepperController projects.

## Files
- `stepper_commands.h` - Command definitions and message structures for ESP-NOW communication
- `stepper_helpers.h` - Helper functions and utilities
- `circular_buffer.h` - Circular buffer implementation

## Updating the Submodule

To update the shared files to the latest version:

### Easy Method (Windows):
**Double-click "Update Submodule.lnk" shortcut in Windows File Explorer**
- ⚠️ **Important**: Run the shortcut from Windows File Explorer, NOT from inside PlatformIO/VS Code
- PlatformIO overrides .bat file associations, so the shortcut must be run from Windows Explorer
- The shortcut will open a command window, run the update, and wait for you to press a key

### Command Line Methods:

#### On Windows (PowerShell):
```powershell
.\update_submodule.ps1
```

#### On Windows (Batch):
```batch
.\update_submodule.bat
```

#### On Linux/Mac (Bash):
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

---
*Updated: October 11, 2025*