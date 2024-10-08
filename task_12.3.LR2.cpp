#include <iostream>
#include <cmath>

double f(double x, double p, double q) {
    return pow(x, 3) + p * x + q;
}

double df(double x, double p) {
    return 3 * pow(x, 2) + p;
}

int main() {
    double p, q, x0;
    std::cout << "Введите значения p, q и начальное приближение x0 для уравнения x^3 + px + q = 0: ";
    std::cin >> p >> q >> x0;

    double tol = 1e-7;
    int max_iter = 1000;
    int iter = 0;
    double x = x0;

    // Метод Ньютона для численного решения уравнения
    while (iter < max_iter) {
        double fx = f(x, p, q);
        double dfx = df(x, p);

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