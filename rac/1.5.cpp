#include<iostream>
#include<iomanip>

using namespace std;

class MANGINT{
	int* a;
	int n;
public:
	void NHAP();
	void XUAT();
	void SAP();
};

void MANGINT :: NHAP(){
	cout << "Nhap n: ";
	cin >> n;
	a = new int[n];
	for (int i = 0; i < n; i++){
		cout << "nhap a[" << i <<"]: ";
		cin >> a[i];
	}
}
void MANGINT :: XUAT(){
	for(int i = 0; i< n; i++)
	cout << " " << a[i];
	free(a);
}
void MANGINT :: SAP(){
	for (int i = 0; i < n; i++)
	for (int j = 0; j < i; j++)
		if(a[j] > a[i]){
			int tg = a[i];
			 a[i] = a[j];
			 a[j] = tg;
		}
}
int main(){
	MANGINT x; 
 x.NHAP();
  x.SAP(); 
  x.XUAT(); 
 return 0; 
}
