#include "main.h"

// int main() {
//     int a, x, p;
//     std::cout << "Введите основание, cтепень и значение модуля соответственно : "; 
//     std::cin >> a >> x >> p;
//     int res = APowXModP(a, x, p);
// 	std::cout << res;
// }

int APowXModP(int base, int degree, int module_value) {
	int temp = degree / (module_value - 1);
	temp = degree - ((module_value - 1) * temp);

    int res = pow(base, temp);
	res = res % module_value;

    return res;
} 