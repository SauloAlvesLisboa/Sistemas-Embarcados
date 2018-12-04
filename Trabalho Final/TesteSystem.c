#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>

int main(void)
{
   /*aqui você pode mostrar ao usuário diversas opções relacionadas a números*/
   int N;
   scanf("%d",&N);

   if(N==1){
      
      system("testereconhecedor_led.py"); /*se o usuário tiver digitado 1 o sistema irá reiniciar*/
   }
   else{
      if(N==2){
      system("reboot"); /* caso o usuário digitar 2 o sistema finalizará*/
      }
      else{
         printf("Opção inválida");
      }
   }
}
