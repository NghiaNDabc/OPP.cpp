#include <bits/stdc++.h>

using namespace std;

class SINHVIEN{
	char MA[30];
	char HOTEN[50];
	int TUOI;
	float DIEM;
public:
	friend istream& operator>>(istream& x, SINHVIEN &y);	
	friend ostream& operator<<(ostream& x, SINHVIEN y);
};
istream& operator>>(istream& x, SINHVIEN &y){
//	cin.getline(a,30)
	cout << "MA: "; fflush(stdin); x.getline(y.MA, 30);	
	cout << "HOTEN: "; fflush(stdin); x.getline(y.HOTEN, 50);
	cout << "TUOI: "; x >> y.TUOI;
	cout << "DIEM: "; x >> y.DIEM;
	return x;	
}

ostream& operator<<(ostream& x, SINHVIEN y){
	x << "Ma SV: " << y.MA << endl;
	x << "Ho ten: " << y.HOTEN << endl;
	x << "Diem :"  << y.DIEM << endl;
	return x;	
}
int main(){
	SINHVIEN x;
	fstream f("D:/test.txt", ios :: out);
	
	cin >> x;
	cout << x;
	f << x;
	f.close();
}
