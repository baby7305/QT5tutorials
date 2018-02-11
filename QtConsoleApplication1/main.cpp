#include <QDesktopWidget>
#include <QApplication>
#include "lines.h"

int main(int argc, char *argv[]) {

	QApplication app(argc, argv);

	Donut window;

	window.resize(350, 280);
	window.setWindowTitle("Donut");
	window.show();

	return app.exec();
}