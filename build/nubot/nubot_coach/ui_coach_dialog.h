/********************************************************************************
** Form generated from reading UI file 'coach_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COACH_DIALOG_H
#define UI_COACH_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPushButton *Score0_up;
    QPushButton *Score0_down;
    QPushButton *Score1_down;
    QPushButton *Score1_up;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_1;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QSplitter *splitter;
    QLCDNumber *Score1;
    QLCDNumber *Score0;
    QTextBrowser *all_show;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QCheckBox *obstacles;
    QCheckBox *field_home;
    QPushButton *cyan;
    QPushButton *magenta;
    QPushButton *change_ground;
    QTabWidget *tab_change;
    QWidget *control_tab;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_1;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QTextBrowser *infoShow_1;
    QTextBrowser *infoShow_2;
    QTextBrowser *infoShow_3;
    QTextBrowser *infoShow_4;
    QTextBrowser *infoShow_5;
    QLabel *text_disply;
    QTextBrowser *currentState;
    QWidget *layoutWidget_5;
    QVBoxLayout *verticalLayout;
    QPushButton *kickoff;
    QPushButton *penalty;
    QPushButton *corner;
    QPushButton *throwin;
    QPushButton *freekick;
    QPushButton *goalkick;
    QPushButton *dropball;
    QPushButton *startButton;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_2;
    QPushButton *kickoff_opp;
    QPushButton *penalty_opp;
    QPushButton *corner_opp;
    QPushButton *throwin_opp;
    QPushButton *freekick_opp;
    QPushButton *goalkick_opp;
    QPushButton *park;
    QPushButton *stopButton;
    QWidget *test_tab;
    QPushButton *test_mode;
    QPushButton *location_test;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout;
    QLabel *agentB;
    QLabel *pointA;
    QLabel *angleA;
    QLabel *angleB;
    QLabel *pointB;
    QLabel *agentA;
    QLineEdit *pointAin_X;
    QLineEdit *pointAin_Y;
    QLineEdit *pointBin_X;
    QLineEdit *pointBin_Y;
    QLineEdit *agentA_ID;
    QLineEdit *agentB_ID;
    QLineEdit *angleAin;
    QLineEdit *angleBin;
    QPushButton *test_stop;
    QPushButton *circle_test;
    QPushButton *shoot_mode;
    QTextBrowser *teststate_dis;
    QLabel *test_state;
    QPushButton *pass_mode;
    QPushButton *catch_mode;
    QCheckBox *isdribble;
    QCheckBox *isavoidobs;
    QPushButton *move_mode;
    QLabel *target;
    QLineEdit *target_y;
    QLineEdit *target_x;
    QLineEdit *shoot_force;
    QLabel *force_in;
    QLineEdit *circle_radius;
    QLineEdit *circle_vel;
    QLabel *radius_in;
    QLabel *vel_in;
    QGraphicsView *display;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_2;
    QPushButton *connectRefe;
    QPushButton *upload;
    QHBoxLayout *horizontalLayout_3;
    QLabel *IP;
    QLineEdit *IP_in;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(1110, 694);
        Score0_up = new QPushButton(Dialog);
        Score0_up->setObjectName(QStringLiteral("Score0_up"));
        Score0_up->setGeometry(QRect(490, 10, 31, 31));
        QFont font;
        font.setPointSize(15);
        Score0_up->setFont(font);
        Score0_up->setFocusPolicy(Qt::NoFocus);
        Score0_down = new QPushButton(Dialog);
        Score0_down->setObjectName(QStringLiteral("Score0_down"));
        Score0_down->setGeometry(QRect(490, 40, 31, 31));
        Score0_down->setFont(font);
        Score0_down->setFocusPolicy(Qt::NoFocus);
        Score1_down = new QPushButton(Dialog);
        Score1_down->setObjectName(QStringLiteral("Score1_down"));
        Score1_down->setGeometry(QRect(310, 40, 31, 31));
        Score1_down->setFont(font);
        Score1_down->setFocusPolicy(Qt::NoFocus);
        Score1_up = new QPushButton(Dialog);
        Score1_up->setObjectName(QStringLiteral("Score1_up"));
        Score1_up->setGeometry(QRect(310, 10, 31, 31));
        Score1_up->setFont(font);
        Score1_up->setFocusPolicy(Qt::NoFocus);
        layoutWidget = new QWidget(Dialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 550, 453, 24));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        radioButton = new QRadioButton(layoutWidget);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_2->addWidget(radioButton);

        radioButton_1 = new QRadioButton(layoutWidget);
        radioButton_1->setObjectName(QStringLiteral("radioButton_1"));
        radioButton_1->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_2->addWidget(radioButton_1);

        radioButton_2 = new QRadioButton(layoutWidget);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_2->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(layoutWidget);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_2->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(layoutWidget);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        radioButton_4->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_2->addWidget(radioButton_4);

        radioButton_5 = new QRadioButton(layoutWidget);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));
        radioButton_5->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_2->addWidget(radioButton_5);

        splitter = new QSplitter(Dialog);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(351, 11, 131, 61));
        splitter->setOrientation(Qt::Horizontal);
        Score1 = new QLCDNumber(splitter);
        Score1->setObjectName(QStringLiteral("Score1"));
        Score1->setDigitCount(2);
        Score1->setSegmentStyle(QLCDNumber::Filled);
        splitter->addWidget(Score1);
        Score0 = new QLCDNumber(splitter);
        Score0->setObjectName(QStringLiteral("Score0"));
        Score0->setDigitCount(2);
        Score0->setProperty("intValue", QVariant(0));
        splitter->addWidget(Score0);
        all_show = new QTextBrowser(Dialog);
        all_show->setObjectName(QStringLiteral("all_show"));
        all_show->setGeometry(QRect(20, 580, 1071, 101));
        QFont font1;
        font1.setPointSize(11);
        all_show->setFont(font1);
        all_show->setFocusPolicy(Qt::NoFocus);
        layoutWidget1 = new QWidget(Dialog);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(500, 550, 223, 24));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        obstacles = new QCheckBox(layoutWidget1);
        obstacles->setObjectName(QStringLiteral("obstacles"));
        obstacles->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(obstacles);

        field_home = new QCheckBox(layoutWidget1);
        field_home->setObjectName(QStringLiteral("field_home"));
        field_home->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(field_home);

        cyan = new QPushButton(Dialog);
        cyan->setObjectName(QStringLiteral("cyan"));
        cyan->setGeometry(QRect(210, 10, 91, 61));
        cyan->setFont(font);
        cyan->setFocusPolicy(Qt::NoFocus);
        cyan->setStyleSheet(QLatin1String("QPushButton{\n"
"border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"}"));
        magenta = new QPushButton(Dialog);
        magenta->setObjectName(QStringLiteral("magenta"));
        magenta->setGeometry(QRect(530, 10, 91, 61));
        magenta->setFont(font);
        magenta->setCursor(QCursor(Qt::ArrowCursor));
        magenta->setFocusPolicy(Qt::NoFocus);
        magenta->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color:rgb(245, 12, 198);border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"}"));
        change_ground = new QPushButton(Dialog);
        change_ground->setObjectName(QStringLiteral("change_ground"));
        change_ground->setGeometry(QRect(640, 10, 61, 61));
        change_ground->setFocusPolicy(Qt::NoFocus);
        change_ground->setStyleSheet(QLatin1String("QPushButton{\n"
"border-style:solid;\n"
"border-image: url(../../../src/nubot/nubot_coach/source/left2right.png)\n"
"}"));
        tab_change = new QTabWidget(Dialog);
        tab_change->setObjectName(QStringLiteral("tab_change"));
        tab_change->setGeometry(QRect(730, 10, 361, 561));
        tab_change->setFocusPolicy(Qt::NoFocus);
        control_tab = new QWidget();
        control_tab->setObjectName(QStringLiteral("control_tab"));
        layoutWidget_2 = new QWidget(control_tab);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(0, 360, 21, 161));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_1 = new QLabel(layoutWidget_2);
        label_1->setObjectName(QStringLiteral("label_1"));
        label_1->setTextFormat(Qt::AutoText);
        label_1->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_1);

        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_2);

        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_3);

        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_4);

        label_5 = new QLabel(layoutWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_5);

        layoutWidget_3 = new QWidget(control_tab);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(20, 360, 331, 161));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        infoShow_1 = new QTextBrowser(layoutWidget_3);
        infoShow_1->setObjectName(QStringLiteral("infoShow_1"));
        QFont font2;
        font2.setPointSize(10);
        infoShow_1->setFont(font2);
        infoShow_1->setFocusPolicy(Qt::NoFocus);

        verticalLayout_3->addWidget(infoShow_1);

        infoShow_2 = new QTextBrowser(layoutWidget_3);
        infoShow_2->setObjectName(QStringLiteral("infoShow_2"));
        infoShow_2->setFont(font2);
        infoShow_2->setFocusPolicy(Qt::NoFocus);

        verticalLayout_3->addWidget(infoShow_2);

        infoShow_3 = new QTextBrowser(layoutWidget_3);
        infoShow_3->setObjectName(QStringLiteral("infoShow_3"));
        infoShow_3->setFont(font2);
        infoShow_3->setFocusPolicy(Qt::NoFocus);

        verticalLayout_3->addWidget(infoShow_3);

        infoShow_4 = new QTextBrowser(layoutWidget_3);
        infoShow_4->setObjectName(QStringLiteral("infoShow_4"));
        infoShow_4->setFont(font2);
        infoShow_4->setFocusPolicy(Qt::NoFocus);

        verticalLayout_3->addWidget(infoShow_4);

        infoShow_5 = new QTextBrowser(layoutWidget_3);
        infoShow_5->setObjectName(QStringLiteral("infoShow_5"));
        infoShow_5->setFont(font2);
        infoShow_5->setFocusPolicy(Qt::NoFocus);

        verticalLayout_3->addWidget(infoShow_5);

        text_disply = new QLabel(control_tab);
        text_disply->setObjectName(QStringLiteral("text_disply"));
        text_disply->setGeometry(QRect(60, 320, 101, 31));
        currentState = new QTextBrowser(control_tab);
        currentState->setObjectName(QStringLiteral("currentState"));
        currentState->setGeometry(QRect(170, 320, 181, 31));
        QFont font3;
        font3.setPointSize(11);
        font3.setBold(true);
        font3.setWeight(75);
        font3.setStyleStrategy(QFont::PreferDefault);
        currentState->setFont(font3);
        currentState->setFocusPolicy(Qt::NoFocus);
        currentState->setStyleSheet(QStringLiteral("color:rgb(255,0,0);"));
        layoutWidget_5 = new QWidget(control_tab);
        layoutWidget_5->setObjectName(QStringLiteral("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(10, 50, 161, 271));
        verticalLayout = new QVBoxLayout(layoutWidget_5);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        kickoff = new QPushButton(layoutWidget_5);
        kickoff->setObjectName(QStringLiteral("kickoff"));
        kickoff->setFocusPolicy(Qt::NoFocus);

        verticalLayout->addWidget(kickoff);

        penalty = new QPushButton(layoutWidget_5);
        penalty->setObjectName(QStringLiteral("penalty"));
        penalty->setFocusPolicy(Qt::NoFocus);

        verticalLayout->addWidget(penalty);

        corner = new QPushButton(layoutWidget_5);
        corner->setObjectName(QStringLiteral("corner"));
        corner->setFocusPolicy(Qt::NoFocus);

        verticalLayout->addWidget(corner);

        throwin = new QPushButton(layoutWidget_5);
        throwin->setObjectName(QStringLiteral("throwin"));
        throwin->setFocusPolicy(Qt::NoFocus);

        verticalLayout->addWidget(throwin);

        freekick = new QPushButton(layoutWidget_5);
        freekick->setObjectName(QStringLiteral("freekick"));
        freekick->setFocusPolicy(Qt::NoFocus);

        verticalLayout->addWidget(freekick);

        goalkick = new QPushButton(layoutWidget_5);
        goalkick->setObjectName(QStringLiteral("goalkick"));
        goalkick->setFocusPolicy(Qt::NoFocus);

        verticalLayout->addWidget(goalkick);

        dropball = new QPushButton(layoutWidget_5);
        dropball->setObjectName(QStringLiteral("dropball"));
        dropball->setFocusPolicy(Qt::NoFocus);

        verticalLayout->addWidget(dropball);

        startButton = new QPushButton(control_tab);
        startButton->setObjectName(QStringLiteral("startButton"));
        startButton->setGeometry(QRect(10, 10, 161, 41));
        startButton->setFocusPolicy(Qt::NoFocus);
        layoutWidget_4 = new QWidget(control_tab);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(190, 50, 161, 271));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        kickoff_opp = new QPushButton(layoutWidget_4);
        kickoff_opp->setObjectName(QStringLiteral("kickoff_opp"));
        kickoff_opp->setFocusPolicy(Qt::NoFocus);

        verticalLayout_2->addWidget(kickoff_opp);

        penalty_opp = new QPushButton(layoutWidget_4);
        penalty_opp->setObjectName(QStringLiteral("penalty_opp"));
        penalty_opp->setFocusPolicy(Qt::NoFocus);

        verticalLayout_2->addWidget(penalty_opp);

        corner_opp = new QPushButton(layoutWidget_4);
        corner_opp->setObjectName(QStringLiteral("corner_opp"));
        corner_opp->setFocusPolicy(Qt::NoFocus);

        verticalLayout_2->addWidget(corner_opp);

        throwin_opp = new QPushButton(layoutWidget_4);
        throwin_opp->setObjectName(QStringLiteral("throwin_opp"));
        throwin_opp->setFocusPolicy(Qt::NoFocus);

        verticalLayout_2->addWidget(throwin_opp);

        freekick_opp = new QPushButton(layoutWidget_4);
        freekick_opp->setObjectName(QStringLiteral("freekick_opp"));
        freekick_opp->setFocusPolicy(Qt::NoFocus);

        verticalLayout_2->addWidget(freekick_opp);

        goalkick_opp = new QPushButton(layoutWidget_4);
        goalkick_opp->setObjectName(QStringLiteral("goalkick_opp"));
        goalkick_opp->setFocusPolicy(Qt::NoFocus);

        verticalLayout_2->addWidget(goalkick_opp);

        park = new QPushButton(layoutWidget_4);
        park->setObjectName(QStringLiteral("park"));
        park->setFocusPolicy(Qt::NoFocus);

        verticalLayout_2->addWidget(park);

        stopButton = new QPushButton(control_tab);
        stopButton->setObjectName(QStringLiteral("stopButton"));
        stopButton->setGeometry(QRect(190, 10, 161, 41));
        stopButton->setFocusPolicy(Qt::NoFocus);
        tab_change->addTab(control_tab, QString());
        test_tab = new QWidget();
        test_tab->setObjectName(QStringLiteral("test_tab"));
        test_mode = new QPushButton(test_tab);
        test_mode->setObjectName(QStringLiteral("test_mode"));
        test_mode->setGeometry(QRect(10, 10, 161, 41));
        test_mode->setFocusPolicy(Qt::NoFocus);
        test_mode->setStyleSheet(QStringLiteral(""));
        location_test = new QPushButton(test_tab);
        location_test->setObjectName(QStringLiteral("location_test"));
        location_test->setGeometry(QRect(10, 330, 101, 71));
        location_test->setFocusPolicy(Qt::NoFocus);
        gridLayoutWidget_2 = new QWidget(test_tab);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 60, 331, 101));
        gridLayout = new QGridLayout(gridLayoutWidget_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        agentB = new QLabel(gridLayoutWidget_2);
        agentB->setObjectName(QStringLiteral("agentB"));

        gridLayout->addWidget(agentB, 0, 3, 1, 1);

        pointA = new QLabel(gridLayoutWidget_2);
        pointA->setObjectName(QStringLiteral("pointA"));

        gridLayout->addWidget(pointA, 1, 0, 1, 1);

        angleA = new QLabel(gridLayoutWidget_2);
        angleA->setObjectName(QStringLiteral("angleA"));

        gridLayout->addWidget(angleA, 2, 0, 1, 1);

        angleB = new QLabel(gridLayoutWidget_2);
        angleB->setObjectName(QStringLiteral("angleB"));

        gridLayout->addWidget(angleB, 2, 3, 1, 1);

        pointB = new QLabel(gridLayoutWidget_2);
        pointB->setObjectName(QStringLiteral("pointB"));

        gridLayout->addWidget(pointB, 1, 3, 1, 1);

        agentA = new QLabel(gridLayoutWidget_2);
        agentA->setObjectName(QStringLiteral("agentA"));

        gridLayout->addWidget(agentA, 0, 0, 1, 1);

        pointAin_X = new QLineEdit(gridLayoutWidget_2);
        pointAin_X->setObjectName(QStringLiteral("pointAin_X"));
        pointAin_X->setFocusPolicy(Qt::ClickFocus);
        pointAin_X->setMaxLength(4);

        gridLayout->addWidget(pointAin_X, 1, 1, 1, 1);

        pointAin_Y = new QLineEdit(gridLayoutWidget_2);
        pointAin_Y->setObjectName(QStringLiteral("pointAin_Y"));
        pointAin_Y->setFocusPolicy(Qt::ClickFocus);
        pointAin_Y->setMaxLength(4);

        gridLayout->addWidget(pointAin_Y, 1, 2, 1, 1);

        pointBin_X = new QLineEdit(gridLayoutWidget_2);
        pointBin_X->setObjectName(QStringLiteral("pointBin_X"));
        pointBin_X->setFocusPolicy(Qt::ClickFocus);
        pointBin_X->setMaxLength(4);

        gridLayout->addWidget(pointBin_X, 1, 4, 1, 1);

        pointBin_Y = new QLineEdit(gridLayoutWidget_2);
        pointBin_Y->setObjectName(QStringLiteral("pointBin_Y"));
        pointBin_Y->setFocusPolicy(Qt::ClickFocus);
        pointBin_Y->setMaxLength(4);

        gridLayout->addWidget(pointBin_Y, 1, 5, 1, 1);

        agentA_ID = new QLineEdit(gridLayoutWidget_2);
        agentA_ID->setObjectName(QStringLiteral("agentA_ID"));
        agentA_ID->setFocusPolicy(Qt::ClickFocus);
        agentA_ID->setMaxLength(1);
        agentA_ID->setReadOnly(false);

        gridLayout->addWidget(agentA_ID, 0, 1, 1, 2);

        agentB_ID = new QLineEdit(gridLayoutWidget_2);
        agentB_ID->setObjectName(QStringLiteral("agentB_ID"));
        agentB_ID->setFocusPolicy(Qt::ClickFocus);
        agentB_ID->setMaxLength(1);

        gridLayout->addWidget(agentB_ID, 0, 4, 1, 2);

        angleAin = new QLineEdit(gridLayoutWidget_2);
        angleAin->setObjectName(QStringLiteral("angleAin"));
        angleAin->setFocusPolicy(Qt::ClickFocus);
        angleAin->setMaxLength(4);

        gridLayout->addWidget(angleAin, 2, 1, 1, 2);

        angleBin = new QLineEdit(gridLayoutWidget_2);
        angleBin->setObjectName(QStringLiteral("angleBin"));
        angleBin->setFocusPolicy(Qt::ClickFocus);
        angleBin->setMaxLength(4);

        gridLayout->addWidget(angleBin, 2, 4, 1, 2);

        test_stop = new QPushButton(test_tab);
        test_stop->setObjectName(QStringLiteral("test_stop"));
        test_stop->setGeometry(QRect(190, 10, 151, 41));
        test_stop->setFocusPolicy(Qt::NoFocus);
        circle_test = new QPushButton(test_tab);
        circle_test->setObjectName(QStringLiteral("circle_test"));
        circle_test->setGeometry(QRect(120, 330, 81, 71));
        circle_test->setFocusPolicy(Qt::NoFocus);
        shoot_mode = new QPushButton(test_tab);
        shoot_mode->setObjectName(QStringLiteral("shoot_mode"));
        shoot_mode->setGeometry(QRect(10, 250, 81, 71));
        shoot_mode->setFocusPolicy(Qt::NoFocus);
        teststate_dis = new QTextBrowser(test_tab);
        teststate_dis->setObjectName(QStringLiteral("teststate_dis"));
        teststate_dis->setGeometry(QRect(110, 410, 231, 31));
        QFont font4;
        font4.setPointSize(12);
        teststate_dis->setFont(font4);
        teststate_dis->setFocusPolicy(Qt::NoFocus);
        test_state = new QLabel(test_tab);
        test_state->setObjectName(QStringLiteral("test_state"));
        test_state->setGeometry(QRect(20, 410, 81, 31));
        test_state->setLayoutDirection(Qt::LeftToRight);
        pass_mode = new QPushButton(test_tab);
        pass_mode->setObjectName(QStringLiteral("pass_mode"));
        pass_mode->setGeometry(QRect(130, 170, 91, 41));
        pass_mode->setFocusPolicy(Qt::NoFocus);
        catch_mode = new QPushButton(test_tab);
        catch_mode->setObjectName(QStringLiteral("catch_mode"));
        catch_mode->setGeometry(QRect(242, 170, 101, 41));
        catch_mode->setFocusPolicy(Qt::NoFocus);
        isdribble = new QCheckBox(test_tab);
        isdribble->setObjectName(QStringLiteral("isdribble"));
        isdribble->setGeometry(QRect(40, 220, 121, 22));
        isdribble->setFocusPolicy(Qt::NoFocus);
        isavoidobs = new QCheckBox(test_tab);
        isavoidobs->setObjectName(QStringLiteral("isavoidobs"));
        isavoidobs->setGeometry(QRect(201, 220, 141, 22));
        isavoidobs->setFocusPolicy(Qt::NoFocus);
        move_mode = new QPushButton(test_tab);
        move_mode->setObjectName(QStringLiteral("move_mode"));
        move_mode->setGeometry(QRect(10, 170, 101, 41));
        move_mode->setFocusPolicy(Qt::NoFocus);
        target = new QLabel(test_tab);
        target->setObjectName(QStringLiteral("target"));
        target->setGeometry(QRect(100, 250, 51, 21));
        target_y = new QLineEdit(test_tab);
        target_y->setObjectName(QStringLiteral("target_y"));
        target_y->setGeometry(QRect(250, 250, 91, 31));
        target_y->setFocusPolicy(Qt::ClickFocus);
        target_y->setMaxLength(4);
        target_x = new QLineEdit(test_tab);
        target_x->setObjectName(QStringLiteral("target_x"));
        target_x->setGeometry(QRect(150, 250, 91, 31));
        target_x->setFocusPolicy(Qt::ClickFocus);
        target_x->setMaxLength(4);
        shoot_force = new QLineEdit(test_tab);
        shoot_force->setObjectName(QStringLiteral("shoot_force"));
        shoot_force->setGeometry(QRect(190, 286, 151, 31));
        shoot_force->setFocusPolicy(Qt::ClickFocus);
        shoot_force->setMaxLength(3);
        force_in = new QLabel(test_tab);
        force_in->setObjectName(QStringLiteral("force_in"));
        force_in->setGeometry(QRect(100, 290, 91, 21));
        circle_radius = new QLineEdit(test_tab);
        circle_radius->setObjectName(QStringLiteral("circle_radius"));
        circle_radius->setGeometry(QRect(270, 330, 71, 31));
        circle_radius->setFocusPolicy(Qt::ClickFocus);
        circle_radius->setMaxLength(3);
        circle_vel = new QLineEdit(test_tab);
        circle_vel->setObjectName(QStringLiteral("circle_vel"));
        circle_vel->setGeometry(QRect(270, 370, 71, 31));
        circle_vel->setFocusPolicy(Qt::ClickFocus);
        circle_vel->setMaxLength(4);
        radius_in = new QLabel(test_tab);
        radius_in->setObjectName(QStringLiteral("radius_in"));
        radius_in->setGeometry(QRect(220, 330, 51, 31));
        vel_in = new QLabel(test_tab);
        vel_in->setObjectName(QStringLiteral("vel_in"));
        vel_in->setGeometry(QRect(210, 370, 61, 31));
        tab_change->addTab(test_tab, QString());
        display = new QGraphicsView(Dialog);
        display->setObjectName(QStringLiteral("display"));
        display->setGeometry(QRect(20, 80, 702, 469));
        gridLayoutWidget = new QWidget(Dialog);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 10, 178, 63));
        gridLayout_2 = new QGridLayout(gridLayoutWidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        connectRefe = new QPushButton(gridLayoutWidget);
        connectRefe->setObjectName(QStringLiteral("connectRefe"));
        connectRefe->setFocusPolicy(Qt::NoFocus);

        gridLayout_2->addWidget(connectRefe, 0, 1, 1, 1);

        upload = new QPushButton(gridLayoutWidget);
        upload->setObjectName(QStringLiteral("upload"));
        upload->setFocusPolicy(Qt::NoFocus);

        gridLayout_2->addWidget(upload, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        IP = new QLabel(gridLayoutWidget);
        IP->setObjectName(QStringLiteral("IP"));

        horizontalLayout_3->addWidget(IP);

        IP_in = new QLineEdit(gridLayoutWidget);
        IP_in->setObjectName(QStringLiteral("IP_in"));
        IP_in->setFocusPolicy(Qt::ClickFocus);
        IP_in->setMaxLength(15);

        horizontalLayout_3->addWidget(IP_in);


        gridLayout_2->addLayout(horizontalLayout_3, 1, 0, 1, 2);

        layoutWidget->raise();
        layoutWidget->raise();
        splitter->raise();
        Score0_up->raise();
        Score0_down->raise();
        Score1_down->raise();
        Score1_up->raise();
        all_show->raise();
        cyan->raise();
        magenta->raise();
        change_ground->raise();
        tab_change->raise();
        display->raise();
        gridLayoutWidget->raise();

        retranslateUi(Dialog);

        tab_change->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "NuBot_Coach", 0));
        Score0_up->setText(QApplication::translate("Dialog", "+", 0));
        Score0_down->setText(QApplication::translate("Dialog", "-", 0));
        Score1_down->setText(QApplication::translate("Dialog", "-", 0));
        Score1_up->setText(QApplication::translate("Dialog", "+", 0));
        radioButton->setText(QApplication::translate("Dialog", "ALL", 0));
        radioButton_1->setText(QApplication::translate("Dialog", "NUM1", 0));
        radioButton_2->setText(QApplication::translate("Dialog", "NUM2", 0));
        radioButton_3->setText(QApplication::translate("Dialog", "NUM3", 0));
        radioButton_4->setText(QApplication::translate("Dialog", "NUM4", 0));
        radioButton_5->setText(QApplication::translate("Dialog", "NUM5", 0));
        obstacles->setText(QApplication::translate("Dialog", "Obstacles", 0));
        field_home->setText(QApplication::translate("Dialog", "AtHome", 0));
        cyan->setText(QApplication::translate("Dialog", "Cyan", 0));
        magenta->setText(QApplication::translate("Dialog", "Magenta", 0));
        change_ground->setText(QString());
        label_1->setText(QApplication::translate("Dialog", "1", 0));
        label_2->setText(QApplication::translate("Dialog", "2", 0));
        label_3->setText(QApplication::translate("Dialog", "3", 0));
        label_4->setText(QApplication::translate("Dialog", "4", 0));
        label_5->setText(QApplication::translate("Dialog", "5", 0));
        text_disply->setText(QApplication::translate("Dialog", "<html><head/><body><p>Current State</p></body></html>", 0));
        kickoff->setText(QApplication::translate("Dialog", "Kickoff", 0));
        penalty->setText(QApplication::translate("Dialog", "Penalty", 0));
        corner->setText(QApplication::translate("Dialog", "Corner", 0));
        throwin->setText(QApplication::translate("Dialog", "Throwin", 0));
        freekick->setText(QApplication::translate("Dialog", "FreeKick", 0));
        goalkick->setText(QApplication::translate("Dialog", "GoalKick", 0));
        dropball->setText(QApplication::translate("Dialog", "DropBall", 0));
        startButton->setText(QApplication::translate("Dialog", "Start", 0));
        kickoff_opp->setText(QApplication::translate("Dialog", "KickoffOpp", 0));
        penalty_opp->setText(QApplication::translate("Dialog", "PenaltyOpp", 0));
        corner_opp->setText(QApplication::translate("Dialog", "CornerOpp", 0));
        throwin_opp->setText(QApplication::translate("Dialog", "ThrowinOpp", 0));
        freekick_opp->setText(QApplication::translate("Dialog", "FreeKickOpp", 0));
        goalkick_opp->setText(QApplication::translate("Dialog", "GoalKick", 0));
        park->setText(QApplication::translate("Dialog", "Park", 0));
        stopButton->setText(QApplication::translate("Dialog", "Stop", 0));
        tab_change->setTabText(tab_change->indexOf(control_tab), QApplication::translate("Dialog", "Control", 0));
        test_mode->setText(QApplication::translate("Dialog", "TestMode", 0));
        location_test->setText(QApplication::translate("Dialog", "LocationTest", 0));
        agentB->setText(QApplication::translate("Dialog", "ID_B", 0));
        pointA->setText(QApplication::translate("Dialog", "PointA", 0));
        angleA->setText(QApplication::translate("Dialog", "AngleA", 0));
        angleB->setText(QApplication::translate("Dialog", "AngleB", 0));
        pointB->setText(QApplication::translate("Dialog", "PointB", 0));
        agentA->setText(QApplication::translate("Dialog", "ID_A", 0));
        test_stop->setText(QApplication::translate("Dialog", "TestStop", 0));
        circle_test->setText(QApplication::translate("Dialog", "Circle Test", 0));
        shoot_mode->setText(QApplication::translate("Dialog", "Shoot", 0));
        test_state->setText(QApplication::translate("Dialog", "Test State", 0));
        pass_mode->setText(QApplication::translate("Dialog", "Pass", 0));
        catch_mode->setText(QApplication::translate("Dialog", "Catch", 0));
        isdribble->setText(QApplication::translate("Dialog", "isDribble", 0));
        isavoidobs->setText(QApplication::translate("Dialog", "isAvoidObs", 0));
        move_mode->setText(QApplication::translate("Dialog", "Move", 0));
        target->setText(QApplication::translate("Dialog", "Target", 0));
        force_in->setText(QApplication::translate("Dialog", "Shoot force", 0));
        radius_in->setText(QApplication::translate("Dialog", "radius", 0));
        vel_in->setText(QApplication::translate("Dialog", "velocity", 0));
        tab_change->setTabText(tab_change->indexOf(test_tab), QApplication::translate("Dialog", "Test", 0));
        connectRefe->setText(QApplication::translate("Dialog", "Connect", 0));
        upload->setText(QApplication::translate("Dialog", "Upload", 0));
        IP->setText(QApplication::translate("Dialog", "IP", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COACH_DIALOG_H
