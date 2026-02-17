#include <opencv2/opencv.hpp>
#include <iostream>
#include "Ejercicios.h"

using namespace cv;
using namespace std;

void ejercicio1_dimensiones() {

    Mat img = imread("../img/logoOpenCV.jpg");

    if (img.empty()) {
        cout << "No se pudo cargar la imagen\n";
        return;
    }

    cout << "Ancho: " << img.cols << endl;
    cout << "Alto: " << img.rows << endl;
    cout << "Canales: " << img.channels() << endl;

    imshow("E1 - Imagen", img);
    waitKey(0);
    destroyAllWindows();
}
