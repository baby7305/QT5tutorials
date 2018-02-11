#include <QTextStream>
#include <QDir>

int main(void) {

	QTextStream out(stdout);
	QDir dir;

	if (dir.mkdir("mydir")) {
		out << "mydir successfully created" << endl;
		getchar();
	}

	dir.mkdir("mydir2");
	getchar();

	if (dir.exists("mydir2")) {
		dir.rename("mydir2", "newdir");
		getchar();
	}

	dir.mkpath("temp/newdir");
	getchar();
}