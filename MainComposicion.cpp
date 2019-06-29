#include <iostream>
 using std::cout;
 using std::endl;

 #include "Empleado.h" // definici�n de la clase Empleado

 int main()
 {
     Fecha nacimiento( 7, 24, 1949 );
     Fecha contratacion( 3, 12, 1988 );
     Empleado gerente( "Bob", "Blue", nacimiento, contratacion );

     cout << endl;
     gerente.imprimir();

     cout << "\nPrueba del constructor de Fecha con valores inv�lidos:\n";
     Fecha ultimoDiaDescanso( 14, 35, 1994 ); // mes y dia inv�lidos
     cout << endl;
     return 0;
 } // fin de main
