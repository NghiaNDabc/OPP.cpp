#include<bits/stdc++.h>

using namespace std;
class PHIEU;
class NCC{
	char MaNCC[10];
	char TenNCC[30];
	char DC[50];
	char SDT[15];
public:
	void nhap();
	void xuat();
};
void NCC :: nhap(){
	cout << "Nhap Ma NCC: "; fflush(stdin); gets(MaNCC);
	cout << "Nhap Ten NCC: "; fflush(stdin); gets(TenNCC);
	cout << "Nhap DC NCC: "; fflush(stdin); gets(DC);
	cout << "Nhap SDT NCC: "; fflush(stdin); gets(SDT);
}
void NCC :: xuat(){
	cout << setw(20) << left <<"Ma nha cung cap: " << setw(20) << left  << MaNCC << "\t\t";
	cout << "Ten nha cung cap: "  << TenNCC << endl;
	cout << setw(20) << left << "Nhap DC NCC: "<< setw(20) << left << DC << "\t\t";
	cout << "Nhap SDT NCC: " << SDT << endl;
}
class SP{
	char MaSP[10];
	char TenSP[30];
	int SL;
	float DG;
public:
	void nhap();
	void xuat();
	friend class PHIEU;
	friend int	Check500(PHIEU p);
	friend void SUA(PHIEU p);
};
void SP :: nhap(){
	cout << "Nhap Ma SP: "; fflush(stdin); gets(MaSP);
	cout << "Nhap Ten SP: "; fflush(stdin); gets(TenSP);
	cout << "Nhap So Luong: "; cin >> SL;
	cout << "Nhap Don Gia: "; cin >> DG;
}
void SP :: xuat(){
	cout << setw(10) << MaSP << setw(20 ) << TenSP << setw(10) << SL << setw(15 ) << DG << setw(15) << SL*DG << endl;
}
class PHIEU{
	char MaP[10];
	int D,M,Y;
	NCC x;
	SP *y;
	int n;
public:
	void nhap();
	void xuat();
	friend int	Check500(PHIEU p);
	friend void SUA(PHIEU p);
};
void PHIEU :: nhap(){
	cout << "Nhap Ma Phieu: "; fflush(stdin); gets(MaP);
	cout << "Nhap Ngay Thang Nam: ";
	cout << endl << "Ngay: "; cin >> D;
	cout << "Thang: "; cin >> M;
	cout << "Nam: "; cin >> Y;
	x.nhap();
	cout << "Nhap SL: "; cin >> n;
	y = new SP[n];
	
	for(int i =0; i < n; i++)
		{
			cout <<endl <<  "Nhap sp thu " << i + 1 << " :" << endl;
			y[i].nhap();
		}
	
}
void PHIEU :: xuat(){
	cout << endl;
	cout << "Dai hoc Victory" << endl;
	cout << setw(50) << right << "PHIEU NHAP VAN PHONG PHAM" << endl;
	cout << setw(20) << left << "Ma Phieu: " << setw(20) << left <<MaP << "\t\t";
	cout << "Ngay lap: " << D << "/" << M << "/" << Y << endl;
	x.xuat();
	cout << endl;
	cout << setw(10) << "Ma SP"<< setw(20 ) << "Ten San Pham"<< setw(10) << "So Luong" << setw(15 ) << "Don Gia" << setw(15) << "Thanh Tien"<< endl;
	for(int i =0; i < n; i++)
		{
			y[i].xuat();
		}
	float tong = 0;
	for(int i = 0; i < n; i++)
	{
		tong = tong + y[i].SL*y[i].DG;
	}
	cout << setw(55) << "TONG:" << setw(15) << tong << endl;
	cout << setw(25) << "Hieu truong" << setw(25) << "Phong tai chinh" << setw(25) << "Nguoi lap" << endl;
}

int	Check500(PHIEU p){
	int dem = 0;
	for(int i = 0; i < p.n; i++)
	{
		if(p.y[i].SL*p.y[i].DG >= 500) dem ++;
	}
	return dem;
}
void SUA(PHIEU p){
	for(int i = 0; i < p.n; i++)
		if( strcmp(p.y[i].TenSP, "But da bang")==0 ) p.y[i].SL = 35;
}
int main(){
	PHIEU p;
	p.nhap();
	p.xuat();
	cout << "===" << endl << "So luong sp thanh tien >=500 la: " << Check500(p) << endl;
	SUA(p);
	cout << "===" << endl << "Phieu sau khi sua: " << endl;
	p.xuat();
	
}