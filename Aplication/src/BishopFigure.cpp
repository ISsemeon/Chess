#include "include/BishopFigure.h"
#include <QDebug>

BishopFigure::BishopFigure(QObject *parent)
: Figure(parent)
{

}


void BishopFigure::move()
{
	qDebug("move");
}

void BishopFigure::info()
{
	Figure::info();
	qDebug() << "rank BishopFigure";
}

void BishopFigure::setColor(Color newColor)
{
	Figure::setColor(newColor);

	(Figure::color() == Figure::WHITE) ?
	setPicture("qrc:/qml/Pictures/whiteBishop.svg"):
	setPicture("qrc:/qml/Pictures/blackBishop.svg");
}