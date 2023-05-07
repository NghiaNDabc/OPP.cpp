#include<bits/stdc++.h>

using namespace std;
class PHIEU;
class SV{
	char MaSV[10];
	char TenSV[50];
	char Lop[20];
	int Khoa;
public:
	void nhap();
	void xuat();
};
void SV :: nhap()
{
	cout << "Ma SV: "; fflush(stdin); gets(MaSV);
	cout << "Ten SV: "; fflush(stdin); gets(TenSV);
	cout << "Lop : "; fflush(stdin); gets(Lop);
	cout << "Khoa:"; cin >> Khoa;
}
void SV :: xuat(){
		cout << "Ma SV: " << setw(15) << MaSV<< setw(15) << "Ten SV: " << TenSV << endl;
	cout << "Lop : " << setw(15) << Lop << setw(15) << "Khoa:"<< setw(15) << Khoa << endl;
}
class MON{
	char TenMon[30];
 	int SoTrinh;
	float Diem;
public:
	friend void SoTrinh3(PHIEU l);
//	friend void CHEN(PHIEU &l);
	friend class PHIEU;
	void nhap();
	void xuat();
};
void MON :: nhap(){
	cout << "Ten mon: "; fflush(stdin); gets(TenMon);
	cout << "So trinh: "; cin >> SoTrinh;
	cout << "Diem: "; cin >> Diem;
}
void MON :: xuat(){
	cout << setw(25) << TenMon << setw(10) << SoTrinh << setw(10) << Diem << endl;
}
class PHIEU{
	SV s;
	int n;
	MON * y;
public:
	void nhap();
	void xuat();
	friend void SoTrinh3(PHIEU l);
	friend void CHEN(PHIEU &l,MON a, int k);
	
};
void PHIEU :: nhap(){

	s.nhap();
	cout << "Nhap n: "; cin >> n;
	y = new MON[n];
	for(int i =0; i < n; i++)
		{	
			cout << "Nhap mon thu " << i + 1 << ":"<< endl;
			y[i].nhap();
			cout << endl;
		}
}
void PHIEU :: xuat(){
	cout << endl;
	cout << setw(30) << "PHIEU BAO DIEM " << endl;
	s.xuat();
	cout << "Bang diem : " << endl;
	cout << setw(25) << "Ten Mon" << setw(10) << "So Trinh" << setw(10) << "Diem" << endl;
	for(int i =0; i < n; i++)	
			y[i].xuat();
	float dtb = 0;
	int tongST = 0;
	 for(int i =0; i < n; i++)
	 {
	 	dtb += y[i].Diem * y[i].SoTrinh;
	 	tongST += y[i].SoTrinh;	
	 }
	 dtb = (float)dtb/tongST;
	 cout << setw(50) << "Diem trung binh: " << round(dtb*100)/100;
	
}
void SoTrinh3(PHIEU l){
	cout << endl << "Ten Cac Mon Hoc Co So Trinh Lon Hon 3: " << endl;
	for(int i=0 ; i < l.n; i++)
		if(l.y[i].SoTrinh > 3) cout << l.y[i].TenMon << endl;
	cout << endl;
}
void CHEN(PHIEU &l,MON a, int k){
	
	l.y = (MON*)realloc(l.y,(l.n + 1)*sizeof(MON));
	for(int i = l.n; i >= k; i--){
		l.y[i] = l.y[i-1];
	}
		l.y[k-1] = a;
	l.n++;
}
int main(){
	PHIEU l;
	l.nhap();
	l.xuat();
	SoTrinh3(l);
	int k;
	cout << "Vi tri can chen: "; cin >> k;
	MON a;
	cout << "Nhap mon can chen: " << endl;
	a.nhap();
	l.xuat();
	CHEN(l,a,k);
	l.xuat();
	
}