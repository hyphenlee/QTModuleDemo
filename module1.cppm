module;
#include"main_window.h"
#include"OldClass.h"
export module module1;
import module2;
//export import module2; 

export using ::OldClass;
export using ::MyFunc;
export using ::MainWindow;
export int add(int a, int b) {
	MyFunc();
	return a + b;
}