#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "coach_dialog.h"
#include "debug_dialog.h"
#include <robot2coach.h>
#include "ui_mainwindow.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(int argc, char *argv[], QWidget *parent = nullptr);
    ~MainWindow();



private slots:
    void on_soccer_clicked();
    void on_debug_clicked();

private:
    Ui::MainWindow *ui;
    Dialog *w;
    debug_Dialog *d;
    
    nubot::Robot2coach *robot2coach;
//    void on_action_connect_triggered()
//    {
//        //nubot::Robot2coach robot2coach(argv);
//        //Dialog w(robot2coach.robot2coach_info, robot2coach.coach2robot_info);
//       // w.show();
//    }
};

#endif // MAINWINDOW_H
