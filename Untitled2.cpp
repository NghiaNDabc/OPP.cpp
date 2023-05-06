#include<iostream>
#include<string.h>

using namespace std;


class HCN{
	int D;
	int R;
public:
	void nhap();
	void ve();
	float dienTich();
	float chuVi();
};

void HCN :: nhap(){
	cout << "Chieu dai: ";
	cin >> D;
	cout << "Chieu rong : ";
	cin >> R;
}
void HCN :: ve(){
	for (int i = 0; i < D; i++)
	{
		for (int j = 0; j < R; j++)
			cout << "*";
			cout << endl;
	}
	
}
float HCN :: dienTich(){
	return D * R;
}
float HCN :: chuVi(){
	return D + D + R + R;
}
int main(){
	HCN a;
	a.nhap();
	a.ve();
	cout << "chu vi " << a.chuVi() << endl;
	cout << "dien tich: " << a.dienTich();
}
 