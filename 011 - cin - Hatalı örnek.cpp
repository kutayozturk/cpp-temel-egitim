#include <iostream>

using namespace std;

int main(){
 string ad;
 string yas;

 cout << "Selam Kaptan!" << endl;
 // "endl" => Bir satır atlamamızı sağlayan komut.
 cout << "ismin nedir? ";
 cin >> ad;
 
 cout << ad << ",harika bir isim\nTanistigima memnun oldum." << endl;

 cout << ad << "kac yasindasin?" << endl;
 cin >> yas;
 
 cout << 2022-yas <<"yilinde dogdun demek!" << endl; // HATA: int bir değer ile string bir ifade işlem yapamazlar.
 
return(0);
}
