#include<bits/stdc++.h>

using namespace std;
class PHIEU;

class NV{
	char TenNV[30];
	char ChucVu[30];
public:
	void nhap();
	void xuat();
};
void NV :: nhap(){
	cout << "Ten Nhan Vien : "; fflush(stdin); gets(TenNV);
	cout << "Chuc Vu : "; fflush(stdin); gets(ChucVu);
}
void NV :: xuat(){
	cout << "Nhan Vien Kiem Ke : " << left <<setw(20) << TenNV;
	cout << setw(20)<<"Chuc Vu : "<< left <<ChucVu << setw(20) << endl;
}
class PHONG{
	char TenPhong[30];
	char MaPhong[10];
	char TruongPhong[40];
public:
	void nhap();
	void xuat();
};
void PHONG :: nhap(){
	cout << "Ten Phong : "; fflush(stdin); gets(TenPhong);
	cout << "Ma Phong : "; fflush(stdin); gets(MaPhong);
	cout << "Truong Phong : "; fflush(stdin); gets(TruongPhong);
	
}
void PHONG :: xuat(){
	cout << "Ten Phong : " << left <<setw(20) << TenPhong;
	cout << setw(20)<< "Ma Phong : " << left <<setw(20) << MaPhong << endl;
	cout << "Truong Phong :"  << left <<setw(20)<< TruongPhong << endl << endl;
}
class TAISAN{
	char TenTS[30];
	int SL;
	char TT[30];
public:
	void nhap();
	void xuat();
	friend class PHIEU;	
	friend void XEP(PHIEU p);
	friend void SUA(PHIEU p);
};
void TAISAN :: nhap(){
	cout << "Ten Tai San : "; fflush(stdin); gets(TenTS);
	cout << "SL: "; cin >> SL;
	cout << "Tinh Trang: "; fflush(stdin); gets(TT);	
}
void TAISAN :: xuat(){
	cout  << TenTS << setw(20)<< right << SL<< setw(20)<<TT << endl;
}

class PHIEU{
	char MaPhieu[10];
	int d,m,y;
	NV nv;
	PHONG p;
	TAISAN *x;
	int n;
public:
	void nhap();
	void xuat();
	friend void XEP(PHIEU p);
	friend void SUA(PHIEU p);
};
void PHIEU :: nhap(){
	cout << "Ma Phieu : "; fflush(stdin); gets(MaPhieu);
	cout << "Ngay: "; cin >> d;
	cout << "Thang : "; cin >> m;
	cout << "Nam : "; cin >> y;
	nv.nhap();
	p.nhap();
	cout << "Nhap n: "; cin >> n;
	x = new TAISAN[n];
	for(int i = 0; i < n; i++)
		{
			cout << "Nhap tai san thu " << i + 1 << endl;
			x[i].nhap();
		}
}
void PHIEU :: xuat(){
	cout << "Ma Phieu : "<< setw(20) << MaPhieu; 
	cout << setw(20) << "Ngay lap:"<< d << "/" << m << "/" << y << endl;
	nv.xuat();
	p.xuat();
	cout  << "Ten tai san" << setw(20)<< right<< "SO Luong " << setw(20)<< "Tinh Trang" << endl;
	for(int i = 0; i < n; i++)
		{
			x[i].xuat();
		}
	int tong = 0;
	for(int i = 0; i < n; i++) tong +=x[i].SL;
	cout << endl << "So luong tai san da kiem ke: " << n << setw(20) <<"Tong so luong:" << tong << endl;
}
void SUA(PHIEU p){
	for(int i = 0; i < p.n; i++){
		if(strcmp(p.x[i].TenTS,"May vi tinh" )== 0)
			p.x[i].SL = 20;	
	}
}
 void XEP(PHIEU p){
	for(int i = 1; i < p.n ; i++){
		for(int j = 0 ; j < p.n-i; j++)
			if(p.x[j].SL > p.x[j+1].SL)	
				swap(p.x[j],p.x[j+1]);
	}
}

int main(){
	PHIEU p;
	p.nhap();
	p.xuat();
	SUA(p);
	cout <<"====================="<< endl;
	p.xuat();
	cout << endl;
	cout <<"====================="<< endl;
	cout << "sau khi xep : " << endl;
	XEP(p);
	p.xuat();
	
	
}