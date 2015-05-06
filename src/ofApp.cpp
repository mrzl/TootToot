#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
}

//--------------------------------------------------------------
void ofApp::update(){
	container.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackground( 0 );

	ofNoFill();
	ofSetColor( 255 );

	container.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	switch( key ) {
	case 'c':
		container.setCenterCurrentLine( ofPoint( ofGetMouseX(), ofGetMouseY() ) );
		break;
	case 's':
		container.saveCurrent();
		break;
	}
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
	container.setStartDegreeCurrentLine( ofMap( x, 0, ofGetWidth(), 0, 360 ) );
	container.setEndDegreeCurrentLine( ofMap( y, 0, ofGetHeight(), 0, 360 ) );
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
	container.setRadiusCurrentLine( ofMap( x, 0, ofGetWidth(), 0, 300 ) );
	container.setDegreeForNewCenter( ofMap( y, 0, ofGetHeight(), 0, 360 ) );
	container.setRadiusForNewCenter( ofMap( y, 0, ofGetHeight(), 0, 300 ) );
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
	
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
