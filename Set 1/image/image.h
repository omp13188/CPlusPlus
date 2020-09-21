class image
{
    int m_x;
    int m_y;
    int m_width;
    int m_height;
public:
    image();
    image(int,int,int,int);
    image(const image &);
    void moveit(int,int);
    void scale(int);
    void resizeit(int,int);
    int getx();
    int gety();
    int getwidth();
    int getheight();
    void display();
};
