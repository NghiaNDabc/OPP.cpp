#include<bits/stdc++.h>

using namespace std;
class NCC{
	char MaNCC[10];
	char TenNCC[50];
	char DCNCC[50];
public:
	void nhap();
	void xuat();
};
void NCC :: nhap()
{
	cout << "Ma ncc: "; fflush(stdin); gets(MaNCC);
	cout << "TenNCC: "; fflush(stdin); gets(TenNCC);
	cout << "DCNCC: "; fflush(stdin); gets(DCNCC);
}
void NCC :: xuat(){
		cout << "Ma ncc: " << setw(15)<< MaNCC;
	cout << setw(15) << "TenNCC: " << TenNCC << endl;
	cout << "DCNCC: " << DCNCC << endl;
}
class HANG{
	char TenHang[30];
	float DG;
	int SL;
public:
	friend class PHIEU;
	void nhap();
	void xuat();
};
void HANG :: nhap(){
	cout << "Ten hang: "; fflush(stdin); gets(TenHang);
	cout << "DG: "; cin >> DG;
	cout << "SL: "; cin >> SL;
}
void HANG :: xuat(){
	cout << setw(15) << TenHang << setw(10) << DG << setw(10) << SL <<setw(10) << DG * SL<< endl;
}
class PHIEU{
	char MaPhieu[10];
	char NgayLap[20];
	NCC x;
	HANG * y;
	int n;
public:
	void nhap();
	void xuat();
	
};
void PHIEU :: nhap(){
	cout << "MaPhieu: "; fflush(stdin); gets(MaPhieu);
	cout << "NgayLap: "; fflush(stdin); gets(NgayLap);
	x.nhap();
	cout << "Nhap n: "; cin >> n;
	y = new HANG[n];
	for(int i =0; i < n; i++)
		{	
			cout << "Nhap hang thu " << i + 1 << ":"<< endl;
			y[i].nhap();
		}
}
void PHIEU :: xuat(){
	cout << setw(30) << "PHIEU NHAP HANG " << endl;
	cout << "MaPhieu: "<< setw(15) << MaPhieu;
	cout << setw(15) <<  "NgayLap: " << setw(15) << NgayLap << endl;	
	x.xuat();
	cout << setw(15) << "Ten Hang "<< setw(10) << "Don Gia "<< setw(10) << "So Luong" <<setw(10) << "Thanh tien" << endl;
	for(int i =0; i < n; i++)
		y[i].xuat();
	float tongtien = 0;
		for(int i =0; i < n; i++)
		 	tongtien += y[i].DG * y[i].SL;
	cout << setw(50) << "Cong thanh tien: " << tongtien;
}
int main()
{
	PHIEU p;
	p.nhap();
	p.xuat();
	
}
