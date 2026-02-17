#include <opencv2/opencv.hpp>
#include <iostream>
#include "Ejercicios.h"

using namespace cv;
using namespace std;

void ejercicio4_camara() {

    VideoCapture cap(0);

    if (!cap.isOpened()) {
        cout << "No se pudo abrir la camara\n";
        return;
    }

    Mat frame, gray;

    cout << "Presiona ESC para salir...\n";

    while (true) {

        cap >> frame;
        if (frame.empty()) break;

        imshow("E4 - Video", frame);

        cvtColor(frame, gray, COLOR_BGR2GRAY);
        imshow("E4 - Grises", gray);

        if (waitKey(30) == 27) break;
    }

    cap.release();
    destroyAllWindows();
}
