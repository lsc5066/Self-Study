#include <stdio.h>
#include <string.h>

// 4
void delchar(char str[], const char ch);

int main() {

	char str[20];
	strcpy(str, "java");
	char ch = 'a';
	
	delchar(str, ch);

	return 0;
}

void delchar(char str[], const char ch) {

	int count = 0;

	while (str[count] != '\0') {

		if (str[count] == ch) {

			for (int i = count; str[i]!= '\0'; i++) {

				str[i] = str[i + 1];
			}
		}

		count++;
	}

	printf("%s", str);

	return;
}
