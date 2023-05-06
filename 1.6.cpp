#include<iostream>
#include<iomanip>

using namespace std;

class MANGFLOAT{
	float* a;
	int n;
public:
	void NHAP();
	float MAX();
	float MIN();
	void FREE();
	
};

void MANGFLOAT :: NHAP(){
	cout << "Nhap n: ";
	cin >> n;
	a = new float[n];
	for (int i = 0; i < n; i++){
		cout << "nhap a[" << i <<"]: ";
		cin >> a[i];
	}
}
void MANGFLOAT :: FREE(){
	free(a);
}
float MANGFLOAT :: MAX(){
	int max = a[0];
	for (int i = 1; i < n; i++)
		if( a[i] > max){
			max = a[i];
		}
	return max;
}
float MANGFLOAT :: MIN(){
	int min = a[0];
	for (int i = 1; i < n; i++)
		if( a[i] < min){
			min = a[i];
		}
	return min;
}
int main(){
	MANGFLOAT a;
	a.NHAP();
	cout << "max = " << a.MAX() << endl;
	cout << "min = " << a.MIN();
	a.FREE();	
}