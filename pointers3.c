#include <stdio.h>
int main(){
int a = 1025;
int *p;
p=&a;
printf("Size of integer is %d bytes\n",sizeof(int));
printf("Address = %d, value = %d\n",p,*p);
printf("Address = %d, value = %d\n",p+1,*(p+1));

// int 4 bytes, char 1 byte, float 4 bytes

char *p0;
p0= (char*)p; //type casting
printf("Size of integer is %d bytes\n",sizeof(char));
printf("Address = %d, value = %d\n",p0,*p0);
printf("Address = %d, value = %d\n",p0+1,*(p0+1));
// 1025 = 00000000 00000000 00000100 00000001


}

