# Windows Router Tool

## Overview
The Windows Router Tool is a utility designed to help users connect to specific routers in a mesh network using their BSSID. This tool provides a graphical user interface (GUI) for easy interaction and management of network connections.

## Features
- Scan for available routers in the vicinity.
- Connect to a specific router using its BSSID.
- User-friendly GUI for seamless navigation and operation.

## Project Structure
```
windows-router-tool
├── src
│   ├── main.cpp          # Entry point of the application
│   ├── utils
│   │   ├── network_utils.cpp  # Implementation of network operations
│   │   └── network_utils.h    # Declarations for network operations
│   └── gui
│       ├── main_window.cpp     # Implementation of the main GUI window
│       └── main_window.h       # Declarations for the main GUI window
├── CMakeLists.txt        # Build configuration file
└── README.md             # Documentation for the project
```

## Setup Instructions
1. Clone the repository:
   ```
   git clone <repository-url>
   ```
2. Navigate to the project directory:
   ```
   cd windows-router-tool
   ```
3. Create a build directory and navigate into it:
   ```
   mkdir build && cd build
   ```
4. Run CMake to configure the project:
   ```
   cmake ..
   ```
5. Build the project:
   ```
   cmake --build .
   ```

## Usage Guidelines
- Launch the application by running the compiled executable.
- Use the GUI to scan for available networks.
- Select a network and enter the BSSID to connect.

## Additional Information
This tool is designed for Windows operating systems and requires appropriate permissions to access network interfaces. Ensure that your network adapter is enabled and functioning correctly before using the tool.