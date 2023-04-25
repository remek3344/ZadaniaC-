#include <iostream>
using namespace std;
int main() {
char literka;

cout<<"Wypisz literki: "<<endl;
  if (cin >> literka) {
        
        if (literka >= 97 && literka <= 122) {
            cout << literka << " jest małą literą\n";
        }
        
         else if (literka >= 65 && literka <= 90) {
            cout << literka << " jest dużą literą\n";
        } 
        
        else {
            cout << literka << " nie jest literą\n";
        }
    }

    return 0;
}


