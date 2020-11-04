#include <iostream>
using namespace std;

class Wektor2D
{
public:
    Wektor2D() { x = 0.; y = 0.; }//Konstruktor domyślny
    void setX(double nowy_X) { x = nowy_X; }
    void setY(double nowy_Y) { y = nowy_Y; }
    double getX() { return x; }
    double getY() { return y; }
    Wektor2D(double nowy_X, double nowy_Y) { x = nowy_X; y = nowy_Y; }

    friend Wektor2D operator+(Wektor2D& wek1, Wektor2D& wek2)
    {
        return Wektor2D(wek1.x + wek2.x, wek1.y + wek2.y);
    }

    friend double operator*(Wektor2D& wek1, Wektor2D& wek2)
    {
        return wek1.x * wek2.x + wek1.y * wek2.y;
    }
    //private:
    double x;
    double y;
};