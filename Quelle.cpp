#include <iostream>
using namespace std;


float madelung(int gitter) {
	float mad = 0;
	for (int i = -gitter; i <= gitter; ++i) {
		for (int n = -gitter; n <= gitter; ++n) {
			if (i == 0 && n == 0) continue;
			mad = mad + pow(-1, i + n + 1) / sqrt(i*i + n*n);
		}
	}
	return mad;
}

int main() {
	float git;
	bool running = true;
	while(running){
		cout << "gitter groesse eingeben: ";
		cin >> git;
		if (git == 0) running = false;
		cout << "Madelung fuer Gitter = " << git << " betraegt: " << madelung(git) << endl;
	}
	return 0;
}