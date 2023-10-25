#include <iostream>
#include "Point.h"
#include "VectorGeometrico.h"

using namespace std;

int main(){
    cout << "MAIN: inicio" << endl;
    Point p1(0,0);
    Point p2(4,3);

    GeometricVector vec(p1,p2);

    cout << vec.modulo() << endl;

    cout << "MAIN: final" << endl;

    return 0;
}