#include <stdio.h>

int main()
{
	int age;
	float gpa;
	char grade;
	printf("How old are you?");
	scanf("%i", &age);
	printf("Wht is you GPA?");
	scanf("%f", &gpa);
	printf("What is your letter grade?");
	scanf(" %c", &grade);
	printf("Your GPA is : %.2f\n", gpa);
	printf("Your age is : %.2i\n", age);
	printf("Your Letter grade is : %.2c\n", grade);
	return 0;
}
