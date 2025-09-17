import module1;
import module3;
#include <QApplication>
import std;// this need to the last import after include
int main(int argc, char* argv[])
{
	std::cout << "start main window" << std::endl;
	QApplication app(argc, argv);
	C3 c;
	c.test();
	MyFunc();
	MainWindow m;
	m.show();
	return app.exec();
}

