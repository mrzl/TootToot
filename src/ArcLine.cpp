#include "ArcLine.h" 


ArcLine::ArcLine( ofPoint _center )
{
	this->setDegreeStart( 0.0f );
	this->setDegreeEnd( 0.0f );
	this->setRadius( 100.0f );
	this->setCenter( _center );
}

ArcLine::~ArcLine()
{
}

void ArcLine::update()
{
	this->polyLine.clear();
	this->polyLine.arc( center.x, center.y, radius, radius, degreeStart, degreeEnd, CIRCLE_DETAIL );
}

void ArcLine::draw()
{
	this->polyLine.draw();
}

void ArcLine::setDegreeStart( float _degreeStart )
{
	this->degreeStart = _degreeStart;
}

void ArcLine::setDegreeEnd( float _degreeEnd )
{
	this->degreeEnd = _degreeEnd;
}

void ArcLine::setRadius( float _radius )
{
	this->radius =_radius;
}

void ArcLine::setCenter( ofPoint _point )
{
	this->center = _point;
}

ofPoint ArcLine::getCenter()
{
	return center;
}


