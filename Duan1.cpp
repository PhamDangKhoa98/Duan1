#include <iostream>
using namespace std;
struct Thongtinsinhvien
{
    int ID;
    int SBD;
    string Name;
    string Diachi;
};
void Showthongtin(Thongtinsinhvien K) 
{
    cout << "Thong tin sinh vien DHQG Ha Noi" << endl;
    cout << "Ho va ten: " << K.Name << endl;
    cout << "ID: " << K.ID << endl;
    cout << "SBD: " << K.SBD << endl;
    cout << "Dia chi: " << K.Diachi << endl;
    cout << "*********************************";


}




int main()
{
    Thongtinsinhvien K = { 1,123,"Pham Dang Khoa","Hai Duong" };
    Showthongtin(K);

    return 0;
}

