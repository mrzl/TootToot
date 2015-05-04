#pragma once

#include "ofMain.h"

#define CIRCLE_DETAIL 100

class ArcLine
{
public:
	ArcLine( ofPoint _center );
	~ArcLine();

	std::shared_ptr< ofPolyline > polyLine;

	void update();
	void draw();

	void setDegreeStart( float _degreeStart );
	void setDegreeEnd( float _degreeEnd );
	void setRadius( float _radius );
	void setCenter( ofPoint _point );

	std::shared_ptr< ofPoint > getCenter();

private:
	std::shared_ptr< ofPoint > center;
	std::shared_ptr< float > degreeStart;
	std::shared_ptr< float > degreeEnd;
	std::shared_ptr< float > radius;
};

