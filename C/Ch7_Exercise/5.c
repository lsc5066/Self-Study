#include <stdio.h>

// 5
int main() {
	const int MAX = 100;
	int i = 0, j = 0;
	
	for (i = 1; i <= MAX; i++) { // i = 1 ~ 100
		for (j = 2; j < i; j++) { 
			if (i % j == 0)
				break;
		}

		if (i == j) {
			printf("%3d", i);
		}

	}
	return 0;
	

}