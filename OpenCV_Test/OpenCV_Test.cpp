#include <opencv2/opencv.hpp>
#include <iostream>
#include "Ejercicios.h"

using namespace std;

int main() {

    int opcion;

    cout << "===== OpenCV - Ejercicios =====\n";
    cout << "1) Mostrar dimensiones\n";
    cout << "2) Resize (1024x1024)\n";
    cout << "3) Dibujar figuras y texto\n";
    cout << "4) Camara (video + grises)\n";
    cout << "Elige opcion (1-4): ";
    cin >> opcion;

    switch (opcion) {
    case 1: ejercicio1_dimensiones(); break;
    case 2: ejercicio2_resize(); break;
    case 3: ejercicio3_dibujo(); break;
    case 4: ejercicio4_camara(); break;
    default: cout << "Opcion no valida\n"; break;
    }

    return 0;
}
