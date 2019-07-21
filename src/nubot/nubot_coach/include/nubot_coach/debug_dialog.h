#ifndef DEBUG_DIALOG_H
#define DEBUG_DIALOG_H

#include <QDialog>
#include <robot2coach.h>

#include "nubot/core/core.hpp"
#include <QDebug>
#include <nubot_common/WorldModelInfo.h>
#include <nubot_common/CoachInfo.h>
#include <nubot/world_model/world_model.h>
#include <dynamic_reconfigure/server.h>
#include <std_msgs/Header.h>
#include <std_msgs/String.h>
#include <ros/ros.h>
#include <QtCore>

using namespace nubot;

namespace Ui {
class debug_Dialog;
}

class debug_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit debug_Dialog(nubot::Robot2coach_info & robot2coach, nubot::MessageFromCoach & coach2robot, QWidget *parent=0) ;
    ~debug_Dialog();
public:
    ros::Publisher   pub;
    ros::Timer      timer;
public slots:
    void on_car1_clicked();
    void on_car2_clicked();
    void on_car3_clicked();
private:
    Ui::debug_Dialog *ui;
};

using namespace nubot;

//Robot2coach::Robot2coach(char *argv[])
//{
//    ros::Time::init();
//    boost::shared_ptr<ros::NodeHandle> nh_;
//    #ifdef SIMULATION
//    std::string robot_name = argv[1];
//    nh_= boost::make_shared<ros::NodeHandle>(robot_name);
//    robot2coachinfo_sub_ = nh_->subscribe("/"+robot_name+"2/worldmodel/worldmodelinfo", 1, &Robot2coach::update_info,this);
//    coach2robotinfo_pub_ = nh_->advertise<nubot_common::CoachInfo>("receive_from_coach",30);
//    coachinfo_publish_timer_ = nh_->createTimer(ros::Duration(0.03),&Robot2coach::publish,this);
//    #else
//    nh_= boost::make_shared<ros::NodeHandle>();
//    robot2coachinfo_sub_ = nh_->subscribe("worldmodel/worldmodelinfo", 1, &Robot2coach::update_info,this);
//    coach2robotinfo_pub_ = nh_->advertise<nubot_common::CoachInfo>("nubot_coach/coachinfo",30);
//    coachinfo_publish_timer_ = nh_->createTimer(ros::Duration(0.03),&Robot2coach::publish,this);
//    #endif
//}
//Robot2coach::~Robot2coach()
//{
//}

#endif // DEBUG_DIALOG_H
