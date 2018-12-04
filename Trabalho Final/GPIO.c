#include "gpio_sysfs.h"
#include <unistd.h>

// compile junto com o arquivo gpio_sysfs.c
int main(){
    
    int pin = 7;
    if (setGPIO_Out(pin))
        return -1;
    if (GPIO_Write(pin, 1))
        return 1;
    sleep(3);
    if (unsetGPIO(pin))
        return 2;
    return 0;
    }
