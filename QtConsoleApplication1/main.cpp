#include <QApplication>
#include "label.h"

int main(int argc, char *argv[]) {

	QApplication app(argc, argv);

	Ledit window;

	window.setWindowTitle("QLineEdit");
	window.show();

	return app.exec();
}
