#include <iostream>

using namespace std;

// FONKSİYON PROTOTİPİ

//int factor (int x); // Prototip: Bak kardeşim, bu fonksiyoonun gövdesi
				  // main'in altında. Sakın hata mata vereyim deme.

int fonk1(int a, int b) {
	if (a>b) return a;
	return b;
}

int main() {

// SORU:

	int a=12, b=30, c=20;
	int xx = fonk1(a,fonk1(b,c));
    cout << "En buyuk deger = " << xx << endl;

    return 0;
}


/*-------------------------------------------------------------
FONKSİYON PROTOTİP ÖRNEĞİ

	#include <iostream>

	using namespace std;

	int fonk1(int a, int b); //PROTOTİP

	int main() {

		int a=12, b=30, c=20;
		int xx = fonk1(a,fonk1(b,c));
		cout << "En buyuk deger = " << xx << endl;

		return 0;
	}

	// Fonksiyonun kendisi
	int fonk1(int a, int b) {
		if (a>b) return a;
		return b;
	}

*/