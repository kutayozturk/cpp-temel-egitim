// Bu kod ne yapar.

#include <iostream>

using namespace std;

	int x;
	cout << "x:";
	cin >> x;
	int say=0;
	while (x!=0) {
		say++;
		x/10;
	}
	cout << "say = " << say << endl;
	
	// yukarıdaki kodda 1234 girilirse say kaç görüntülenir.
	
	return 0;