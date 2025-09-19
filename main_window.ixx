module;
#include <QMainWindow>
#include "page_second/wobjectdefs.h"
namespace Ui
{
	class MainWindow;
};
export module main_window;
export class  MainWindow : public QMainWindow
{
	W_OBJECT(MainWindow)
public:
	MainWindow(QWidget* parent = nullptr);
	~MainWindow();
private:
	QScopedPointer<Ui::MainWindow> ui{ nullptr };
	int data = 0;
};
