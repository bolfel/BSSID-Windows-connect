#include <iostream>
#include "gui/main_window.h"

int main(int argc, char** argv) {
    // Initialize the application
    QApplication app(argc, argv);

    // Create the main window
    MainWindow mainWindow;

    // Show the main window
    mainWindow.show();

    // Execute the application event loop
    return app.exec();
}