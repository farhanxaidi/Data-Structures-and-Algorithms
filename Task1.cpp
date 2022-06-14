#include <iostream>
using namespace std;

int Nth_of_AP(int a, int d, int N)
{
	return (a + (N - 1) * d);
}

int main()
{
	int a = 0;
	cout << "Enter starting number: ";
	cin >> a;

	int d = 0;
	cout << "Enter Common Difference: ";
	cin >> d;

	int N = 0;
	cout << "Enter Nth term to be find: ";
	cin >> N;

	cout << "The " << N << "th term of the series is : " << Nth_of_AP(a, d, N) << "\n\n";
	return 0;
}
