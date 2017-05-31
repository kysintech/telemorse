#ifndef MAINUI_H
#define MAINUI_H

#include <QWidget>
#include <QFile>
#include <qudpsocket.h>
#include <QAudio>
#include <QMediaPlayer>
#include <QAudioFormat>
#include <QAudioOutput>
#include <QSound>
#include <Windows.h>
#include <WinBase.h>

namespace Ui {
class MainUI;
}

class MainUI : public QWidget
{
    Q_OBJECT

public:
    explicit MainUI(QWidget *parent = 0);
    ~MainUI();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainUI *ui;
    DWORD tele_freq;
    QMediaPlayer *mpl;
};

#endif // MAINUI_H
