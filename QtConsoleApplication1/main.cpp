#include <QApplication>
#include "label.h"

int main(int argc, char *argv[]) {

	QApplication app(argc, argv);

	Pixmap window;

	window.setWindowTitle("QPixmap");
	window.show();

	return app.exec();
}