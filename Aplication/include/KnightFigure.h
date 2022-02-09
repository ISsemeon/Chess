#pragma once

#include "include/Figure.h"
#include <QObject>

class KnightFigure : public Figure
{
	Q_OBJECT
public:
	explicit KnightFigure(QObject *parent = nullptr);

	// Figure interface
public:
 	virtual void move() override;



private:
};
