
#ifndef EMPLEADO_H
 #define EMPLEADO_H

 #include "Fecha.h"

 class Empleado
 {
 public:
     Empleado( const char * const, const char * const,
     const Fecha &, const Fecha & );
     void imprimir() const;
     ~Empleado();
 private:
     char primerNombre[ 25 ];
     char apellidoPaterno[ 25 ];
     const Fecha fechaNacimiento; // composición: objeto miembro
     const Fecha fechaContratacion; // composición: objeto miembro
 }; // fin de la clase Empleado

 #endif
