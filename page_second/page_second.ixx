module;
#include"module_define.h"
#include <QWidget>
#include"module_define.h"
#include"wobjectcpp.h"

namespace Ui
{
	class PageSecond;
};

export module page_second;

export class MODULE_EXPORT PageSecond : public QWidget
{
	W_OBJECT(PageSecond)
public:
	PageSecond(QWidget* parent = nullptr);
	~PageSecond();
public slots:
	void onClicked();
	W_SLOT(onClicked)
private:
	QScopedPointer<Ui::PageSecond> ui{ nullptr };
};
