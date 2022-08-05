#include "loginsenha.h"
#include "ui_loginsenha.h"
#include <QMessageBox>
LoginSenha::LoginSenha(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginSenha)
{
    ui->setupUi(this);
}

LoginSenha::~LoginSenha()
{
    delete ui;
}


void LoginSenha::on_btn_session_clicked()
{
    if(ui->field_login->text()== "fernando@gmail.com" && ui->field_pass->text() == "1234"){
       QMessageBox::information(this, "Home", "Logado com Sucesso!");
    }else{
        QMessageBox::critical(this, "Erro" ,"Usuário não encontrado!!!");
        //ui->statusbar->showMessage("Falha ao logar!")
        ui->field_login->clear();
        ui->field_pass->clear();
    }
}

