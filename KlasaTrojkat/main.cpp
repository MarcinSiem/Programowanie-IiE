#include <iostream>


using namespace std;

struct Punkt {
double x;
double y;

Punkt(): x(0),y(0){}
Punkt(double _x, double _y): x(_x), y(_y){}
Punkt& operator=(const Punkt &p){
    if(this != &p){
    x = p.x;
    y = p.y;
    }
    return *this;
}
void wektor(double a, double b){
    x += a;
    y += b;
}
    friend ostream<<(ostream& f, const Punkt& p){
    return f << "(" << x << "," << y << ")";
    }
    bool operator==(const Punkt& p){
    return (x == p.x && y == p.y);
    }
    bool operator!=(const Punkt& p){
    return (x != p.x || y != p.y);
    }
};

class Trojkat{
private:
    Punkt p1;
    Punkt p2;
    Punkt p3;
public:
    Trojkat():p1(0,0), p2(1,0), p3(0,1){}
    Trojkat(Punkt _p1, Punkt _p2, Punkt _p3):p1(_p1),p2(_p2),p3(_p3){}
    void przesun(double dx, double dy){
    p1.wektor(dx,dy);
    p2.wektor(dx,dy);
    p3.wektor(dx,dy);
    }
    //bool nalezy(Punkt& p){}
    friend ostream& operator<<(ostream& f, const Trojkat& t){
    return f <<"[" << t.p1 << " " << t.p2 << " " << t.p3 << "]";
    }
    bool operator==(const Trojkat& t){
    return (p1 == t.p1 && p2 == t.p2 && p3 == t.p3);
    }
    bool operator!=(const Trojkat& t){
    return (p1 != t.p1 || p2 != t.p2 || p3 != t.p3);
    }
};

int main()
{
    return 0;
}
