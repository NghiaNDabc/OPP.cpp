#include<bits/stdc++.h>

using namespace std;

class TAMGIAC{
	float a,b,c;
public: 
	void nhap();
	void xuat();
	TAMGIAC operator+(TAMGIAC y);
	float operator!();
};
void TAMGIAC :: nhap(){
	cout << "a: "; cin >> a;
	cout << "b: "; cin >> b;
	cout << "c: "; cin >> c;
}
void TAMGIAC::  xuat(){
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	cout << "c: " << c << endl;
}
TAMGIAC TAMGIAC :: operator+(TAMGIAC y){
	TAMGIAC kq;
	kq.a = a + y.a;
	kq.b = b + y.b;
	kq.c = c + y.c;
	return kq;
}
float TAMGIAC :: operator!(){
	float p = (a+b+c)/2;
	return sqrt( p *(p-a)*(p-b)*(p-c) );
}

int main(){
	TAMGIAC k, q;
	k.nhap();
	q.nhap();
	//cach 1 (khong dung)
	//TAMGIAC T = k.operator+(q);
	//cach2
	TAMGIAC T = k + q;
	T.xuat();
	cout << endl << "dien tich tam giac T: " << !T;
	return 0;
}