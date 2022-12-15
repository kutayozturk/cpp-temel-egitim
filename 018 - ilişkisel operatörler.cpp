/* İLİŞKİSEL OPERATÖRLER

	İki değişken yada durum arasındaki ilişkiyi kontrol etmek için ilişkisel operatörler kullanılır.
	Örneğin;

	a > b;

	Burada > işareti bir ilişkisel operatördür. a değikeninin b değişkeninden büyük olup olmadığını
	kontrol eder.
	Eğer çıkarım doğru ise 1 (true) yanlış ise 0 (false) değerini döndürür.
	
	OPERATÖR		ANLAM						ÖRNEK
	==				Eşittir						3 == 5 yanlış
	!=				Eşit değil					3 != 5 doğru
	>				Büyüktür					3 > 5 yanlış
	<				Küçüktür					3 < 5 doğru
	>=				Büyüktür veya Eşittir		3 >= 5 yanlış
	<=				Küçük veya Eşittir			3 <= 5 doğru
	
*/

#include <iostream>
using namespace std;

int main() {
    int a, b;
    a = 3;
    b = 5;
    bool karsilastir; // 1 veya 0 olarak geriye deger dondurur

    karsilastir = (a == b);   // false
    cout << "3 == 5 mi " << karsilastir << endl;

    karsilastir = (a != b);  // true (dogru)
    cout << "3 != 5 degil mi " << karsilastir << endl;

    karsilastir = a > b;   // false (yanlis)
    cout << "3 > 5 mi " << karsilastir << endl;

    karsilastir = a < b;   // true
    cout << "3 < 5 mi " << karsilastir << endl;

    karsilastir = a >= b;  // false
    cout << "3 >= 5 mi " << karsilastir << endl;

    karsilastir = a <= b;  // true
    cout << "3 <= 5 mi " << karsilastir << endl;

    return 0;
}

//	NOT: İlişkisel operatörüler karar vermede ve döngülerde kullanılır.

