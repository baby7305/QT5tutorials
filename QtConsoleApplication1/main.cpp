#include <QTextStream>
#include <QFileInfo>

int main(int argc, char *argv[]) {

	QTextStream out(stdout);

//	if (argc != 2) {
//
//		qWarning("Usage: owner file");
//		return 1;
//	}

//	QString filename = argv[1];
	QString filename = "F:/test.txt";

	QFileInfo fileinfo(filename);

	QString group = fileinfo.group();
	QString owner = fileinfo.owner();

	out << "Group: " << group << endl;
	out << "Owner: " << owner << endl;
	getchar();
}