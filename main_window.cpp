module;
#include "ui_main_window.h"
#include <qtabwidget.h>
#include "page_second/wobjectimpl.h"
module main_window;
import page_first;
import page_second;
MainWindow::MainWindow(QWidget* parent)
	: QMainWindow(parent)
	, ui(new Ui::MainWindow())
{
	ui->setupUi(this);
	PageFirst* first = new PageFirst(ui->tabWidget);
	PageSecond* second = new PageSecond(ui->tabWidget);
	ui->tabWidget->addTab(first, "First");
	ui->tabWidget->addTab(second, "Second");
}
MainWindow::~MainWindow()
{
}

W_OBJECT_IMPL(MainWindow)
