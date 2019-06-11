#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include "paintarea.h"

#include <QLabel>
#include <QComboBox>
#include <QSpinBox>
#include <QSpinBox>
#include <QPushButton>
#include <QGridLayout>
#include <QGradient>

class MainWidget : public QWidget
{
    Q_OBJECT

public:
    MainWidget(QWidget *parent = 0);
    ~MainWidget();

private:
    PaintArea *paintArea;

    // shape
    QLabel *shapeLabel;
    QComboBox *shapeComboBox;

    // pen color
    QLabel *penColorLabel;
    QFrame *penColorFrame;
    QPushButton *penColorBtn;

    // pen width
    QLabel *penWidthLabel;
    QSpinBox *penWidthSpinBox;

    // pen style
    QLabel *penStyleLabel;
    QComboBox *penStyleComboBox;

    // pen cap
    QLabel *penCapLabel;
    QComboBox *penCapComboBox;

    // pen join
    QLabel *penJoinLabel;
    QComboBox *penJoinComboBox;

    // fill
    QLabel *fillRuleLabel;
    QComboBox *fillRuleCombbBox;

    // spread
    QLabel *spreadLabel;
    QComboBox *spreadComboBox;
    QGradient::Spread spread;

    // brush collor
    QLabel *brushColorLabel;
    QFrame *brushColorFrame;
    QPushButton *brushColorBtn;

    // brush style
    QLabel *brushStyleLabel;
    QComboBox *brushStyleComboBox;

    QGridLayout *rightLayout;

protected slots:
    void ShowShape(int);
    void ShowPenColor();
    void ShowPenWidth(int);
    void ShowPenStyle(int);
    void ShowPenCap(int);
    void ShowPenJoin(int);
    void ShowFillRule();
    void ShowSpreadStyle();
    void ShowBrushColor();
    void ShowBrush(int);
};

#endif // MAINWIDGET_H
