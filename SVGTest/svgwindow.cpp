#include "svgwindow.h"

SvgWindow::SvgWindow(QWidget *parent)
    :QScrollArea(parent)
{
    svgWidget = new SvgWidget;
    setWidget(svgWidget);
}

void SvgWindow::setFile(QString fileName)
{
    svgWidget->load(fileName);
    QSvgRenderer *render = svgWidget->renderer();
    svgWidget->resize(render->defaultSize());
}

void SvgWindow::mousePressEvent(QMouseEvent *event)
{
    mousePressPos = event->pos();
    scrollBarValuesOnMousePRess.rx() = horizontalScrollBar()->value();
    scrollBarValuesOnMousePRess.ry() = verticalScrollBar()->value();
    event->accept();
}

void SvgWindow::mouseMoveEvent(QMouseEvent *event)
{
    horizontalScrollBar()->setValue(scrollBarValuesOnMousePRess.x() -
                                    event->pos().x() + mousePressPos.x());
    verticalScrollBar()->setValue(scrollBarValuesOnMousePRess.y() -
                                  event->pos().y() + mousePressPos.y());

    horizontalScrollBar()->update();
    verticalScrollBar()->update();
    event->accept();
}
