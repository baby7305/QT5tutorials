#include <QApplication>
#include <click.h>

int main(int argc, char *argv[]) {

	QApplication app(argc, argv);

	Disconnect window;

	window.resize(250, 150);
	window.setWindowTitle("Disconnect");
	window.show();

	return app.exec();
}