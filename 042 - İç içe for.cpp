// İÇ İÇE DÖNGÜ

#include <iostream>
using namespace std;

int main()
{
	int t=0;
    for (int i=1; i<=3; i++) {      // i=1 için
        for (int j=1; j<=4; j++) {  // j=1,2,3,4 çalýþýr
            t++;
            cout << i << "  " << j << "    " << t << endl;
        }
    }
    cout << "\n\nt= " << t << endl;

    for (int i=1; i<=5 ; i++){
        if (i==2) continue;
        if (i==4) break;
        cout << i << "  " << endl;
    }
    cout << endl;
    return 0;
}

