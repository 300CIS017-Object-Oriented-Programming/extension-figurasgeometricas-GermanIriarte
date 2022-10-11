//
// Created by Victor Cely on 10/11/22.
//

//
// Created by Victor Cely on 10/11/22.
//

#ifndef EJERCICIO_POLIMORFISMO_TRIANGULO_H
#define EJERCICIO_POLIMORFISMO_TRIANGULO_H
#include "FiguraGeometrica.h"
#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::pow;

class Triangulo: public FiguraGeometrica {
private:
    int base;
    int altura;
public:
    Triangulo();
    Triangulo(int base, int altura);
    virtual ~Triangulo() = default;
    void dibujarFigura() override;
    float calcularArea() override;
    float calcularPerimetro() override;
};


#endif //EJERCICIO_POLIMORFISMO_TRIANGULO_H
