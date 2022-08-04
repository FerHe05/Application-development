#include "minhasmensagens.h"
#include "ui_minhasmensagens.h"
#include <QMessageBox>
MinhasMensagens::MinhasMensagens(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MinhasMensagens)
{
    ui->setupUi(this);
}

MinhasMensagens::~MinhasMensagens()
{
    delete ui;
}


void MinhasMensagens::on_btn_Info_clicked()
{
    QMessageBox::information(this , "Terminal root" , "Essa é minha informação");
}


void MinhasMensagens::on_btn_Danger_clicked()
{
    QMessageBox::critical(this , "Terminal root" , "Erro");

}


void MinhasMensagens::on_btn_Aviso_clicked()
{
    QMessageBox::warning(this , "Terminal root" , "Aviso");

}


void MinhasMensagens::on_btn_Sucesso_clicked()
{
    QMessageBox::about(this , "Sobre terminal root" , "<h2>Terminal root informa!</h2>"
                       "<a href = 'https://youtu.be/n4aTnBcjt6g/'> Acesse o site para mais informações.</a>"
                       "<br>"
                       "<i>Meu about</i>");
}

