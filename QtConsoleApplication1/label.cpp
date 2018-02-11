#include <QPixmap>
#include <QLabel>
#include <QHBoxLayout>
#include "label.h"

Pixmap::Pixmap(QWidget *parent)
	: QWidget(parent) {

	QHBoxLayout *hbox = new QHBoxLayout(this);

	QPixmap pixmap("rotunda.jpg");

	QLabel *label = new QLabel(this);
	label->setPixmap(pixmap);

	hbox->addWidget(label, 0, Qt::AlignTop);
}
