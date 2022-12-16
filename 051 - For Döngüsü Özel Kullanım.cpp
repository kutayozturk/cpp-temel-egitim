// FOR DÖNGÜSÜ ÖZEL KULLANIMI

#include <iostream>
using namespace std;

int main()
{
	int i, j;
	for (i=1,j=5; i<20 && j<40; i+=2,j+=5) {
		cout << i << " " << j << endl;
	}
    return 0;
}

// At başı döngü de denir.