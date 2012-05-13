#include "testApp.h"
#include "cell.h"
#include "vector"

//--------------------------------------------------------------
void testApp::setup(){
    int i, j;

    int window_hight = ofGetWindowHeight();
    int window_width = ofGetWindowWidth();
    cell_width = 20;

    for (i = 0; i < window_width; i = i + cell_width) {
        vector<cell *> line;
        
        for (j = 0; j < window_hight; j = j + cell_width) {
            line.push_back(new cell(i, j, cell_width));
        }

        cells.push_back(line);
    }
}

//--------------------------------------------------------------
void testApp::update(){
}

//--------------------------------------------------------------
void testApp::draw(){
    vector< vector<cell *> >::iterator line_iterator = cells.begin();
    
    while (line_iterator != cells.end()) {
        vector<cell *> line = *(line_iterator++);
        vector<cell *>::iterator cell_iterator = line.begin();
        
        while(cell_iterator != line.end()) {
            (*(cell_iterator++))->draw();
        }
    }
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}