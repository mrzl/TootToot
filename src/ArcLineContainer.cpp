#include "ArcLineContainer.h"


ArcLineContainer::ArcLineContainer()
{
	currentLine = std::make_shared< ArcLine >( ofPoint( ofGetWidth() / 2, ofGetHeight() / 2 ) );
}

ArcLineContainer::~ArcLineContainer()
{
}

void ArcLineContainer::update()
{
	this->currentLine->update();
}

void ArcLineContainer::draw()
{
	for( ArcLine l : this->lines ) {
		l.draw();
	}

	this->currentLine->draw();
}

void ArcLineContainer::saveCurrent()
{
	this->lines.push_back( *this->currentLine );
	ofPoint newCenter = this->calcNewCenter( *this->currentLine->getCenter(), this->radiusForNewCenter, this->degreeForNewCenter );
	this->currentLine = std::make_shared< ArcLine >( newCenter );
}

void ArcLineContainer::setDegreeForNewCenter( float _degree )
{
	this->degreeForNewCenter = _degree;
}

void ArcLineContainer::setRadiusForNewCenter( float _radius )
{
	this->radiusForNewCenter = _radius;
}

void ArcLineContainer::setStartDegreeCurrentLine( float _startDegree )
{
	this->currentLine->setDegreeStart( _startDegree );
}

void ArcLineContainer::setEndDegreeCurrentLine( float _endDegree )
{
	this->currentLine->setDegreeEnd( _endDegree );
}

void ArcLineContainer::setRadiusCurrentLine( float _radius )
{
	this->currentLine->setRadius( _radius );
}

void ArcLineContainer::setCenterCurrentLine( ofPoint _point )
{
	this->currentLine->setCenter( _point );
}

ofPoint ArcLineContainer::calcNewCenter( ofPoint _center, float _radius, float _degree )
{
	float x = _radius * std::sin( _degree );
	float y = _radius * std::cos( _degree );

	x += _center.x;
	y += _center.y;

	return ofPoint( x, y );
}

