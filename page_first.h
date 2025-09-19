#pragma once
#include <QMainWindow>
namespace Ui
{
	class PageFirst;
};
class  PageFirst : public QWidget
{
	Q_OBJECT
public:
	PageFirst(QWidget* parent = nullptr);
	~PageFirst();
private:
	QScopedPointer<Ui::PageFirst> ui{ nullptr };
	int data = 0;
};
class Test
{
public:
	void print() {};
};
