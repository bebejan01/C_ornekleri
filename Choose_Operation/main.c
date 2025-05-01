#include <stdio.h>

int add(int a, int b)

{
	return a + b;
}

int subtract(int a, int b)

{
	return a - b;
}

void chooseOperation(int choice, int (*operation)(int, int))

{
	int result = operation(10, 5);
	printf("Operation %d Result: %d\n", choice, result);
}

int main() {
	int choice;
	
	printf("Choose an operation (1 for add, 2 for subtract): ");
	scanf("%d", &choice);
	
	if(choice == 1) {
		chooseOperation(choice, add);
	}
	else if (choice == 2) {
		chooseOperation(choice, subtract);
	}
	else {
		printf("Invalid choice\n");
	}
	
	return 0;
}
