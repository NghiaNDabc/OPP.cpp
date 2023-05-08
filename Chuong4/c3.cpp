// cai dat lop mang voi
//- phuong thuc khoi tao co doi, khong doi
//- phuong thuc toan tu tang dan
//- phuong thuc toan tu cong hai mang cung kich thuoc
//-ham toan tu nhap xuat

#include <bits/stdc++.h>

using namespace std;

class MANG{
	float *a;
	int n;
public:
	MANG();
	MANG(int x);
	MANG operator++();
	MANG operator+(MANG y);
	friend istream& operator>>(istream& x, MANG &y);
	friend ostream& operator<<(ostream& x, MANG y);	
};
MANG :: MANG(){
	n = 0;
	a = NULL;	
}
MANG :: MANG(int x){
	n = x;
	a = new float[n];
	for(int i = 0; i < n; i++)
		a[i] = 0;	
}
MANG MANG :: operator++(){
	for(int i = 1; i < n; i++)
		for(int j = 0; j < n - i; j++)
			if(a[j] > a[j+1]) swap(a[j], a[j+1]);
		return *this;	
}
MANG MANG :: operator+(MANG y){
	MANG kq;
	if(n == y.n){
		kq.n = n;
		kq.a = new float[n];
		for(int i = 0; i < n; i++)
			kq.a[i] = a[i] + y.a[i];	
		          
	return kq;
}

istream& operator>>(istream& x, MANG &y){
	cout << "n = "; x >> y.n;
	y.a = new float[y.n];
	for(int i = 0; i < y.n; i++){
		cout << "Nhap phan tu thu " << i << " : ";
		x >> y.a[i];
	}
	return x;
}
ostream& operator<<(ostream& x, MANG y){
	for(int i = 0; i < y.n; i++){
		x << y.a[i] << " ";
	}
	return x;
}
int main(){
	MANG x,y;
	cin >> x;
	cin >> y;       
	cout << x << endl << y;
	x = ++x;
	y = ++y;
	cout << endl << x << endl << y << endl;
	MANG z = x + y;
	fstream f("D:/mang.txt", ios :: out);
	f << z;
	f.close();
}
     
     
                                                  