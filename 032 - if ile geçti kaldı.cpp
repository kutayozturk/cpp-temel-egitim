/* Soru: 
Kullanıcı, programa not girer.
Not eğer 40’tan küçük ise kullanıcıya “Kaldınız” mesajı dönülür.
Eğer not 40’tan büyük ve 70’tan küçük ise “Geçtiniz” mesajı dönülür.
Eğer not 60’tan büyük 85’ten küçük ise “İyi Geçtiniz” mesajını dönülür.
Eğer not 85’ten büyük 100’den küçük eşit ise “Çok İyi Geçtiniz” mesajı dönülür.
Eğer not hiç bir koşula uymuyorsa “Yanlış Not Girdiniz” mesajı dönülür.
*/

#include <iostream>

using namespace std;
int main(){
	  int not;
	  //Kullanıcıdan Not Girmesini İsteyelim.
	  cout<<"Lütfen Notunuzu Girin"<<endl;
	  //Kullanıcının Girdiği Notu Değişkene Atayalım.
	  cin>>not;
	  //Not 40'tan küçük ise süslü parantez içindeki kodları yap.
	  if(not<40){
		cout<<"Kaldınız.";
	  }
	 //Not if içerisindeki koşulu sağlamadıysa aşağıdaki koşula bak ve koşula uyarsa süslü parantez içindeki kodları yap.
	 elseif(not<70){
	   cout<<"Geçtiniz.";
	 }
	 //Not yukarıdaki koşulları sağlamadıysa aşağıdaki koşula bak ve koşula uyarsa süslü parantez içindeki kodları yap.
	 elseif(not<85){
	   cout<<"İyi Geçtiniz.";
	 }
	 //Not yukarıdaki koşulları sağlamadıysa aşağıdaki koşula bak ve koşula uyarsa süslü parantez içindeki kodları yap.
	 elseif(not<=100){
	   cout<<"Çok İyi Geçtiniz.";
	 }
	 //Not hiç bir koşula uymadıysa else'deki süslü parantezleri yap.
	 else{
	   cout<<"Yanlış Not Girdiniz 100'den Büyük Not Olmaz.";
	 }
  
}