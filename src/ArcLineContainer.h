#pragma once

#include "ofMain.h"

#include "ArcLine.h"

class ArcLineContainer
{
public:
	ArcLineContainer();
	~ArcLineContainer();

	ArcLine currentLine;
	std::vector< ArcLine > lines;

	void update();
	void draw();

	void saveCurrent();

	void setDegreeForNewCenter( float _degree );
	void setRadiusForNewCenter( float _radius );
	void setStartDegreeCurrentLine( float _startDegree );
	void setEndDegreeCurrentLine( float _endDegree );
	void setRadiusCurrentLine( float _radius );
	void setCenterCurrentLine( ofPoint _point );
	
private:
	float degreeForNewCenter;
	float radiusForNewCenter;

	ofPoint calcNewCenter( ofPoint _center, float _radius, float _degree );
};

