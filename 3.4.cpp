#include<bits/stdc++.h>

using namespace std;
class PTB2{
	float a,b,c;
public:
	void NHAP();
	void XUAT();
	void GIAI();
	PTB2();
	PTB2(float x, float y, float z);
};
void PTB2 :: NHAP(){
	cout << "a: "; cin >> a;
	cout << "b: "; cin >> b;
	cout << "c: "; cin >> c;
}
void PTB2 :: XUAT(){
	cout << a << "X" << (char)253 << " + " << b << "X + " << c << endl; 
}
void :: PTB2 :: GIAI(){
	if (a == 0) cout << "Khong phai phuong trinh b2";
	else	
	{
		float delta = b*b - 4*a*c;
		if(delta < 0) cout << "Phuong trinh vo nhiem.";
		else
		{
			cout<<"X1="<<(-b+sqrt(delta))/(2*a)<<endl; 
 			cout<<"X2="<<(-b-sqrt(delta))/(2*a)<<endl;
		}
	}
}
PTB2 :: PTB2(){
	a = 0; b = 0; c = 0;
}
PTB2 :: PTB2(float x, float y, float z){
	a = x; b = y; c = z;
}
int main(){
	PTB2 P(1,2,1); P.XUAT(); P.GIAI();
	cout << endl;
	PTB2 Q; Q.NHAP(); Q.XUAT();Q.GIAI();
}