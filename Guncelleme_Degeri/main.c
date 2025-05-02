#include <stdio.h>

void updateValue(int** dptr) {
	
	**dptr = 20;
	
	
	
}

int main() {
	int x = 10;
	int* ptr = &x;
	int** dptr = &ptr;
		
		updateValue(dptr);
		printf("x = %d\n", x);
		
		return 0;
}
