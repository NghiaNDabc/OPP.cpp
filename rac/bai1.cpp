#include<iostream>
#include<string.h>

using namespace std;

class SINHVIEN {
	char maSV[10];
	char hoTen[40];
    int	tuoi ;
	float diem;
public:
	void nhap();
	void xuat();
};

void SINHVIEN :: nhap(){
	cout << "maSV: "; fflush(stdin); gets(maSV);
	cout << "hoTen: "; fflush(stdin); gets(hoTen);
	cout << "tuoi: "; cin >> tuoi;
	cout << "diem: "; cin >> diem;
}
void SINHVIEN :: xuat(){
	cout << "maSV: " << maSV << endl;
	cout << "hoTen: " << hoTen << endl;
	cout << "tuoi: " << tuoi << endl;
	cout << "diem: " << diem << endl;
}

int main(){
	SINHVIEN a, b;
	cout << "Nhap thong tin sinh vien a: " << endl;
	a.nhap();
	cout << "Nhap thong tin sinh vien b: " << endl;
	b.nhap();
	cout << "Thong tin sv a: " << endl;
	a.xuat();
	cout << "Thong tin sv b: " << endl;
	b.xuat();
	
}