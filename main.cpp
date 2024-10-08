#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <functional>


void SetTimeout(std::function<void(int)> a, int answer) {
	for (int i = 0; i < 3; i++) {
		printf("・");
		Sleep(1000);
	}
	
	a(answer);
}

int main(){
	unsigned int currentTime = time(nullptr);
	srand(currentTime);
	int answer = rand() % 6 + 1;
	std::function<void(int)> fAnswer = [](int a) { printf("%d!\n", a); };
	int a;
	printf("サイコロの出目が偶数か奇数か当ててね！\n偶数なら0\n奇数なら1\n");
	scanf_s("%d", &a);
	printf("\n答えは");
	SetTimeout(fAnswer, answer);
	if (answer % 2 == a) {
		printf("正解!");
	} else {
		printf("不正解");
	}
	
	return 0;
}