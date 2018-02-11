#include <QApplication>
#include "lines.h"

int main(int argc, char *argv[]) {

	QApplication app(argc, argv);

	RadialGradient window;

	window.resize(300, 250);
	window.setWindowTitle("Radial gradient");
	window.show();

	return app.exec();
}
