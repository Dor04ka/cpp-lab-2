#include <iostream>
using namespace std;
#include <cmath>
#include <iomanip>

long fac2(long k) {
	long res = 1;
	if (k % 2 == 0) {
		for (long i = 2; i <= k; i += 2) { res *= i; }
	}
	else {
		for (long i = 1; i <= k; i += 2) { res *= i; }
	}
	return res;
}

double fun_t(double x) {
	double chisl = 0, znam = 0;
	//chisl
	for (long k = 0; k <= 10; k++) {
		chisl += pow(x, 2 * k + 1) / fac2(2 * k + 1);
	}
	//znam
	for (long k = 0; k <= 10; k++) {
		znam += pow(x, 2 * k) / fac2(2 * k);
	}
	return chisl / znam;
}

int main() {
	double y;
	cin >> y;
	double chisl = 0, znam = 0;
	chisl = 7 * fun_t(0.25) + 2 * fun_t(1 + y);
	znam = 6 - fun_t(y * y - 1);
	double otv = chisl / znam;
	cout << setprecision(100) << otv << endl;
}