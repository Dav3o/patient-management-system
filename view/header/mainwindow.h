#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "model/header/patientjsonmanager.h"
#include "model/header/patienttablemodel.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public slots:
    void openAddPatientWidget();
    void openChangePatientWidget();
    void openShowPatientWidget();
    void openDeletePatientDialog();
    void cancelSelection();
    void exportPatients();

public:
    MainWindow(QWidget *parent = nullptr);
    void connectSignals();
    ~MainWindow();

private:
    PatientJsonManager *patientJsonManager = new PatientJsonManager();
    QSortFilterProxyModel *sortModel = new QSortFilterProxyModel;
    PatientTableModel *patientTableModel;
    Ui::MainWindow* ui;
    void showWarning(const QString &title, const QString &text);
    bool checkSelection();
    QString getFileFromDialog();
};
#endif // MAINWINDOW_H
