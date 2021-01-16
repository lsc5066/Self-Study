#include <stdio.h>
#define PI 3.141592
int main()
{
	printf("! @ # & ^ & *\n"); // 1-(1)

	printf("%f, %f, %f\n", 523.45, 238.34567E3, 33489.134E-3); // 1-(2)

	printf("\"C\" 언어는 재미있는 '프로그래밍 언어'이네요.\n"); // 1-(3)

	printf("%d\n", 057); // 2-(1)

	printf("%d\n", 0x3df); // 2-(2)

	printf("%f\n", 6.98*6.98*PI); // 3

	printf("%d\n", 24 * 60 * 60); // 4

	int seconds = 24 * 60 * 60;
	printf("%d\n", seconds); // 5

	int point1 = 95;
	int point2 = 84;
	int total = point1 + point2;
	printf("%d\n", total); // 6
	
	printf("%d\n", total / 2);
	printf("%f\n", total / 2.0); // 7

	printf("%d %d %d\n", 1, 01, 0x1);
	printf("%d %d %d\n", 2, 02, 0x2);
	printf("%d %d %d\n", 3, 03, 0x3);
	printf("%d %d %d\n", 4, 04, 0x4);
	printf("%d %d %d\n", 5, 05, 0x5);
	printf("%d %d %d\n", 6, 06, 0x6);
	printf("%d %d %d\n", 7, 07, 0x7);
	printf("%d %d %d\n", 8, 010, 0x8);
	printf("%d %d %d\n", 9, 011, 0x9);
	printf("%d %d %d\n", 10, 012, 0xA); //8

	double radius = 7.58;
	double area = 7.58*7.58*PI;
	double circumference = 2 * PI * 7.58;
	printf("%f, %f, %f", radius, area, circumference); // 9+10

	int f = 0;
	double celsius = 5.0 / 9.0 * (f - 32.0);
	printf("섭씨온도: %f\n", celsius); // 11

	int c = 0;
	double fahrenheit = (9.0 / 5.0) * c + 32.0;
	printf("화씨온도: %f\n", fahrenheit); // 12
	
	printf("\a수업시간입니다.\n"); // 13

	printf("%c %c %c %c %c\n", 041, 042, 043, 044, 045); // 14

	double apartArea1 = 18 * 3.305785;
	double apartArea2 = 25 * 3.305785;
	double apartArea3 = 32 * 3.305785;
	double apartArea4 = 44 * 3.305785;
	double apartArea5 = 52 * 3.305785;
	printf("18평: %f\n25평: %f\n32평: %f\n44평: %f\n52평: %f\n", apartArea1, apartArea2, apartArea3, apartArea4, apartArea5); // 15

	double mile1 = 60 * 0.621371;
	double mile2 = 80 * 0.621371;
	double mile3 = 100 * 0.621371;
	double mile4 = 120 * 0.621371;
	printf("60km: %f\n80km: %f\n100km: %f\n120km: %f\n",mile1, mile2, mile3, mile4); // 16

	printf("%c %o %d %x\n", '#', '#', '#', '#');
	printf("%c %o %d %x\n", '$', '$', '$', '$');
	printf("%c %o %d %x\n", '^', '^', '^', '^');
	printf("%c %o %d %x\n", '&', '&', '&', '&');
	printf("%c %o %d %x\n", '*', '*', '*', '*'); // 17

	char a1 = 'A' + 2;
	char a2 = 'A' + 5;
	char a3 = 'S' - 1;
	char a4 = 'S' - 3;
	printf("%c %c %c %c\n", a1, a2, a3, a4); // 18

	int won = 1000000;
	const int dollar = 1120 * won;
	printf("100만원 -> %d달러\n", dollar); // 19

	unsigned int disMs = 117900000;
	unsigned int disUs = 2871000000;
	unsigned int disMu = disMs + disUs;
	printf("화성과 천왕성 간의 거리: %u\n", disMu); // 20

	return 0;
	
}