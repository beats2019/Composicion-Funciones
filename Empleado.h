#ifndef EMPLEADO_H
#define EMPLEADO_H



 class Empleado
 {
    public:
        // const char * const --> Apuntador constante a datos constantes
        Empleado( const char * const, const char * const );
        ~Empleado();
        const char *getPrimerNombre() const;
        const char *getApellidoPaterno() const;

        static int getCuenta();


    private:
        char *primerNombre;
        char *apellidoPaterno;

        static int cuenta;



 }; // fin de la clase Empleado

 #endif
