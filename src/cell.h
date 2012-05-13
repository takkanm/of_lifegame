#ifndef lifeGame_cell_h
#define lifeGame_cell_h

class cell {
private:
    int pos_x;
    int pos_y;
    int width;
    bool life;

    void drawCellLine();
    void drawCell();
    void setCellColor();

public:
    cell(int x, int y, int width);
    void toggle();
    void die();
    void birth();
    void draw();    
};

#endif
