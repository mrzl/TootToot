#pragma once

#include "ofMain.h"

#define CIRCLE_DETAIL 100

class ArcLine
{
public:
	ArcLine( ofPoint _center );
	~ArcLine();

	ofPolyline polyLine;

	void update();
	void draw();

	void setDegreeStart( float _degreeStart );
	void setDegreeEnd( float _degreeEnd );
	void setRadius( float _radius );
	void setCenter( ofPoint _point );

	ofPoint getCenter();

private:
	ofPoint center;
	float degreeStart;
	float degreeEnd;
	float radius;
};

