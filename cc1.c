
#include <stdio.h> 

int main() {
	// Read the number of test cases.
	int T;
	scanf("%d", &T);
	while (T!=0) {
		// Read the input a, b
		int a, b;
		scanf("%d %d", &a, &b);

		// Compute the ans.
		int ans = a + b;
		printf("%d\n", ans);
		T--;
	}
	return 0;
}
