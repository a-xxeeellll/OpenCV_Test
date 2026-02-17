#include <opencv2/opencv.hpp>
#include <iostream>
#include "Ejercicios.h"

using namespace cv;
using namespace std;

void ejercicio3_dibujo() {

    Mat img = imread("../img/logoOpenCV.jpg");

    if (img.empty()) {
        cout << "No se pudo cargar la imagen\n";
        return;
    }

    // Rectangulo rojo
    rectangle(img,
        Point(10, 10),
        Point(img.cols - 10, img.rows - 10),
        Scalar(0, 0, 255),
        3);

    // Circulo verde en el centro
    Point centro(img.cols / 2, img.rows / 2);
    circle(img, centro, 80, Scalar(0, 255, 0), 3);

    // Texto abajo
    putText(img,
        "OpenCV - Axel",
        Point(30, img.rows - 20),
        FONT_HERSHEY_SIMPLEX,
        1,
        Scalar(255, 0, 0),
        2);

    imshow("E3 - Figuras", img);
    waitKey(0);
    destroyAllWindows();
}
