// DİZİ ÖRNEK-2
// Rastgele sayı doldurma
// Kullanıcıdan dizinin elemanlarını alan program
#include <iostream>
#include <time.h>
using namespace std;

int main(){

	srand(time(NULL));
	int d[100]; // maks yüz elemanlı d dizisi
	int n=5;
	for (int i=0;i<n;i++){
		d[i]=rand()%90+10; 	// %2 yaparsak 0 ile 1 üretir (Yazı-Tura)
							// %6 yaparsak 0,1,2,3,4,5 üretir (Zar atılır)
							//tam zar sayıları isteniyorsa %6+1 yaparız.
		cout << d[i] << " ";
    }
	cout << endl;
	
	/*
	ÖNEMLİ NOT: rand komutunun belirli aralıkta sayılar üretmesini istiyosak
	
	d[i]=rand()%90+10;  ifadesi şeklinde yazabiliriz.
	Bu ifade 10 ile 99 arasında sayı üretilecek demektir.
	Yani 2 basamaklı sayıları üretmek istemişiz.
	
	d[i]=rand()%90+10; ifadesi ile rand()%(b-k+1)+k aynıdır.
	b: büyük sayı
	k: küçük sayı
	
	rand()%(b-k+1)+k ifadesini yukarıdaki örneğe uyarlarsak
	rand()%90+10 olduğunu görürüz.*/
	
}


