module;
#include "ui_page_second.h"
#include"wobjectimpl.h"
module page_second;

PageSecond::PageSecond(QWidget* parent)
	: QWidget(parent)
	, ui(new Ui::PageSecond())
{
	ui->setupUi(this);
	connect(ui->pushButton, &QPushButton::clicked, this, &PageSecond::onClicked);
}
PageSecond::~PageSecond()
{
}

void PageSecond::onClicked()
{
	ui->label->setText("clicked");
}

W_OBJECT_IMPL(PageSecond)
