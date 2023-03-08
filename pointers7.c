// Character arrays and pointers
#include<stdio.h>
//How to store strings
int main(){
	char C[4];
	C[0] = 'J';
	C[1] = 'O';
	C[2] = 'H';
	C[3] = 'N';
	printf("%s\n",C);	

	char A[5] = {'J','O','H','N'};
	printf("Size in bytes = %d\n",sizeof(A));
	int len = strlen(A);
	printf("Length = %d\n", len);

// Arrays and pointers are different types that are used in similar ways

}
