#include "main_window.h"
#include <QVBoxLayout>
#include <QPushButton>
#include <QListWidget>
#include <QMessageBox>
#include <QStringList>
#include "network_utils.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) {
    setWindowTitle("Windows Router Tool");
    resize(400, 300);

    QVBoxLayout *layout = new QVBoxLayout;

    networkListWidget = new QListWidget(this);
    layout->addWidget(networkListWidget);

    QPushButton *connectButton = new QPushButton("Connect to Selected Router", this);
    layout->addWidget(connectButton);

    QWidget *centralWidget = new QWidget(this);
    centralWidget->setLayout(layout);
    setCentralWidget(centralWidget);

    connect(connectButton, &QPushButton::clicked, this, &MainWindow::connectToRouter);
    updateNetworkList();
}

void MainWindow::updateNetworkList() {
    QStringList networks = scanNetworks(); // Assuming scanNetworks() returns a QStringList of available networks
    networkListWidget->clear();
    networkListWidget->addItems(networks);
}

void MainWindow::connectToRouter() {
    QListWidgetItem *selectedItem = networkListWidget->currentItem();
    if (selectedItem) {
        QString bssid = selectedItem->text(); // Assuming the BSSID is the text of the item
        if (connectToRouter(bssid.toStdString())) { // Assuming connectToRouter() returns a bool
            QMessageBox::information(this, "Success", "Connected to " + bssid);
        } else {
            QMessageBox::warning(this, "Failure", "Failed to connect to " + bssid);
        }
    } else {
        QMessageBox::warning(this, "No Selection", "Please select a router to connect.");
    }
}