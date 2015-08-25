#include <iostream>
using namespace std;

int main ()
{

int num1,num2, sum, rest, D, remain, multi;

cout << "Enter your first number: ";
cin >> num1;
cout << "Enter your second number: ";
cin >> num2;

sum = num1 + num2;
cout << "La suma de los numeros es: ";
cout << sum << endl;

rest = num1 - num2;
cout << "La resta de los numeros es: ";
cout << rest << endl;

multi = num1 * num2;
cout << "El producto de los numeros es: ";
cout << multi << endl;

D= num1 / num2 ;
cout << "El cociente de la division es: ";
cout << D << endl;

remain= num1 % num2 ;
cout << "El residuo de la division es: ";
cout << remain << endl;
return 0 ;
}
