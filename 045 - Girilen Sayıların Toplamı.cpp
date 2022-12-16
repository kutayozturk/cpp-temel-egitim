#include <iostream>

using namespace std;

int main()
{
   int a,b;

   cout << "iki sayi giriniz: ";
   cin >> a >> b;

   int temp_a=a;
   int temp_b=b;

   for (int i=1; i<=5; i++) {
	   a = a + i;
	   b = b + i*2;
   }
    cout << "a = " << a << "    b = " << b << endl;

// Burada orjinal (Kullanıcının en tepede girdiği)
// a ve b değerlerine yeniden ihtiyacım var.

    b=temp_b;
    a=temp_a;

    int toplam = a + b;
    cout << "Girilen a ve b toplami = " << toplam << endl;
    return 0;
}
