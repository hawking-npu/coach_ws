#include <QIcon>
#include <QDebug>
#include <QApplication>
#include <mainwindow.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QString myDir=QCoreApplication::applicationDirPath();
    QDir::setCurrent(myDir);                                                     //改变当前目录到程序目录
    a.setWindowIcon(QIcon("../../../src/nubot/nubot_coach/source/hawking.jpeg"));//改变应用程序图标

    /** 初始化ROS */
    ros::init(argc, argv,"nubot_coach_node");
    ros::Time::init();
    ROS_INFO("start coach process");

    MainWindow w(argc, argv);
    w.show();

    return a.exec();
}
