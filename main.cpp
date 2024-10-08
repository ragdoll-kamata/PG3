#include <stdio.h>

int Saiki(int a, int b) {
	if (a > 0) {
		return b + Saiki(a - 1, b * 2 - 50);
	}
	return b;
}

int main(){
	int a;

	printf("何時間働いた?");
	scanf_s("%d", &a);
	printf("一般的な賃金 : %d\n再帰的な賃金 : %d", 1072 * a, Saiki(a, 100));

	return 0;
}