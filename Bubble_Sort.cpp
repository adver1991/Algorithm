/*
 * Bubble sort
 */
#include <iostream>

struct student
{
	char name[10];
	int score;
};

int main()
{
	student s[10], temp;
	int i = 0;
	int j = 0;
	int count = 0;
	std::cin >> count;
	for (i = 0; i < count; i++) {
		std::cin >> s[i].name >> s[i].score;
	}

	for (i = 1; i <= count - 1; i++) {
		for (j = 0; j <= count - i - 1; j++) {
			temp = s[j];
			s[j] = s[j + 1];
			s[j + 1] = temp;
		}
	}

	for (i = 0; i < count; i++) {
		std::cout << s[i].name << std::endl;;
	}

	return 0;
}
