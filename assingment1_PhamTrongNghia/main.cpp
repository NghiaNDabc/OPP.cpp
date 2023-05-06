#include <bits/stdc++.h>

//cho biet benh nhan vua kham co mac trieu chuung "Sot am i ve dem:?
//Sua lai ten trieu chung TC005 thanh :"nhuc dau"
using namespace std;
class PHIEU;
class BENHNHAN
{
    char HT[30];
    char GT[10];
    char DC[50];
    int TUOI;
    char TS[100];
public:
    void nhap();
    void xuat();
    friend class PHIEU;
};
void BENHNHAN :: nhap()
{
    cout << "Ho ten benh nhan : "; fflush(stdin); gets(HT);
    cout << "Gioi tinh benh nhan : "; fflush(stdin); gets(GT);
    cout << "Tuoi benh nhan: "; cin >> TUOI;
    cout << "Dia chi benh nhan: "; fflush(stdin); gets(DC);
    cout << "Tien su benh nhan : "; fflush(stdin); gets(TS);
}
void BENHNHAN :: xuat()
{

    cout << "Ten banh nhan: " << HT;
    cout << "Gioi tinh: " << GT;
    cout << "Tuoi: " << TUOI << endl;
    cout << "Dia chi: " << DC;
    cout << "Tien su : " << TS;
}


class BACSI
{
    char HT[30];
    char NCT[50];
public:
    void nhap();
    void xuat();
    friend class PHIEU;

};

void BACSI :: nhap()
{
    cout << "Ho ten bs : " ; fflush(stdin); gets(HT);
    cout << "Noi cong tac: " ; fflush(stdin); gets(NCT);
}
void BACSI :: xuat()
{
    cout << "Bac si chuan doan: " << HT;
    cout << "Noi cong tac : " << NCT;
}

class TRIEUCHUNG
{
    char MTC[10];
    char TTC[30];
public:
    void nhap();
    void xuat();
    //friend class PHIEU;
    friend void Check(PHIEU x);
    friend void Sua(PHIEU x);
};
void TRIEUCHUNG :: nhap()
{
    cout << "Ma trieu chung : "; fflush(stdin); gets(MTC);
    cout << "Ten trieu chung : "; fflush(stdin); gets(TTC);
}
void TRIEUCHUNG :: xuat()
{
    cout << setw(15) << MTC << setw(25) << TTC << endl;
}

class PHIEU
{   char MAPH[10];
    char NGAY[20];
    char KL[100];
    BENHNHAN x;
    BACSI y;
    TRIEUCHUNG * z;
    int n;
public:
    void nhap();
    void xuat();
    friend void Check(PHIEU x);
    friend void Sua(PHIEU x);

};

void PHIEU :: nhap()
{
    cout << "Ma phieu "; fflush(stdin); gets(MAPH);
    cout << "Ngay: "; fflush(stdin); gets(NGAY);
    cout << "Ket luan: "; fflush(stdin); gets(KL);
    x.nhap();
    y.nhap();
    cout << "Nhap so trieu chung: "; cin >> n;
    z = new TRIEUCHUNG[n];
    for (int i = 0; i < n; i++)
        z[i].nhap();
}
void PHIEU :: xuat()
{
    cout << setw(30) << "PHIEU KHAM BENH: " << endl;
    cout << "Ma phieu: " << MAPH <<". Ngay kham: " << NGAY << endl;
    x.xuat();
    y.xuat();
     cout << setw(15) << endl << "Ma trieu chung " << setw(25) << "Ten trieu chung" << endl;
    for (int i = 0; i < n; i++)
        z[i].xuat();
    cout << "Ket luan: " << KL;
}

void Check(PHIEU x)
{ int
    d = 0;
    for (int i = 0; i < x.n; i++)
        if(strcmp(x.z[i].TTC, "SOT AM I VE DEM") == 0)
            d++;
    if(d > 0) cout << "Co trieu chung SOT AM I VE DEM.";
    else cout << "Khong co trieu chung SOT AM I VE DEM.";
}
void Sua(PHIEU x)
{
    for (int i = 0; i < x.n; i++)
        if( strcmp(x.z[i].MTC, "TC005") == 0)
            strcpy(x.z[i].TTC, "NHUC DAU");

}
int main()
{
    PHIEU x;
    x.nhap();
    x.xuat();
    Check(x);
    Sua(x);
    x.xuat();
    return 0;
}
