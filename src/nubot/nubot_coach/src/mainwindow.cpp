#include "mainwindow.h"

MainWindow::MainWindow(int argc, char *argv[], QWidget *parent) :
    QMainWindow(parent)
//    ui(new Ui::MainWindow)
{

//    ros::NodeHandle node;
//    for(int i=0; i<argc; i++) {
//        ROS_INFO(argv[i]);
//    }

    ui=new Ui::MainWindow;
    ui->setupUi(this);
    robot2coach = new nubot::Robot2coach(argv);

    //system("sudo -S busybox route add -net 230.0.0.1 netmask 255.255.255.255 dev eth0"); //把230.0.0.1加入路由表




}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_soccer_clicked()
{
    ROS_INFO("start soccer competition");
    w = new Dialog(robot2coach->robot2coach_info, robot2coach->coach2robot_info);
    w->show();
    robot2coach->start();
}
