//	CPP DİLİNDE KULLANILAN ÖZEL İŞARETLER


	// Tek satır açıklama
	/* Burada açıklama var */ /*çok satırlı açıklama */
	
	/*
	
	NOT: Derleyiciler açıklama satırlarına bakmaz....
	
	; Komut sonlandırıcı. Cümle sonundaki nokta gibi düşünebiliriz.
	
	{ } BLOK

		1. Bir değişken, tanımlandığı blokta yaşar.
		2. Bir komuta bağlı birden çok komut varsa, mutlaka süsşü parantez bloğu kullanılır.	
		3. Bütün fonkisyonlar { ile başlar } ile biter.
	*/
	
	/*
	CPP KOMUTLARI
	
	Giriş - Çıkış komutları
		Klavyeden giriş komutu
		cin (console input)
		cin >> değişken_adi >> değiken_adi2 >> .... böyle devam eder.
		
		cin >> "a : " >> a;    YANLIŞ BİR KULLANMIDIR.
		
		NOT: C dilinde cin komutunun karşılığı scanf'dir.
		
	Görüntüleme Komutu
		cout (console output)
		cout << "Metinler" << değişken_adi << ....
		
		NOT: cout ile endl kullanılabilir.
		endl: Bir alt satıra in demektir. 
		(\n): Bir metnin içerisine konulursa yine imleç bir alt satıra iner.
		
		NOT: C dilinde cout komutunun karşılığı printf'dir.
	*/	
	
/*	DOSYA YOLU GÖSTERME	
	
	cout << "Dosya adresi = C:\nigde\trabzon\deneme.txt" << endl; ifadesini inceleyelim.
	
	\n : bir satır aşağı iner
	\t TAB tuşu işlevi görür, 4 karakter boşluk bırakır
	
	Bu sebep ile yukarıdaki ifadenin doğru yazım şekli
		cout << "Dosya adresi = C:\\nigde\\trabzon\\deneme.txt" << endl; 
		
		olmalıdır.
		
		O halde, metin içerisinde \\ kullanmak aslında tek \ kullanmak demektir.
*/