#include <iostream> 

using std::cout; 

struct Polimorfismo { 
    virtual ~Polimorfismo() {} 
}; 

enum Binario { cero, uno }; 
enum Intensidad { negro = 0, brillo = 1000 }; 

int main(){ 
    // Tipos fundamentales: 
    cout << "sizeof(bool)\t\t\t" << sizeof(bool) << '\n'; 
    cout << "sizeof(char)\t\t\t" << sizeof(char) << '\n'; 
    cout << "sizeof(signed char)\t\t" << sizeof(signed char) << '\n'; 
    cout << "sizeof(unsigned char)\t\t" << sizeof(unsigned char) << '\n'; 
    cout << "sizeof(wchar_t)\t\t\t" << sizeof(wchar_t) << '\n'; 
    // No hay variantes con signo / sin signo
    cout << "sizeof(signed short)\t\t" << sizeof(signed short) << '\n'; 
    cout << "sizeof(unsigned short)\t\t" << sizeof(unsigned short) << '\n'; 
    cout << "sizeof(signed int)\t\t" << sizeof(signed int) << '\n'; 
    cout << "sizeof(unsigned int)\t\t" << sizeof(unsigned int) << '\n'; 
    cout << "sizeof(signed long)\t\t" << sizeof(signed long) << '\n'; 
    cout << "sizeof(unsigned long)\t\t" << sizeof(unsigned long) << '\n'; 
    // Tipos fundamentales de coma flotante: 
    cout << "sizeof(float)\t\t\t" << sizeof(float) << '\n'; 
    cout << "sizeof(double)\t\t\t" << sizeof(double) << '\n'; 
    cout << "sizeof(long double)\t\t" << sizeof(long double) << '\n'; 
    // Tipos de puntero:
    cout << "sizeof(int*)\t\t\t" << sizeof(int*) << '\n'; 
    cout << "sizeof(int (*)())\t\t" << sizeof(int (*)()) << '\n'; 
    // Lo anterior corresponde a un puntero a una función.
    // El siguiente es un puntero a una función miembro:
    cout << "sizeof(void (Polimorfismo::*)())" << sizeof(void (Polimorfismo::*)()) << '\n'; 
    cout << "sizeof(void*)\t\t\t" << sizeof(void*) << '\n'; 
    // Enumeration types: 
    cout << "sizeof(Binario)\t\t\t" << sizeof(Binario) << '\n'; 
    cout << "sizeof(Intensidad)\t\t" << sizeof(Intensidad) << '\n'; 
    return 0; 
} 

//*********************************************************************//
//                   Respuesta  de 1.1                                 //
//*********************************************************************//
/*                                                                     






*/


//*********************************************************************//
//                   Respuesta  de 1.2                                 //
//*********************************************************************//
/*                                                                     






*/
