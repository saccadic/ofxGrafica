#pragma once

#include "ofMain.h"
#include "ofxGrafica.h"

class ofApp: public ofBaseApp {
public:
	void setup();
	void update();
	void draw();

	void keyPressed(int key);
	void keyReleased(int key);
	void mouseMoved(int x, int y);
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void windowResized(int w, int h);
	void dragEvent(ofDragInfo dragInfo);
	void gotMessage(ofMessage msg);

	ofxGPlot plot1, plot2, plot3;
	vector<ofxGPoint> redHistPoints, greenHistPoints, blueHistPoints;
	ofImage img;
	ofPoint imgPos;
	ofRectangle rect;
	void calculateHistograms();
};