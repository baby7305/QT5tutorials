#include <QTextStream>

int main(void) {

	QTextStream out(stdout);

	QString field1 = "Name: ";
	QString field2 = "Occupation: ";
	QString field3 = "Residence: ";
	QString field4 = "Marital status: ";

	int width = field4.size();

	out << field1.rightJustified(width, ' ') << "Robert" << endl;
	out << field2.rightJustified(width, ' ') << "programmer" << endl;
	out << field3.rightJustified(width, ' ') << "New York" << endl;
	out << field4.rightJustified(width, ' ') << "single" << endl;
	getchar();
	return 0;
}