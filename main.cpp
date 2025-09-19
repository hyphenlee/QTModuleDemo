#include <QApplication>
import std;// this need to the last import after include
import main_window;
int main(int argc, char* argv[])
{
	std::cout << "start main window" << std::endl;
	QApplication app(argc, argv);
	MainWindow m;
	m.show();
	return app.exec();
}

