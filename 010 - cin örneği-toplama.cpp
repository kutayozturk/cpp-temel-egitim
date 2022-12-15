//	cin ÖRNEĞİ

#include <iostream>

using namespace std;

int main(){
 int x,y; //x ve y değerlerinin bir tam sayı olacağını belirtiyoruz.
 
 cout << "iki tamsayiyi toplayan program.\n" << endl;
 // "endl" => Bir satır atlamamızı sağlayan komut.
 cout << "Birinci sayiyi girin: ";
 cin >> x;
 
 cout<<"ikinci sayiyi girin: ";
 cin >> y;
 
 cout << "Sonuc: " << x+y;

return(0);
}