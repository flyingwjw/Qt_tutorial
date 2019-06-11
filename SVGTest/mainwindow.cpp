#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle(tr("SVG Viewer"));
    createMenu();

    svgWindow = new SvgWindow;
    setCentralWidget(svgWindow);
}

MainWindow::~MainWindow()
{

}

void MainWindow::createMenu()
{
    QMenu *fileMenu = menuBar()->addMenu(tr("File"));
    QAction *openAct = new QAction(tr("Open"), this);
    fileMenu->addAction(openAct);

    connect(openAct, SIGNAL(triggered(bool)), this, SLOT(slotOpenFile()));
}

void MainWindow::slotOpenFile()
{
    QString name = QFileDialog::getOpenFileName(this, tr("Open"), "/", tr("svg files(*.svg)"));
    svgWindow->setFile(name);
}
