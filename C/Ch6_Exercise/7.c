#include <stdio.h>

// 7
int main() {
	unsigned long long money; // ���ռҵ�

	printf("���ռҵ� �ݾ��� �Է����ּ���: ");
	scanf("%llu", &money); // ���ռҵ� �Է�

	if (money > 300000000) {
		unsigned long long tax1= 90100000;
		unsigned long long tax1_1 = (money - 300000000) * 0.38;
		printf("������ %llu�� + %llu�� = %llu���Դϴ�.", tax1, tax1_1, tax1 + tax1_1);
	}

	else if (money > 88000000 && money <= 300000000) {
		unsigned long long tax2 = 15900000;
		unsigned long long tax2_2 = (money - 88000000) * 0.35;
		printf("������ %llu�� + %llu�� = %llu���Դϴ�.", tax2, tax2_2, tax2 + tax2_2);
	}

	else if (money > 46000000 && money <= 88000000) {
		unsigned long long tax3 = 5820000;
		unsigned long long tax3_3 = (money - 46000000) * 0.24;
		printf("������ %llu�� + %llu�� = %llu���Դϴ�.", tax3, tax3_3, tax3 + tax3_3);
	}

	else if (money > 12000000 && money <= 46000000) {
		unsigned long long tax4 = 720000;
		unsigned long long tax4_4 = (money - 12000000) * 0.15;
		printf("������ %llu�� + %llu�� = %llu���Դϴ�.", tax4, tax4_4, tax4 + tax4_4);
	}

	else {
		unsigned long long tax5 = money * 0.06;
		printf("������ %llu���Դϴ�.", tax5);
	}

	return 0;
}