#include <iostream>
using namespace std;

int main() {    
        int number=0; 
        cout<<"1-3 arasi bir deger giriniz ? \n";
        cin>>number;
         
        switch(number){
        case 1:
			cout<<"Girilen deger 1"<<endl; 
			break;
			
		case 2:
			cout<<"Girilen deger 2"<<endl; 
            break;
			
        case 3:
			cout<<"Girilen deger 3"<<endl;  
			break;
			
        default:
			cout<<"Girilen deger 1-3 arasinda olmalidir"<<endl;
        }
                                
 
    return 0;
}