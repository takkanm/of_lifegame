#include "testApp.h"
#include "cell.h"
#include "vector"

//--------------------------------------------------------------
void testApp::setup(){
    int i, j;
    int width = 20;

    for (i = 0; i < 800; i = i + width) {
        vector<cell *> line;
        for (j = 0; j < 600; j = j + width) {
            cell *c = new cell(i, j, width);
            line.push_back(c);
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