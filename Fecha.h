#ifndef FECHA_H
#define FECHA_H

class Fecha
 {
public:
     Fecha( int = 1, int = 1, int = 1900 ); // constructor predeterminado
    void imprimir() const; // imprime la fecha en formato mes/d�a/a�o
     ~Fecha(); // se proporciona para confirmar el orden de destrucci�n
 private:
     int mes; // 1-12 (Enero-Diciembre)
     int dia; // 1-31 con base en el mes
     int anio; // cualquier a�o

     int comprobarDia( int ) const;
 }; // fin de la clase Fecha

 #endif // FECHA_H
