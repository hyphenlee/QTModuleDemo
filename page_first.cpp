#include "page_first.h"
#include "ui_page_first.h"
PageFirst::PageFirst(QWidget* parent)
	: QWidget(parent)
	, ui(new Ui::PageFirst())
{
	ui->setupUi(this);
}
PageFirst::~PageFirst()
{
}


