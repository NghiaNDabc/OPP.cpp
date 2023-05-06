#include<bits/stdc++.h>

using namespace std;
class LOPHOC;
class NGUOI{
protected:
	char HoTen[50];
	char NgaySinh[30];
	char QueQuan[50];
public:
	void nhap();
	void xuat();
};
void NGUOI :: nhap()
{
	cout << "Ho ten: "; fflush(stdin); gets(HoTen);
	cout << "NgaySinh: "; fflush(stdin); gets(NgaySinh);
	cout << "QueQuan: "; fflush(stdin); gets(QueQuan);
}
void NGUOI :: xuat(){
	cout << setw(19) << HoTen << setw(15) << NgaySinh << setw(19)<< QueQuan;
}
class SINHVIEN : public NGUOI
{
	char MaSV[10];
	char Nganh[10];
	int KhoaHoc;
public:
	friend void xep(LOPHOC l);
	friend int Khoa11(LOPHOC l);
	void nhap();
	void xuat();
};
void SINHVIEN :: nhap()
{
	NGUOI :: nhap();
	cout << "MaSV: "; fflush(stdin); gets(MaSV);
	cout << "Nganh: "; fflush(stdin); gets(Nganh);
	cout << "KhoaHoc: "; cin >> KhoaHoc;
}
void SINHVIEN :: xuat(){
	NGUOI :: xuat();
	cout << setw(10) << MaSV<< setw(16)<<Nganh << setw(10) << KhoaHoc << endl;
}
class LOPHOC
{
	char MaLH[10];
	char TenLH[50];
	char NgayMo[20];
	SINHVIEN* x;
	int n;
	char GV[50];
public:
	friend void xep(LOPHOC l);
	friend int Khoa11(LOPHOC l);
	void nhap();
	void xuat();
};
void LOPHOC :: nhap()
{
 	cout << "MaLH: "; fflush(stdin); gets(MaLH);
	cout << "TenLH: "; fflush(stdin); gets(TenLH);
	cout << "NgayMo: "; fflush(stdin); gets(NgayMo);
	cout << "Nhap n: "; cin >> n;
	x = new SINHVIEN[n];
	for(int i = 0; i < n; i++)
		x[i].nhap();
	cout << "GV: "; fflush(stdin); gets(GV);
}
void LOPHOC :: xuat()
{
	cout << "MaLH: " << MaLH << endl;
	cout << "TenLH: " << TenLH << endl;
	cout << "NgayMo: " << NgayMo << endl;
	cout << setw(19) << "HoTen "<< setw(15) << "NgaySinh "<< setw(19)<< "QueQuan";
	cout << setw(10) << "MaSV"<< setw(16)<< "Nganh" << setw(10) << "KhoaHoc" << endl;
	for(int i = 0; i < n; i++)
		x[i].xuat();
	cout << "GV: " << GV;
}
int Khoa11(LOPHOC l)
{
	int count;
	for(int i = 0; i< l.n; i++)
	 if(l.x[i].KhoaHoc == 11) count ++;
	 return count;
}
void xep(LOPHOC l)
{
	for(int i = 1; i< l.n; i++)
	  for(int j = 0;j < l.n - i; j++)
	  if(l.x[j].KhoaHoc > l.x[j + 1].KhoaHoc)
	  	swap(l.x[j],l.x[j + 1]);
}
int main()
{
	LOPHOC l;
	l.nhap();
	l.xuat();
	cout << endl << "So SV khoa 11: " << Khoa11(l);
	cout << endl << "===============================" << endl << "Lop hoc sau khi xep " << endl;
	xep(l);
	l.xuat();
}

