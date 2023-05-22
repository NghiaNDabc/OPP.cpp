#include<bits/stdc++.h>
using namespace std;
class MATRIX{
	double **a;
	int n;
	int m;
	public: 
		friend istream& operator >> (istream&in, MATRIX x);
		friend ostream& operator << (ostream&out, MATRIX x);
		MATRIX operator ! ();
		MATRIX operator + (MATRIX y);
		MATRIX operator - (MATRIX y);
};
istream& operator >> (istream&in, MATRIX x){
	cout<<"Nhap so hang: "; in>>x.n; 
	cout<<"Nhap so cot: "; in>>x.m;
	for(int i=0; i<x.n; i++){
		x.a=new double *[x.n];
		for(int j=0; j<x.m; j++){
			x.a[i]= new double [x.m];
			in>>x.a[i][j];
		}
		cout<<endl;
	}
	return in;
}
ostream& operator << (ostream&out, MATRIX x){
	for(int i=0; i<x.n; i++){
		for(int j=0; j<x.m; j++){
			out<<x.a[i][j];
		}
		out<<endl;
	}
	return out;
}
MATRIX MATRIX:: operator ! (){
	MATRIX y;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			y.a[i][j]=-a[i][j];
		}
		cout<<endl;	
	} 
	
}
MATRIX MATRIX::operator +(MATRIX y){
	MATRIX z; 
	if(y.m==y.n){
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				z.a[i][j]=a[i][j]+ y.a[i][j];
			}	
			cout<<endl;
		} 
	}else{
		cout<<"K the cong!"<<endl;
	}
}
MATRIX MATRIX::operator -(MATRIX y){
	MATRIX z; 
	if(y.m==y.n){
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				z.a[i][j]=a[i][j]- y.a[i][j];
			}
			cout<<endl;	
		} 
	}else{
		cout<<"K the tru!"<<endl;
	}
	
}
int main(){
	MATRIX a,b;
	cout<<"Nhap ma tran: "<<endl;
	cout<<"Ma tran 1: "<<endl; cin>>a; 
	cout<<"Ma tran 2: "<<endl; cin>>b;
	cout<<"2 ma tran vua tao: "<<a<<"\t"<<b<<endl; 
	cout<<"Tong 2 ma tran: "<<a+b<<endl;
	cout<<"Hieu 2 ma tran: "<<a-b<<endl;
}

		
