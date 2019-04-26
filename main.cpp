#define _CRT_SECURE_NO_WARNINGS
#include "Complex.h"
#include <string>

int main()
{
	Complex z;
	int N;
	FILE *F;
	setlocale(LC_ALL, "Russian");

	F = fopen("Complex.txt", "r");
	if (!F) exit(3);

	fscanf(F, "%d", &N);
	if (N < 1) exit(2);

	Complex *p = new Complex[N];

	fscanf(F, "%lf%lfi", &p[0].real, &p[0].imag);
	double max = p[0].abs();
	int pos = 0;

	for (int i = 1; i < N; ++i) {
		fscanf(F, "%lf%lfi", &p[i].real, &p[i].imag);
		if (p[i].abs() > max) {
			max = p[i].abs();
			pos = i;
		}
	}
	cout << "Комплексное число с максимальным модулем в массиве: " << max << endl;
	delete p;
	fclose(F);
	system("pause");
	return 0;
}
