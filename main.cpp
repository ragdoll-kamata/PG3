#include <stdio.h>
#include "Enemy.h"


int main(){
	int a;
	Enemy enemy;

	while (true) {

		enemy.Updata();

		printf("0で次のフェーズ、1でループを抜ける\n");
		scanf_s("%d", &a);
		if (a == 1) {
			break;
		}
	}
	return 0;
}