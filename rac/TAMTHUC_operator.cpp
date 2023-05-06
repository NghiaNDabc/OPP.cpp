#include<bits/stdc++.h>

using namespace std;

class TAMTHUC{
	float a, b ,c;
public:
	void nhap();
	void xuat();
	TAMTHUC operator+(TAMTHUC y);
	TAMTHUC operator-();
	float operator++();
};

void TAMTHUC :: nhap(){
	cout << "a: "; cin >> a;
	cout << "b: "; cin >> b;
	cout << "c: "; cin >> c;
}
void TAMTHUC :: xuat(){
	cout << a << "x" << (char)253 << " + " << b << "x + " << c;
	//(char)253
}
TAMTHUC TAMTHUC :: operator+(TAMTHUC y){
	TAMTHUC kq;
	kq.a = a + y.a;
	kq.b = b + y.b;
	kq.c = c + y.c;
	return kq;
}
TAMTHUC TAMTHUC :: operator-(){
//	TAMGIAC kq;
//	kq.a = -a;
//	kq.b = -b;
//	kq.c = -c;
//	return kq;
	a = -a;
	b = -b;
	c = -c;
	return *this;
}
float TAMTHUC :: operator++(){
	return a + b + c;
}
int main()
{
	TAMTHUC x, y;
	cout << "Nhap x: " << endl;
	x.nhap();
	cout << "Nhap y: " << endl;
	y.nhap();
	TAMTHUC T;
	T = x + y;
	T.xuat();
	T = -T;
	cout <<endl<< "doi dau T ";
	T.xuat();
	cout <<endl<< "TONG " << ++T;
	
}