#include <bits/stdc++.h>

using namespace std;

class HANG{
	char MaH[20];
	char TenH[30];
	float DG;
	int SL;
public:
	friend ostream& operator<<(ostream& x, HANG y);
	friend istream& operator>>(istream& x, HANG &y);
	
};

istream& operator>>(istream& x, HANG &y){
	cout << "Ma H: ";fflush(stdin); x.getline(y.MaH,20);
	cout << "TenH: ";fflush(stdin); x.getline(y.TenH,30);
	cout << "DG: "; x >> y.DG;
	cout << "SL: "; x >> y.SL;
	return x;
}

ostream& operator<<(ostream& x, HANG y){
	x << "Ma H: " << y.MaH << endl;
	x << "TenH: " << y.TenH << endl;
	x << "DG: "   << y.DG << endl;
	x << "SL: "   << y.SL << endl;
	return x;
}
int main(){
	HANG h;
	cin >> h;
	cout << h;
}