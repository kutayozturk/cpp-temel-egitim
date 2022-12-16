// DİZİ ÖRNEK 3
// Matris Örneği
// SORU: 4*5'lik bir tamsayi matirisini 10....99 rastgele dolur ve göster.


#include <iostream>
#include <time.h>
using namespace std;

int main(){
	srand(time(NULL));
	int m[4][5];
// doldurma işlemi
	for (int i=0; i<4; i++){
		for (int j=0; j<5; j++){
			m[i][j] = rand()%90+10;
		}
	}

	// matris çift boyutlu olduğu için çift döngü içinde okuma/doldurma yaptık.
	// Şimdi matrisi görüntüleyelim.
	// NOT: Görüntüleme işlemi yukarıda da yapılabilir.

	for (int i=0; i<4; i++){
		for (int j=0; j<5; j++){
			cout << m[i][j] << "  ";
		}
		cout << endl;
    }
}
/*
NOT: Yukarıda yer alan doldurma döngüsü içerisinde görüntüleme yapılamaz.
Daha önce ne demiştik, bir dizinin tüm elemanlarını görüntülemek istiyorsak
boyut sayısı kadar döngü kullanılır.*/