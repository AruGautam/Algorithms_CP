
#include <bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, char R1, char R2,char R3)
{
	if (n == 0) {
		return;
	}
	towerOfHanoi(n - 1, R1, R3, R2);
	cout << "Move disk " << n << " from rod " << R1
		<< " to rod " << R2 << endl;
	towerOfHanoi(n - 1, R3, R2, R1);
}

int main()
{
	int N = 3;

	// A, B and C are names of rods
	towerOfHanoi(N, 'A', 'C', 'B');
	return 0;
}

