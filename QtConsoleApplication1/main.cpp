#include <QTextStream>
#include <QFile>

int main(int argc, char *argv[]) {

	QTextStream out(stdout);

//	if (argc != 3) {
//
//		qWarning("Usage: copyfile source destination");
//		return 1;
//	}

//	QString source = argv[1];
	QString source = "test.txt";

	if (!QFile(source).exists()) {
		qWarning("The source file does not exist");
		getchar();
		return 1;
	}

//	QString destin(argv[2]);
	QString destin("F:/test.txt");

	QFile::copy(source, destin);
	getchar();
}