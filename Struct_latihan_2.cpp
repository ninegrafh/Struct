#include <iostream>
#include <conio.h>
using namespace std;
struct dtbuku{
char kd[10];
char nm[20];
int thn;
char pengarang[20];
int harga;
};
int main(){
dtbuku buku[3];
int i;
for(i=0;i<3;i++){
cout << "Kode Buku : ";
cin >> buku[i].kd;
cout << "Nama Buku : ";
cin >> buku[i].nm;
cout << "Tahun Terbit : ";
cin >> buku[i].thn;
cout << "Pengarang : ";
cin >> buku[i].pengarang;
cout << "Harga : ";
cin >> buku[i].harga;
cout << endl;
cout << endl;
}
cout << endl;
cout << endl;
cout << "Latihan 1. menampilkan data buku" << endl;
cout << "================================" << endl;
for(i=0;i<3;i++){
cout << "\nKode Buku : " << buku[i].kd << endl;
cout << "Nama Buku : " << buku[i].nm << endl;
cout << "Tahun Terbit : " << buku[i].thn << endl;
cout << "Pengarang : " << buku[i].pengarang << endl;
cout << "Harga : " << buku[i].harga << endl;
}
getch();
return 0;
}
