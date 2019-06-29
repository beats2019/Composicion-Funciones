
#ifndef EMPLEADO_H
 #define EMPLEADO_H

 #include "Fecha.h" // incluye la definici�n de la clase Fecha

 class Empleado
 {
 public:
     Empleado( const char * const, const char * const,
     const Fecha &, const Fecha & );
     void imprimir() const;
     ~Empleado(); // se proporciona para confirmar el orden de destrucci�n
 private:
     char primerNombre[ 25 ];
     char apellidoPaterno[ 25 ];
     const Fecha fechaNacimiento; // composici�n: objeto miembro
     const Fecha fechaContratacion; // composici�n: objeto miembro
 }; // fin de la clase Empleado

 #endif
