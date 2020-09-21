class box
{
    int length;
    int breadth;
    int height;
    int volume;
public:
    box();
    box(int,int,int);
    box(const box&);
    int getlength();
    int getbreadth();
    int getheight();
    int getvolume();
    void display();
};
