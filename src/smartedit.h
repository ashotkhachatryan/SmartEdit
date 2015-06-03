#ifndef SMARTEDIT_H
#define SMARTEDIT_H

#include <QMainWindow>
#include <QDir>
#include <QShortcut>
#include <QToolButton>

#include "plaintextedit.h"

namespace Ui {
class SmartEdit;
}

class SmartEdit : public QMainWindow
{
    Q_OBJECT

public:
    explicit SmartEdit(QWidget *parent = 0);
    ~SmartEdit();

private:
    Ui::SmartEdit *ui;
    QString recentPath;
    const char* cppSourceTr;
    QShortcut* ctrlN;
    QShortcut* ctrlO;
    QShortcut* ctrlS;
    QShortcut* ctrlShiftS;
    QShortcut* ctrlW;
    QToolButton* plusButton;
    QTabBar* plusTabBar;

private:
    QString GetTabName();
    void ConnectSignalToSlot();
    void AddPlusButton();

public slots:
    void NewTab();
    void Open();
    bool Save();
    bool SaveAs();
    void CloseCurrent();
    void CloseTab(int pIndex);
    void textChanged();
    void tabChanged(int);
};

#endif // SMARTEDIT_H
