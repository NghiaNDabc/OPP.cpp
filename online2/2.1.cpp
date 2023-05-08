#include<bits/stdc++.h>

using namespace std;

class NSX{
	char TenNSX[30];
	char DC[50];
public:
	friend class HANG;
	void nhap();
	void xuat();
};
void NSX :: nhap(){
	cout << "Ten NSX: "; fflush(stdin); gets(TenNSX);
	cout << "DC: "; fflush(stdin); gets(DC);
}
void NSX :: xuat(){
	cout << "Ten NSX: " << TenNSX << endl;
	cout << "DC: " << DC<< endl;
}
class HANG{
protected:
	char TenHang[30];
	NSX x;
	float DonGia;
public:
	void nhap();
	void xuat();
	HANG();	
};
HANG :: HANG(){
	strcpy(TenHang, "");
	 strcpy(x.TenNSX,"");
strcpy(x.DC,"");
	DonGia = 0;
}
void HANG :: nhap(){
	cout << "Ten Hang: "; fflush(stdin); gets(TenHang);
	x.nhap();
	cout << "Don gia: "; cin >> DonGia;
}
void HANG :: xuat(){
	cout << "Ten Hang: " << TenHang << endl;
	x.xuat();
	cout << "Don gia "<< DonGia << endl;
	
}
class DATE{
	int D,M,Y;
public:
	void nhap();
	void xuat();
	friend class TIVI;	
};
void DATE :: nhap(){
	cout << "Ngay Thang Nam: "; cin >> D >> M >> Y;
}
void DATE :: xuat(){
	cout <<"Ngay nhap: " << D << "/" << M << "/" << Y << endl;
}
class TIVI:public HANG{
	float KichThuoc;
	DATE NgayNhap;
public:
	void nhap();
	void xuat();
	TIVI();
};
void TIVI :: nhap(){
	HANG :: nhap();
	cout <<	"Kich thuoc: "; cin >> KichThuoc;
	NgayNhap.nhap();
}
void TIVI :: xuat(){
	HANG :: xuat();
	cout << "kich thuoc: " << KichThuoc << endl;
	NgayNhap.xuat();
}
TIVI :: TIVI():HANG(){
	KichThuoc = 0;
	NgayNhap.D= 0;
	NgayNhap.M= 0;
	NgayNhap.Y= 0;
}
int main(){
	TIVI T;
	T.nhap();
	cout << "Ti vi vua nhap: " << endl;
	T.xuat();
}