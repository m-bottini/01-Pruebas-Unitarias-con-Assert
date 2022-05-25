#include <cassert> //incluye la biblioteca cassertpara poder utilizar el assert
                   //(asegurar, afirmar, aseverar o asertar) de C++
                   //el assert asevera  si la sentencia dentro de los parantesis es verdadera
#include <string>
#include <iostream>
#include <cstdio>

int main () 
{
    //booleanos
    assert(true);
    //assert(not false);
   // assert(false==false);
   // assert(false!=true);
    //assert(not false);
    //assert(false==not true);
    //assert(true and true);
    //assert(false or true);
    //assert((false and false)==false);

    //caracteres

    assert('a' != 'b');
    assert('d' + 'q' == 0xD5);
    assert('l' == 0xD5);
    assert( 'C' - 'A' == 2);
    assert('C' - 2 == 'A');
    assert('C' - 2 == 65);
    
    //double

    assert(2==1+1);
    assert(2.0==1.0+1.0);

   // assert(1.0==0.1+10);
   //Punto flotante (reales) (double) otros tipos flotantes:(float) y (long double)
    assert(0.23 > -1.0);
    assert(3E2 == 3e2);
    assert(3E2 == 3*10*10);
    assert(3E2 == 300.0);
    assert(3E6 == 3000000.0);
    assert(3E6 == 3'000'000.0);
    assert(2.0 + 1 == 3.0);
    assert(1.0);
    //Separador de digitos ' 
    //probar sumar 10 veces 0.1
    // mas operaaciones averiguar rangos y maximos

    assert(12 == std::string("Las Palabras").length());



}