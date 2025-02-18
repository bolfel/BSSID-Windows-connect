#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include <QMainWindow>
#include <QString>
#include <QListWidget>

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onScanButtonClicked();
    void onConnectButtonClicked();

private:
    void initializeUI();
    void updateNetworkList(const QStringList &networks);
    void showError(const QString &message);

    QListWidget *networkListWidget;
    QPushButton *scanButton;
    QPushButton *connectButton;
};

#endif // MAIN_WINDOW_H