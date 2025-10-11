# MagLoop_Common_Files Submodule

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