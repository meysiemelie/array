#include <cstdlib>
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
  //mendeklarasikan teks1 dan teks2 
  char teks1[10], teks2[0];
  int jlhdepan, j1hkel, j1hhuruf;
  
  //menampilkan pesan u/ meminta masukan dari pengguna
  cout << "Masukkan Nama Depan Anda?: ";
  cin >> teks1;
  cout << "Masukkan Nama Keluarga Anda?: ";
  cin >> teks2;
  //menghitung panjangteks
  jlhdepan = strlen(teks1);
  j1hkel = strlen(teks2);
  jlhuruf = jlhdepan + jlhkel;
  
  //menampilkan hasil ke pengguna
cout << "Nama Lngkap Anda: "  << teks1 << " " << teks2 <<
endl;
cout << "Jumlah Huruf Nama Anda: "  << jlhhuruf << " Huruf"
<<endl;
 system ("PAUSE");
 return 0;
}
