#include <iostream>
#include <cmath>

double f(double x, double a, double b, double c) {
    return a * pow(x, 4) + b * pow(x, 3) + c * pow(x, 2) + b * x + a;
}

double df(double x, double a, double b, double c) {
    return 4 * a * pow(x, 3) + 3 * b * pow(x, 2) + 2 * c * x + b;
}

int main() {
    double a, b, c, x0;
    std::cout << "Введите значения a, b, c и начальное приближение x0 для уравнения ax^4 + bx^3 + cx^2 + bx + a = 0: ";
    std::cin >> a >> b >> c >> x0;

    double tol = 1e-7;
    int max_iter = 1000;
    int iter = 0;
    double x = x0;

    // Метод Ньютона для численного решения уравнения
    while (iter < max_iter) {
        double fx = f(x, a, b, c);
        double dfx = df(x, a, b, c);

        if (std::abs(fx) < tol) {
            break;
        }

        if (std::abs(dfx) < tol) {
            std::cout << "Производная близка к нулю, метод не сработал." << std::endl;
            return 1;
        }

        x = x - fx / dfx;
        iter++;
    }

    if (iter == max_iter) {
        std::cout << "Метод не сошелся после " << max_iter << " итераций." << std::endl;
    } else {
        std::cout << "Решение уравнения: x = " << x << std::endl;
    }

    return 0;
}