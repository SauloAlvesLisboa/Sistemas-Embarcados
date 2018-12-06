#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>

int main(void)
{
   int N;
   while (1)
	{
	printf("Digite um numero:\n");
	printf("Se for 0 entrara no reconhecimento\n");
	scanf("%d",&N);

	if(N == 0){
	system("python3 testereconhecedor_led.py");
	}
	else 
	break;
	}
   return 0;
}