#ifndef CHANGEPATIENTWIDGET_H
#define CHANGEPATIENTWIDGET_H

#include <QWidget>
#include "model/header/patienttablemodel.h"
#include "view/header/patientformwidget.h"

namespace Ui {
class ChangePatientWidget;
}

class ChangePatientWidget : public PatientFormWidget
{
    Q_OBJECT

public:
    explicit ChangePatientWidget(QWidget *parent = nullptr, PatientTableModel *patientTableModel = nullptr);
    void setFormData(QModelIndexList& selectionIndexes);
    ~ChangePatientWidget();
};

#endif // CHANGEPATIENTWIDGET_H
