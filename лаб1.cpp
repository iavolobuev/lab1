1 лабораторная , 1 задача

#include <iostream>
#include <complex>
#include <cmath>

int main() {
    
    std::complex<double> z1(-1, 1);
    std::complex<double> z2(-3, -1);
    std::complex<double> z3(1, 2);

    std::complex<double> sum_z1_z2 = z1 + z2;
    std::cout << "Сумма z1 и z2: " << sum_z1_z2 << std::endl;

    std::complex<double> diff_z1_z2 = z1 - z2;
    std::cout << "Разность z1 и z2: " << diff_z1_z2 << std::endl;

    std::complex<double> prod_z1_z2 = z1 * z2;
    std::cout << "Произведение z1 и z2: " << prod_z1_z2 << std::endl;

    std::complex<double> quot_z1_z2 = z1 / z2;
    std::cout << "Частное z1 и z2: " << quot_z1_z2 << std::endl;

    std::complex<double> fourth_power_z3 = std::pow(z3, 4);
    std::cout << "Четвертая степень z3: " << fourth_power_z3 << std::endl;

    std::complex<double> cube_root_z3 = std::pow(z3, 1.0/3.0);
    std::cout << "Кубический корень z3: " << cube_root_z3 << std::endl;

    return 0;
}
