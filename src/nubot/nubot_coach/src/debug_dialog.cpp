#include "debug_dialog.h"
#include "ui_debug_dialog.h"

using namespace nubot;
using namespace std;

debug_Dialog::debug_Dialog(nubot::Robot2coach_info & robot2coach, nubot::MessageFromCoach & coach2robot, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::debug_Dialog)
{
    ui->setupUi(this);
}

debug_Dialog::~debug_Dialog()
{
    delete ui;
}

void debug_Dialog::on_car1_clicked()
{
    ros::Time::init();
    boost::shared_ptr<ros::NodeHandle> nh_;
    nh_= boost::make_shared<ros::NodeHandle>();
    pub=nh_->advertise<nubot_common::CoachInfo>("/nubotcontrol/velcmd",30);
}

void debug_Dialog::on_car2_clicked()
{
    ros::Time::init();
    boost::shared_ptr<ros::NodeHandle> nh_;
    nh_= boost::make_shared<ros::NodeHandle>();
    pub=nh_->advertise<nubot_common::CoachInfo>("/nubotcontrol/velcmd",30);
}

void debug_Dialog::on_car3_clicked()
{
    ros::Time::init();
    boost::shared_ptr<ros::NodeHandle> nh_;
    nh_= boost::make_shared<ros::NodeHandle>();
    pub=nh_->advertise<nubot_common::CoachInfo>("/nubotcontrol/velcmd",30);
}
