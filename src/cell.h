#ifndef lifeGame_cell_h
#define lifeGame_cell_h

class cell {
private:
    int pos_x;
    int pos_y;
    int width;
    bool life;
    
public:
    cell(int x, int y, int width);
    void die();
    void birth();
    void draw();    
};

#endif
