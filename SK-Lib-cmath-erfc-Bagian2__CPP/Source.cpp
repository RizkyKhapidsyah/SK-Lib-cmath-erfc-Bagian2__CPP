
#include <iostream>
#include <cmath>	 /* erf */
#include <conio.h>

using namespace std;

double findProbability(double a) {
	double prob_x_a = erf(a);
	return prob_x_a;
}

int main() {
	double a = 0.25;
	cout << "probability that normal r.v X takes value between " << -a << " & " << a << " is " << findProbability(a) << endl;
	_getch();
	return 0;
}
