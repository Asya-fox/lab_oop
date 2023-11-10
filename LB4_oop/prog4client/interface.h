#ifndef INTERFACE_H
#define INTERFACE_H

#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>

class TInterface : public QWidget
{
    Q_OBJECT
    QLineEdit*** numeratorInputs;
    QLineEdit*** denominatorInputs;
    QPushButton* button1, * button2, * button3, * button4;

    QPushButton* setOrderMatrixButton;
    QLineEdit* setOrderMatrixLineEdit;
    QLabel* setOrderMatrixLabel;

    QLabel* errorSetOrderMatrixLabel;

    QLabel* result, *** resultMatrix;

public:
    TInterface(QWidget *parent = nullptr);
    ~TInterface();

public slots:

    void answer(QString message);

private slots:

    void formRequest();
    void changeOrderMatrix();

signals:

    void request(QString message);

private:


    int n;

    const int wInput = 100, hInput = 20;
    const int wButton = 125, hButton = 25;
    const int minOrderMatrix = 1, maxOrderMatrix = 10;

    int wWindow, hWindow;

    void initWindow();
    void initButton();
    void initInput();
    void initLabel();

    void setGeometry();

    void setDefaultLabel();

};

#endif // INTERFACE_H
