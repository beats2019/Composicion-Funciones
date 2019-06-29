#include <iostream>
using std::cout;
 using std::endl;

 #include <cstring>
 using std::strlen;
 using std::strncpy;

 #include "Empleado.h"
 #include "Fecha.h"


 /*
    const char * const --> It is a constant pointer to constant values

 */

 Empleado::Empleado( const char * const nombre, const char * const apellido,
 const Fecha &fechaDeNacimiento, const Fecha &fechaDeContratacion )
 : fechaNacimiento( fechaDeNacimiento ), // inicializa fechaNacimiento
 fechaContratacion( fechaDeContratacion ) // inicializa fechaContratacion
 {
     //Inicializar primerNombre
     int longitud = strlen( nombre );
     longitud = ( longitud < 25 ? longitud : 24 );
     strncpy( primerNombre, nombre, longitud );
     primerNombre[ longitud ] = '\0';

     //Inicializar apellidoPaterno
     longitud = strlen( apellido );
     longitud = ( longitud < 25 ? longitud : 24 );
     strncpy( apellidoPaterno, apellido, longitud );
     apellidoPaterno[ longitud ] = '\0';






     // imprime objeto Empleado para mostrar cuándo se llama al constructor
     cout << "Constructor del objeto Empleado: "
     << primerNombre << ' ' << apellidoPaterno << endl;
 } // fin del constructor de Empleado

 // imprime objeto Empleado
 void Empleado::imprimir() const
 {
 cout << apellidoPaterno << ", " << primerNombre << " Contratacion: ";
 fechaContratacion.imprimir();
 cout << " Nacimiento: ";
 fechaNacimiento.imprimir();
 cout << endl;
 } // fin de la función imprimir

 // imprime objeto Empleado para mostrar cuándo se llama a su destructor
 Empleado::~Empleado()
 {
 cout << "Destructor del objeto Empleado: "
 << apellidoPaterno << ", " << primerNombre << endl;
 } // fin del constructor ~Empleado
