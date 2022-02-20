#pragma once
#include "ofMain.h"

class Trail
{
	int radius;
	vector <glm::vec3> positions; //ffs 
	vector <ofPoint> points;
	ofColor tran_white;
	int max_pos = 25; //trail length
	ofPolyline trail_line;
	



	public:
		Trail(ofVec3f pos, int rad);
		void update(ofVec3f pos);
		void draw();
		void debug();
		void remove_first_pos();

		vector <glm::vec3> get_positions();
};

