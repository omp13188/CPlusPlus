enum color_t{red,green,blue,black,white};
class colour
{
    int m_r;
    int m_g;
    int m_b;
public:
    colour();
    colour(int,int,int);
    colour(int);
    int colour1();
    invert();
    colour(const colour &);
    int getrcolour();
    int getgcolour();
    int getbcolour();
    void display();
};
