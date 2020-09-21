enum Quadrant{First,Second,Third,Fourth};
class point
{
    int m_x;
    int m_y;
public:
    point();
    point(int,int);
    point(const point &);
    int distanceFromOrigin();
    int quadrant();
    int isOrigin();
    int isOnXAxis();
    int isOnYAxis();
    int getx();
    int gety();
    void display();
};
