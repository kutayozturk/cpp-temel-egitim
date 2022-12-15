/* ÖRNEK İLE if'i ÖĞRENELİM

Soru: Bir sayı oku. Negatif mi, pozitif mi, sıfır mı 

int sayi;
cout << "Bir sayi giriniz: ";
cin >> sayi;

	if (sayi<0)
	{
		cout << "Negatif" << endl;
	}
	else
	{
		if(sayi==0)
		{
			cout << "Sifir'dir." << endl;
		}
		else 
		{
			cout<< "Pozitif" << endl;
		}
	}

*/

/*
	if (sayi<0) cout << "Negatif" << endl;
	else if (sayi==0) cout << "Sifir'dir." << endl;
		else cout<< "Pozitif" << endl;			
		*/

YANLIŞ ÖRNEK İNCELEYELİM
	if (sayi<0) cout << "Negatif" << endl;
					
	if (sayi==0) cout << "Sifir'dir." << endl;
		else cout<< "Pozitif" << endl;			