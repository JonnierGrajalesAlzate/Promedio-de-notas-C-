#include <iostream>
using namespace std;
int main (){
double nota1,nota2,nota3,promedio;

cout << "Ingrese las nota 1 : ";
cin >> nota1;
if (nota1<0 || nota1>10)
{
    cout<<"Valor Invalido";
    return 1;
}
cout << "Ingrese las nota 2 : ";
cin >> nota2;
cout << "Ingrese las nota 3 : ";
cin >> nota3;
promedio = (nota1+nota2+nota3)/3;

if (promedio>=7) 
{cout<<"su promedio es "<<promedio<<" y el estudiante es Promocionado";
}
else
{
   if ((promedio>=4) && (promedio<7)) 
      {
          cout<<"Su promedio es "<<promedio<<" y el estudiante es Regular";
      }      
    else
      {cout<<"Su promedio es "<<promedio<<" y el estudiante ha Reprobado";
      }
      
      
}
return 0;
             }
