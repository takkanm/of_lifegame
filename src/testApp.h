#pragma once

#include "ofMain.h"
#include "cell.h"
#include "vector"

class testApp : public ofBaseApp{
    private:
        vector< vector<cell *> > cells;
        int cell_width;
        cell *before_change_cell;

        void clearCells();
        void toggleCell(int x, int y);
        cell* current_cell(int x, int y);

	public:
		void setup();
		void update();
		void draw();

		void keyPressed  (int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
};
