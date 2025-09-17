#pragma once
#include <QMainWindow>
namespace Ui
{
	class MainWindow;
};
class  MainWindow : public QMainWindow
{
	Q_OBJECT
public:
	MainWindow(QWidget* parent = nullptr);
	~MainWindow();
private:
	QScopedPointer<Ui::MainWindow> ui{ nullptr };
	int data = 0;
};
