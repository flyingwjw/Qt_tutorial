#ifndef SVGWIDGET_H
#define SVGWIDGET_H

#include <QtSvg>
#include <QSvgWidget>
#include <QSvgRenderer>

class SvgWidget : public QSvgWidget
{
    Q_OBJECT
public:
    SvgWidget(QWidget *parent=0);
    void wheelEvent(QWheelEvent *);

private:
    QSvgRenderer *render;
};

#endif // SVGWIDGET_H
