1 лабораторная , 2 задача

#include <iostream>
#include <cmath>
#include <iomanip>

// Функция, представляющая уравнение
double f(double x) {
    return exp(-x) - ((x - 1) * 0.5);
}

// Метод дихотомии (бисекции)
double dihotomia(double a, double b, double epsilon) {
    double c;
    while ((b - a) >= epsilon) {
        c = (a + b) / 2.0;
        if (f(c) == 0.0) {
            break;
        } else if (f(c) * f(a) < 0) {
            b = c;
        } else {
            a = c;
        }
    }
    return c;
}

// Метод простых итераций
double iteration(double x0, double epsilon) {
    double x1;
    while (true) {
        x1 = x0 - f(x0) / (exp(x0) + x0 * exp(x0) - 1);
        if (fabs(x1 - x0) < epsilon) {
            break;
        }
        x0 = x1;
    }
    return x1;
}

// Метод хорд
double secant(double a, double b, double epsilon) {
    double c;
    while (fabs(b - a) >= epsilon) {
        c = b - (f(b) * (b - a)) / (f(b) - f(a));
        a = b;
        b = c;
    }
    return c;
}

// Метод Ньютона
double newton(double x0, double epsilon) {
    double x1;
    while (true) {
        x1 = x0 - f(x0) / (exp(x0) + x0 * exp(x0) - 1);
        if (fabs(x1 - x0) < epsilon) {
            break;
        }
        x0 = x1;
    }
    return x1;
}

int main() {
    const double a = 0.0, b = 1.0;
    const double epsilon = 1e-6;

    std::cout << std::fixed << std::setprecision(7);

    std::cout << "Method of dihotomia: " << dihotomia(a, b, epsilon) << std::endl;
    std::cout << "Method of Iteration: " << iteration(0.5, epsilon) << std::endl;
    std::cout << "Method of Secant: " << secant(a, b, epsilon) << std::endl;
    std::cout << "Method of Newton: " << newton(0.5, epsilon) << std::endl;

    return 0;
}
