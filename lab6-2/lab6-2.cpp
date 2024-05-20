#include <iostream>
#include <cmath>

using namespace std;


float PI = 3.14;
// Абстрактний базовий клас фігура
class Figure {
public:
    virtual double calculateVolume() const = 0; // Віртуальна функція об’єму
};

// Похідний клас паралелепіпед
class Parallelepiped : public Figure {
private:
    double x, y, z; // Сторони паралелепіпеда
public:
    Parallelepiped(double _x, double _y, double _z) : x(_x), y(_y), z(_z) {}

    double calculateVolume() const override {
        return x * y * z;
    }
};

// Похідний клас піраміда
class Pyramid : public Figure {
private:
    double x, y, h; // Сторони та висота піраміди
public:
    Pyramid(double _x, double _y, double _h) : x(_x), y(_y), h(_h) {}

    double calculateVolume() const override {
        return (x * y * h) / 3.0;
    }
};

// Похідний клас тетраедр
class Tetrahedron : public Figure {
private:
    double a; // Сторона тетраедра
public:
    Tetrahedron(double _a) : a(_a) {}

    double calculateVolume() const override {
        return (a * a * a * PI) / 12.0;
    }
};

// Похідний клас куля
class Sphere : public Figure {
private:
    double r; // Радіус кулі
public:
    Sphere(double _r) : r(_r) {}

    double calculateVolume() const override {
        return (4.0 * PI * pow(r, 3)) / 3.0;
    }
};

int main() {
    // Приклад використання класів
    Parallelepiped parallelepiped(2.0, 3.0, 4.0);
    Pyramid pyramid(5.0, 6.0, 7.0);
    Tetrahedron tetrahedron(8.0);
    Sphere sphere(9.0);

    cout << "Parallelepiped Volume: " << parallelepiped.calculateVolume() << endl;
    cout << "Pyramid Volume: " << pyramid.calculateVolume() << endl;
    cout << "Tetrahedron Volume: " << tetrahedron.calculateVolume() << endl;
    cout << "Sphere Volume: " << sphere.calculateVolume() << endl;

    return 0;
}
