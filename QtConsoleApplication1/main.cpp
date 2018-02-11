#include <QApplication>
#include "click.h"

int main(int argc, char *argv[]) {

	QApplication app(argc, argv);

	Move window;

	window.resize(250, 150);
	window.setWindowTitle("Move");
	window.show();

	return app.exec();
}