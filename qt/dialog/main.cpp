#include <window.h>
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	
	Window1 window;
	window.show();

	return app.exec();
}
