/*while döngüsü

Şartlı döngü olarak düşünebilir.
"ilgili şartı sağladığı sürece" anlamına geldiğini düşünebiliriz.

while (şart) {


	return 0;
}

while döngüsü ile ekrana 5 kez yazdırmak istediğimiz cümleyi yazdıralım.
*/



	int i;
	i=1;
	
		while (i <= 5){
			cout << "Merhaba Ankara" << endl;
			i++; // Eğer i değerini 1'er 1'er arttırma durumunu programımıza eklemez isek
				 // i=1 ve her zaman 5 değerinden küçük olduğu için programımız SONSUZ DÖNGÜYE girecektir.
		}


	
// Başka bir örnek yapalım.
// 1 ile 10 arasındaki sayıları while döngüsü ile listeleyen c kodlarını yazalım.


cout << "Merhaba Ankara" << endl;


// ***** EV ÇALIŞMASI *****
// 1 ile 20 arasındaki çift sayıları listeleyen 
// AMA
// 14 sayısını listelemeyen c++ kodlarını while döngüsü ile yapalım.

// İç içe while döngüsü örneği


  int i=1;
  char deger;

  while (i <= 5) {
     deger = 'A';
     while (deger <= 'K') {
        cout << deger++;
     }
     cout << "\n";
     i++;
  }


/* EKRAN ÇIKTISI

A B C D E F G H I J K
A B C D E F G H I J K
A B C D E F G H I J K
A B C D E F G H I J K
A B C D E F G H I J K

*/

/* İÇ İÇE DÖNGÜLERDE TAKTİK

İç içe döngüler yazılırken, (for, while ve do-while döngüsü için geçerlidir.)
önce içerideki döngüyü yazmak, sonra dışarıdaki döngüyü yazmak kafamızın karışmadan
daha doğru ve hızlı kod yazmamızı sağlar.
Yukarıdaki örneğe bir göz atalım.

"A B C D E F G H I J K" değerlerini ekrana yazdırdıktan sonra
aynı değerleri altına 5 kez daha yazdırdık.

	deger = 'A';
		 while (deger <= 'K') {
			cout << deger++;
		 }
		 
ilgili kod parçası incelendiğinde A harfinden K harifine kadar olan değerleri ekrana yazdırdık.
5 kez daha tekrar etmesini istediğimiz için bu kodları


  int i=1;
  char deger;

  while (i <= 5) {
    
	TEKRAR EDECEK KODLAR	
	
     cout <<"\n";
     i++;
  }
TEKRAR EDECEK KODLAR alanına yazdık. \n ile bir satır atlatarak, içerideki döngü bittiğinde
alt satıra inmesini saladık.

