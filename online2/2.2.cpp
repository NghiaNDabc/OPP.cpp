#include<bits/stdc++.h>

using namespace std;
class STUDENT;
class SCHOOL{
	char Name[30];
	char Date[30];
public:
	void input();
	void output();
	SCHOOL();
	friend void DHCNHN(STUDENT &x);
};
SCHOOL :: SCHOOL(){
	strcpy(Name,"SCHOOL Name cons");
	strcpy(Date,"SCHOOL Date cons");
}
void SCHOOL :: input(){
	cout << "SCHOOL :: Name: "; fflush(stdin); gets(Name);
	cout << "SCHOOL :: Date: "; fflush(stdin); gets(Date);
}
void SCHOOL :: output(){
	cout << "SCHOOL :: Name: " << Name << endl;
	cout << "SCHOOL :: Date: " << Date << endl;
}

class FACULTY{
	char Name[30];
	char Date[30];
	SCHOOL x;
public:
	void input();
	void output();
	FACULTY();
	friend void DHCNHN(STUDENT &x);
};
FACULTY :: FACULTY(){
	strcpy(Name,"FACULTY Name cons");
	strcpy(Date,"FACULTY Date cons");
}
void FACULTY :: input(){
	cout << "FACULTY :: Name: "; fflush(stdin); gets(Name);
	cout << "FACULTY :: Date: "; fflush(stdin); gets(Date);
	x.input();
}	
void FACULTY :: output(){
	cout << "FACULTY :: Name: " << Name << endl;
	cout << "FACULTY :: Date: " << Date << endl;
	x.output();
}
class PERSON{
protected:
	char Name[30];
	char Birth[30];
	char Address[30];
public:
	void input();
	void output();
	PERSON();
};
PERSON :: PERSON(){
	strcpy(Name,"PERSON Name cons");
	strcpy(Birth,"PERSON Birth cons");
	strcpy(Address,"PERSON Address cons");		
}
void PERSON :: input(){
	cout << "PERSON :: Name: "; fflush(stdin); gets(Name);
	cout << "PERSON :: Birth: "; fflush(stdin); gets(Birth);
	cout << "PERSON :: Address: "; fflush(stdin); gets(Address);
}
void PERSON :: output(){
	cout << "PERSON :: Name: " << Name << endl;
	cout << "PERSON :: Birth: " << Birth << endl;
	cout << "PERSON :: Address: " << Address << endl;
}
class STUDENT:public PERSON{
	FACULTY y;
	char Class[10];
	float Score;
public:
	void input();
	void output();
	STUDENT();
	friend void DHCNHN(STUDENT &x);
};
STUDENT :: STUDENT():PERSON(){
	strcpy(Class, "");
	Score = 0;	
}
void STUDENT :: input(){
	y.input();
	PERSON :: input();
	cout << "STUDENT :: Class :"; fflush(stdin); gets(Class);
	cout << "STUDENT :: Score :"; cin >> Score;
}
void STUDENT :: output(){
	y.output();
	PERSON :: output();
	cout << "STUDENT :: Class :" << Class << endl;
	cout << "STUDENT :: Score :" <<  Score << endl;
}
void DHCNHN(STUDENT &x){
	strcpy(x.y.x.Name,"DHCNHN");
}
int main(){
	STUDENT x;
	x.input();
	cout << "==============" << endl;
	x.output();
	DHCNHN(x);
	cout << "==============" << endl;
	cout << "Sau khi sua:" << endl;
	x.output();
	return 0;
}