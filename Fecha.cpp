#include <iostream>
 using std::cout;
 using std::endl;

 #include "Fecha.h" // incluye la definición de la clase Fecha

 // el constructor confirma el valor apropiado para el mes; llama
 // a la función utilitaria comprobarDia para confirmar un valor apropiado para dia
 Fecha::Fecha( int mm, int dd, int aa )
 {
     if ( mm > 0 && mm <= 12 ) // valida el mes
     mes = mm;
     else
     {
     mes = 1; // mes inválido se establece en 1
     cout << "Mes invalido (" << mm << ") se establecio en 1.\n";
     } // fin else

    anio = aa; // se pudo validar aa
    dia = comprobarDia( dd ); // valida el dia

 // imprime objeto Fecha para mostrar cuándo se llama a su constructor
     cout << "Constructor del objeto Fecha para fecha ";
     imprimir();
     cout << endl;
 } // fin del constructor de Fecha

 // imprime objeto Fecha en el formato mes/dia/anio
 void Fecha::imprimir() const
 {
    cout << mes << '/' << dia << '/' << anio;
 } // fin de la función imprimir
 // imprime objeto Fecha para mostrar cuándo se llama a su destructor
 Fecha::~Fecha()
 {
     cout << "Destructor del objeto Fecha para fecha ";
     imprimir();
     cout << endl;
 } // fin del destructor ~Fecha


 int Fecha::comprobarDia( int diaPrueba ) const
 {
     static const int diasPorMes[ 13 ] =
    { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

     // determina si diaPrueba es válido para el mes especificado
     if ( diaPrueba > 0 && diaPrueba <= diasPorMes[ mes ] )
     return diaPrueba;

     // comprueba 29 de febrero para año bisiesto
     if ( mes == 2 && diaPrueba == 29 && ( anio % 400 == 0 ||
     ( anio % 4 == 0 && anio % 100 != 0 ) ) )
     return diaPrueba;

     cout << "Dia invalido (" << diaPrueba << ") se establecio en 1.\n";
     return 1; // deja el objeto en estado consistente si hay un valor incorrecto
 } // fin de la función comprobarDia











