#include <iostream>
 using std::cout;
 using std::endl;

 #include "Empleado.h" // definición de la clase Empleado

 int main()
 {
     cout << "EL numero de empleados antes de empezar la cuenta es : "
     << Empleado::getCuenta() << endl;


     Empleado *e1Ptr = new Empleado( "Susan" , "Baker" );
     Empleado *e2Ptr = new Empleado( "Jose" , "Avila" );



     cout << "EL numero de empleados luego de empezar la cuenta es : "
     << e1Ptr->getCuenta() << endl;

     cout << "Empleado 1: " << e1Ptr->getPrimerNombre() << ' ' << e1Ptr->getApellidoPaterno() << endl;
     cout << "Empleado 2: " << e2Ptr->getPrimerNombre() << ' ' << e2Ptr->getApellidoPaterno() << endl;

     delete e1Ptr;
     e1Ptr = 0;
     delete e2Ptr;
     e2Ptr = 0;

     cout << "EL numero de empleados luego de eliminar es : "
     << Empleado::getCuenta() << endl;

     return 0;
 } // fin de main









