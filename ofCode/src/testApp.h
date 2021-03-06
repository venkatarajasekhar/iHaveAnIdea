#pragma once

#include "ofMain.h"
#include "ofxOsc.h"

#define HOST "10.10.10.115"
#define PORT 57120

//--------------------------------------------------------
class testApp : public ofBaseApp {

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
		void pullToCenter();
		void attractToCenter();
		void pushThemAway();	
		void applyPerlin();
	
		ofVec3f findPoint(string srt);
		ofVec3f center;
	
		ofVec3f initialPointsPos[50000];
	ofVec3f before;
	
	int counter;
	int rateSendNode;
		vector<ofFloatColor> colors;
		vector<ofVec3f> points;
		vector<ofVec3f> speeds;
		vector<ofVec3f> accelerations;
		vector<ofVec3f> initialPoints;
		
		float gravity;
		bool attractToCenterBool;
		ofVbo vbo;
	
	int randomNode;
		
		ofEasyCam cam;

		ofTrueTypeFont font;
		ofxOscSender sender;
	
		float           nextLetterTime;
		int             lineCount;
		int             letterCount;
		vector <string> seussLines;
	
	bool part1, part2, part3;

};

