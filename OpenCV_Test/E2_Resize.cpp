#include <opencv2/opencv.hpp>
#include <iostream>
#include "Ejercicios.h"

using namespace cv;
using namespace std;

void ejercicio2_resize() {

    Mat img = imread("../img/logoOpenCV.jpg");

    if (img.empty()) {
        cout << "No se pudo cargar la imagen\n";
        return;
    }

    Mat resized;
    resize(img, resized, Size(1024, 1024));

    imshow("E2 - Original", img);
    imshow("E2 - 1024x1024", resized);

    waitKey(0);
    destroyAllWindows();
}
