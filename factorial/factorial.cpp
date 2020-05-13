#include <iostream>
using namespace std;

int main()
{
   int n,i;
    // maneja numeros que son muy grandes
   long double factorial; 
    
   cout << "Por favor digite el numero: ";
   cin >> n;
   factorial=1;
    
   for( i=1 ; i<=n ; i++ )
        factorial = factorial * i;
    
   cout << endl << "El factorial del numero digitado es: " << factorial << endl;
    
}