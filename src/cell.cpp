#include <iostream>
#include "ofMain.h"
#include "cell.h"


//--------------------------------------------------------------
cell::cell(int x, int y, int w) {
    life = false;
    width = w;
    pos_x = x;
    pos_y = y;
}    

void cell::draw() {
    drawCellLine();
    drawCell();
}

void cell::drawCellLine() {
    ofSetColor(0, 0, 0);
    ofRect(pos_x, pos_y, width, width);
}

void cell::drawCell() {
    setCellColor();
    ofRect(pos_x + 1, pos_y + 1, width - 2, width - 2);
}

void cell::setCellColor() {
    if (life) {
        ofSetColor(0, 0, 0);
    } else {
        ofSetColor(256, 256, 256);
    }
}

void cell::toggle() {
    life ? die() : birth();
}

void cell::die() {
    life = false;
}

void cell::birth() {
    life = true;
}