#include <bits/stdc++.h>

using namespace std;

class TAMGIAC
{
    float a,b,c;
public:
    void xuat();
    float dientich();
    TAMGIAC();
    TAMGIAC(float x, float y, float z);
};
void TAMGIAC ::xuat()
{
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
}
float TAMGIAC :: dientich()
{
    float p = (a+b+c)/2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}
TAMGIAC :: TAMGIAC()
{
    a = 0;
    b = 0;
    c = 0;
}
TAMGIAC :: TAMGIAC(float x, float y, float z)
{
    a = x;
    b = y;
    c = z;
}
int main()
{
    TAMGIAC T1;
    T1.xuat();
    cout << "Dien tich tam giac: " << T1.dientich() << endl;
    TAMGIAC T2(4,5,6);
    cout << "Dien tich tam giac: " << T2.dientich() << endl;

    TAMGIAC * T,*U;
    T = &T2;
    U = &T1;
    cout << U->dientich();
    return 0;
}
