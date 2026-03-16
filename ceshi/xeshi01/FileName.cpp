#include<stdio.h>
#include<stdlib.h>




int main() {
	while (true) {
		int a, b, c;
		printf("请分别输入三个整数：\n");
		scanf_s("%d%d%d", &a, &b, &c);
		if (a > b) {
			if (a > c) {
				printf("其中a的值最大，为：%d", a);
			}
			else {
				printf("其中c的值最大，为：%d", c);
			}
		}
		else {
			if (b > c) {
				printf("其中b的值最大，为：%d", b);
			}
			else {
				printf("其中c的值最大，为：%d", c);
			}

		}
	}







	return 0;
	system("pause");

}