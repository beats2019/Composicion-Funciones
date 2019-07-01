#include <iostream>
using std::cout;
 using std::endl;

 #include <cstring>
 using std::strlen;
 using std::strncpy;

 #include "Empleado.h"

int Empleado::cuenta = 0;
int Empleado::getCuenta()
{
   return cuenta;
}



Empleado::Empleado( const char * const nombre, const char * const apellido )
{
    primerNombre = new char[ strlen(nombre) + 1 ];
    strcpy( primerNombre, nombre );

    apellidoPaterno = new char[ strlen(apellido) + 1 ];
    strcpy( apellidoPaterno, apellido );

    cuenta++;

    cout << "Se llamo al constructor de Empleado para " << primerNombre
    << "  " << apellidoPaterno << endl;

}




 Empleado::~Empleado()
 {
     cout << "Destructor del objeto Empleado: "
     << apellidoPaterno << ", " << primerNombre << endl;

     delete [] primerNombre;
     delete [] apellidoPaterno;

     cuenta--;

 }

 const char *Empleado::getPrimerNombre() const
 {
     return primerNombre;
 }

 const char *Empleado::getApellidoPaterno() const
 {
     return apellidoPaterno;
 }


















