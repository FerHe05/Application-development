/********************************************************************************
** Form generated from reading UI file 'loginsenha.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINSENHA_H
#define UI_LOGINSENHA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginSenha
{
public:
    QWidget *centralwidget;
    QLabel *label_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *field_login;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *field_pass;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_session;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LoginSenha)
    {
        if (LoginSenha->objectName().isEmpty())
            LoginSenha->setObjectName(QString::fromUtf8("LoginSenha"));
        LoginSenha->resize(679, 431);
        centralwidget = new QWidget(LoginSenha);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(240, 10, 211, 71));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(130, 90, 411, 241));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        field_login = new QLineEdit(widget);
        field_login->setObjectName(QString::fromUtf8("field_login"));
        field_login->setStyleSheet(QString::fromUtf8("background: #fff"));

        horizontalLayout->addWidget(field_login);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        field_pass = new QLineEdit(widget);
        field_pass->setObjectName(QString::fromUtf8("field_pass"));
        field_pass->setStyleSheet(QString::fromUtf8("background: white"));
        field_pass->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(field_pass);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        btn_session = new QPushButton(widget);
        btn_session->setObjectName(QString::fromUtf8("btn_session"));

        horizontalLayout_3->addWidget(btn_session);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        LoginSenha->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LoginSenha);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 679, 22));
        LoginSenha->setMenuBar(menubar);
        statusbar = new QStatusBar(LoginSenha);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        LoginSenha->setStatusBar(statusbar);

        retranslateUi(LoginSenha);

        QMetaObject::connectSlotsByName(LoginSenha);
    } // setupUi

    void retranslateUi(QMainWindow *LoginSenha)
    {
        LoginSenha->setWindowTitle(QCoreApplication::translate("LoginSenha", "LoginSenha", nullptr));
        label_3->setText(QCoreApplication::translate("LoginSenha", "<html><head/><body><h1 style=\" margin-top:18px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:xx-large; font-weight:700;\">Logar no Sistema</span></h1></body></html>", nullptr));
        label->setText(QCoreApplication::translate("LoginSenha", "Login: ", nullptr));
        label_2->setText(QCoreApplication::translate("LoginSenha", "Senha:", nullptr));
        btn_session->setText(QCoreApplication::translate("LoginSenha", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginSenha: public Ui_LoginSenha {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINSENHA_H
