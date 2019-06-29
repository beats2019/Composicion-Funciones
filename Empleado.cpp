#include <iostream>
using std::cout;
 using std::endl;

 #include <cstring> // prototipos de strlen y strncpy
 using std::strlen;
 using std::strncpy;

 #include "Empleado.h" // definición de la clase Empleado
 #include "Fecha.h" // definición de la clase Fecha

 // el constructor usa la lista de inicializadores de miembros para pasar los valores
 // de los inicializadores a los constructores de los objetos miembro fechaNacimiento y
//fechaContratacion
 // [Nota: esto invoca al llamado "constructor de copia predeterminado" que el
 // compilador de C++ proporciona de manera implícita.]
 Empleado::Empleado( const char * const nombre, const char * const apellido,
 const Fecha &fechaDeNacimiento, const Fecha &fechaDeContratacion )
 : fechaNacimiento( fechaDeNacimiento ), // inicializa fechaNacimiento
 fechaContratacion( fechaDeContratacion ) // inicializa fechaContratacion
 {
 // copia nombre en primerNombre y se asegura de que quepa
 int longitud = strlen( nombre );
 longitud = ( longitud < 25 ? longitud : 24 );
 strncpy( primerNombre, nombre, longitud );
 primerNombre[ longitud ] = '\0';

 // copy apellido into apellidoPaterno and be sure that it fits
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
