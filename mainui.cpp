#include "mainui.h"
#include "ui_mainui.h"

MainUI::MainUI(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainUI)
{
    ui->setupUi(this);
    tele_freq = 800;
    mpl = new QMediaPlayer(this);
    mpl->setMedia(QUrl("qrc:/youmeiyounameyishougehuirangnixiangqiwo.mp3"));
    mpl->setVolume(30);
    Beep(tele_freq,1000);
    Sleep(1000);

}

MainUI::~MainUI()
{
    delete ui;
}

void MainUI::on_pushButton_clicked()
{
   mpl->play();
}

void MainUI::on_pushButton_2_clicked()
{
    mpl->pause();
}
