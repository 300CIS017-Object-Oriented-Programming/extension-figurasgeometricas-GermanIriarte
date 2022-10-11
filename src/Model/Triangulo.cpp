//
// Created by Victor Cely on 10/11/22.
//

#include "Triangulo.h"
//
// Created by Victor Cely on 10/11/22.
//

#include "Triangulo.h"
Triangulo::Triangulo() {
    base=0;
    altura=0;
    nombreFigura = "Triangulo";
}

Triangulo::Triangulo(int base, int altura): Triangulo()  {
    this->base = base;
    this->altura = altura;
}

void Triangulo::dibujarFigura() {
    cout << "DibujarFigura!!!";
}

float Triangulo::calcularArea(){
    area = (base * altura) / 2;
    cout << "El area del rombo es: " << area << "\n";
    return area;
}
float Triangulo::calcularPerimetro(){
    perimetro = base+altura+(root(base**2+altura**2));
    cout << "El perimetro es: " << perimetro << "\n";
    return perimetro;
}