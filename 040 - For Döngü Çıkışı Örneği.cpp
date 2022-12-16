#include <iostream>
using namespace std;

int main()
{
	int i;
	for (i=1;i<=5;i++){
		cout << i << " " ;
	}
	cout << endl << "Cikitsta i =" << i << endl << endl;

	for ( ; i<=10; i+=2) {
        cout << i << " ";
	}
	cout << endl << "Cikista i = " << i << endl << endl;

	for ( ; i<100; ) {
        cout << i << " ";
        if (i<60) i+=3;
        else i+=5;
	}
	cout << endl << "Cikista i = " << i << endl << endl;


	/*
    NOT: For döngüsü jenerik bir yapıya sahiptir.
    Bağlangıç değeri vermeye bilirsiniz.
    Artış değeri vermeye bilirsiniz
    Hatta koşul bile vermeyebilirsiniz.
    */

    for ( ; ; ) {
        cout << i++ << " ";
        if (i>120) break;
    }
    cout << endl << "Cikista i = " << i << endl << endl;
    return 0;
}
