#include "main.h"


void Q1() {
	std::cout << "x\t|y\n";
	double y = 0;
	for (int x = -9; x <= 7; x++) {
		if (x >= -9 && x <= -7) {
			y = 0;
		}

		if (x > -7 && x <= -3) {
			y = 7 + x;
		}

		if (x > -3 && x <= -2) {
			y = 4;
		}

		if (x > -2 && x <= 2) {
			y = x * x;
		}

		if (x > 2 && x <= 4) {
			y = 4 - ((x - 2) * 2);
		}

		if (x > 4 && x <= 7) {
			y = 0;
		}

        std::cout << x << "\t" << y << std::endl;

    }
}