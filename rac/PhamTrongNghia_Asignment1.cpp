#include <bits/stdc++.h>

using namespace std;

class PHIEU;
class NCC
{
	char MaNCC[10];
	char TenNCC[35];
	char DC[50];
	char SDT[15];
public:
	void nhap();
	void xuat();
};

void NCC :: nhap()
{
	cout << "ma ncc: "; fflush(stdin); gets(MaNCC);
	cout << "ten ncc: "; fflush(stdin); gets(TenNCC);
	cout << "dia chi"; fflush(stdin); gets(DC);
	cout << "sdt: "; fflush(stdin);gets(DC);
}
void NCC :: xuat()
{
	cout << left << setw(20) <<"Ma nha cung cap: " << MaNCC;
	cout << right << setw(25)<< "Ten nha cung cap: " << TenNCC << endl;
	cout <<"Dia chi: " << DC << setw(10) << "SDT" <<SDT << endl; 
}
class SANPHAM
{
	char MaSP[10];
	char TenSP[35];
	int SL;
	float DG;
public:
	void nhap();
	void xuat();
	friend class PHIEU;
	friend void sortP(PHIEU x);
	friend void check(PHIEU x);	
};

void SANPHAM :: nhap()
{
	cout << "Masp: "; fflush(stdin); gets(MaSP);
	cout << "Ten SP: "; fflush(stdin); gets(TenSP);
	cout << "So luong: "; cin >> SL;
	cout << "don gia :" ; cin >> DG;	
}
void SANPHAM :: xuat()
{
	cout << left <<setw(12) <<MaSP << left << setw(20) << TenSP << setw(10) << SL << setw(10) << DG << setw(10) << SL*DG<< endl;
}

class PHIEU
{
	char MaPhieu[10];
	int D,M,Y;
	NCC ncc;
	SANPHAM* x;
	int n;
public:
	void nhap();
	void xuat();
	friend void sortP(PHIEU x);
	friend void check(PHIEU x);	
};
void PHIEU :: nhap()
{
	cout << "Nhap maphieu: ";fflush(stdin); gets(MaPhieu);
	cout << "Ngay lap: "; cin >> D;
	cout << "Thang lap: "; cin >> M;
	cout << "Nam lap: "; cin >> Y;
	ncc.nhap();
	cout << "Nhap n: " ;cin >> n;
	x = new SANPHAM[n];
	for(int i = 0; i < n; i++)
		x[i].nhap();		
}

void PHIEU :: xuat()
{	cout << right << setw(50) << "PHIEU VAN PHONG PHAM" << endl;
	cout << left <<setw(20)<< "Ma phieu: " <<MaPhieu ;
	cout<<right <<setw(15) <<"Ngay lap:  " << D << "/" <<M <<"/" << Y << endl;
	ncc.xuat();
	cout << left <<setw(12) <<"Ma SP"<< setw(20) << "Ten san pham" << setw(10) << "SoLuong" << setw(10) << "Don gia" << setw(10) << "Thanh tien"<< endl;
	for(int i = 0; i < n; i++)
		x[i].xuat();
	int TONG = 0;
	for(int i = 0; i < n; i++)
		TONG =+ x[i].DG*x[i].SL;
	cout << right <<setw(25) << "Tong: " <<right << setw(25) <<  TONG << endl; 
	cout << setw(20) << "Hieu truong" <<setw(20)<< "Phong tai chinh" << setw(20)<< "Nguoi lap" << endl;
}
void check(PHIEU x)
{	
	int a = 0;
	for(int i = 0; i < x.n; i++)
		if(x.x[i].SL < 80) a++;
	cout << endl<< "So san pham < 80: " << a;
}
void sortP(PHIEU x)
{
	for(int i = 1; i < x.n ; i++)
		for(int j = 0; j < x.n - 1 ; j++)
			if(x.x[j].DG > x.x[j + 1].DG) 
			{
				
			
				SANPHAM temp;
				temp = x.x[j];
				x.x[j] = x.x[j + 1];
				x.x[j + 1] = temp;
			}
				
}

int main()
{
	PHIEU x;
	x.nhap();
	x.xuat();
	check(x);
	sortP(x);
	cout << endl << endl << endl<< "Phieu sau khi xep: " << endl;
	x.xuat();
}




