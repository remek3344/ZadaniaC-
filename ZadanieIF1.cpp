#include <iostream>
using namespace std;
int main() {
int liczba ;
cout<<"Podaj liczbe a ja powiem czy przy dzieleniu przez 5 daje resztę 2"<<endl;
cin>>liczba;
cout << "Liczba to = " << liczba<< endl;

if (liczba) {
    cout << "Podaj liczbę "<< endl;
}
else if(liczba%5==2)
{
    cout << "Tak liczba daje resztę 2"<< endl;
}
else{
    cout<<"Nie liczba nie daje reszty 2"<< endl;
}
return 0;
}