#include <stdio.h>
#include <conio.h>

int main()
{
	int x;
	printf("memeriksa suatu bilangan habis dibagi 5 dan 3\n");
	printf("==============================================\n\n");
	printf("masukkan suatu bilangan : "); scanf("%i",&x);
	if(x%3==0 && x%5==0)
	printf("%i merupakan bilangan habis dibagi 5 dan 3");
	else {
		printf("%i tidak habis dibagi 5 dan 3");
		
	}
return 0;
}
