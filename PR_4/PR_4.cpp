#include <iostream>
using namespace std;
int main()
{
	int K, N, i;
	double S;
	cout << "K = "; cin >> K;
	cout << "N = "; cin >> N;
	//Спосіб 1 цикл while
	S = 1.0;
	i = K;
	while (i <= N) {
		S* (1.0 * K / i + 1.0 * i / K);
		i++;
	}
	cout << "Result (while) = " << S << endl;
	//Спосіб 2 цикл do-while
	S = 1.0;
	i = K;
	do {
		S* (1.0 * K / i + 1.0 * i / K);
		i++;
	} while (i <= N);
	cout << "Result (do-while) = " << S << endl;
	//Спосіб 3 цикл for збільшення лічильника
	S = 1.0;
	for (i = K; i <= N; i++) {
		S* (1.0 * K / i + 1.0 * i / K);
	}
	cout << "Result (for++) = " << S << endl;
	//Спосіб 4 цикл for зменшення лічильника
	S = 1.0;
	for (i = K; i <= N; i--) {
		S* (1.0 * K / i + 1.0 * i / K);
	}
	cout << "Result (for--) = " << S << endl;
	return 0;
}