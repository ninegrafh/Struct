#include <iostream>
#include <cstdlib>
using namespace std;
struct mahasiswa{
string nama;
int usia;
float ipk;
string hobi[2];
};
int main()
{
mahasiswa mhs[2]; //deklarasi variabel mhs dengan tipe struct mahasiswa
mhs[0].nama ="Andi";
mhs[0].usia = 21;
mhs[0].ipk = 3.5;
mhs[0].hobi[0]= "Renang";
mhs[0].hobi[1]= "Futsal";
cout<<mhs[0].nama<<endl;
cout<<mhs[0].usia<<endl;
cout<<mhs[0].ipk<<endl;
cout<<mhs[0].hobi[0]<<endl;
cout<<mhs[0].hobi[1]<<endl;
mhs[1].nama ="Arif";
mhs[1].usia = 36;
mhs[1].ipk = 3.9;
mhs[1].hobi[0]= "Makan";
mhs[1].hobi[1]= "Sepeda";
cout<<mhs[1].nama<<endl;
cout<<mhs[1].usia<<endl;
cout<<mhs[1].ipk<<endl;
cout<<mhs[1].hobi[0]<<endl;
cout<<mhs[1].hobi[1]<<endl;
system("pause");
return 0;
}
