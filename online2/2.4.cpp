#include<bits/stdc++.h>

using namespace std;

class NGUOI{
protected:
	char HoTen[30];
	int Tuoi;
public:
	void nhap();
	void xuat();	
};
void NGUOI :: nhap(){
	cout << "Ho ten: "; fflush(stdin); gets(HoTen);
	cout << "Tuoi: "; cin >> Tuoi;
}
void NGUOI :: xuat(){
	cout << "Ho ten: " << HoTen << endl;
	cout << "Tuoi: " <<  Tuoi << endl;
}
class BENHVIEN{
	char TenBV[30];
	char DC[30];
	NGUOI GiamDoc;
public:
	void nhap();
	void xuat();	
};
void BENHVIEN :: nhap(){
	cout << "Ten BV "; fflush(stdin); gets(TenBV);
	cout << "Dia chi "; fflush(stdin); gets(DC);
	cout << "Nhap thong tin giam doc: " << endl;
	GiamDoc.nhap();
}
void BENHVIEN :: xuat(){
	cout << "Ten BV " << TenBV << endl;
	cout << "Dia chi " << DC << endl;
	cout << "Xuat thong tin benh nhan: " << endl;
	GiamDoc.xuat();
}
class BENHNHAN:public NGUOI{
	char MaBN[10];
	char TienSu[40];
	char ChanDoan[30];
	BENHVIEN bv;
public:
	void nhap();
	void xuat();
	friend int BN30(BENHNHAN *x, int n);
	friend void SUA(BENHNHAN *x, int n);
};
void BENHNHAN :: nhap(){
	cout << "Nhap thong tin benh nhan: " << endl;
	NGUOI :: nhap();
	cout << "MA BENH NHAN "; fflush(stdin); gets(MaBN);
	cout << "Tien Su "; fflush(stdin); gets(TienSu);
	cout << "Chan doan "; fflush(stdin); gets(ChanDoan);
	bv.nhap();
}
void BENHNHAN :: xuat(){
	cout << "Xuat thong tin benh nhan: " << endl;
	NGUOI :: xuat();
	cout << "MA BENH NHAN " << MaBN << endl;
	cout << "Tien Su " << TienSu<< endl;
	cout << "Chan doan " << ChanDoan<< endl;
	bv.xuat();
}
int BN30(BENHNHAN *x, int n){
	int dem = 0;
	for(int i = 0; i < n; i++){
		if(x[i].Tuoi > 30) dem++;
	}
	return dem;
}
void SUA(BENHNHAN *x, int n){
	for(int i = 0; i < n; i++)
		if( strcmp(x[i].MaBN,"BN01") == 0 ) x[i].Tuoi = 20;
}
int main(){
	int n;
	BENHNHAN* x;
	cout << "Nhap n: "; cin >> n;
	x = new BENHNHAN[n];
	for(int i = 0; i < n; i++){
		cout << "Nhap Benh Nhan thu " << i  + 1 << endl;
		x[i].nhap();
		cout << endl;
	}
	cout <<"============" << endl;
	for(int i = 0; i < n; i++){
		cout << "Xuat Benh Nhan thu " << i  + 1 << endl;
		x[i].xuat();
		cout << endl;
	}
	cout << "So benh nhanh > 30 tuoi = " << BN30(x,n) << endl;
    SUA(x,n);
    for(int i = 0; i < n; i++){
		cout << "Xuat Benh Nhan thu " << i  + 1 << endl;
		x[i].xuat();
		cout << endl;
	}
    
}

