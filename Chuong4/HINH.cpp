#include <bits/stdc++.h>

using namespace std;

class BOMAYDAY{
public: 
		virtual void nhap(){
		};
		virtual void xuat(){
		};
		
};
class HINH:public BOMAYDAY{
protected:
	int MS, VI;
public:
	 void nhap();
	 void xuat();
};

class HCN:public HINH{
	float D,R;
public:
  	void nhap();
 	void xuat();	
};

void HINH :: nhap(){
	cout << "Mau sac: "; cin >> MS;
	cout << "Vien : "; cin >> VI;
}
void HINH :: xuat(){
	cout << "Xuat cua lop HINH: " << endl;
	cout << "Mau sac: " <<  MS << endl;
	cout << "Vien : " <<  VI;
}
void HCN :: nhap(){
	HINH :: nhap();
	cout << "D: "; cin >> D;
	cout << "R: "; cin >> R;
}
void HCN :: xuat(){
	cout << "HinhHCN: " << endl;
	HINH :: xuat();
	cout << "D: " <<  D << endl;
	cout << "R: " <<  R << endl;
}

int main(){
	HINH x;
	HCN y;
//	BOMAYDAY * a = &y;
	HINH *a= &y;
	a -> nhap();
	a -> xuat();
}
	
	            