// Faktöriyel Örneği
#include <iostream>

using namespace std;

int main()
{
   int n=4, f=1;
   for(int i=1; i<=n; i++) {
    f=f*i;
   }
   cout << f << endl;

    return 0;
}
