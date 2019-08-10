#include <stdio.h>
#include <locale.h>

int main(void)
{
    //testando acentuação
    setlocale(LC_ALL,"");
    printf("olá, mundão\n");

    //início da aula
    int contador;
    int numero = 1;

    for (contador = 1; contador <= 10; contador++) 
    {
        printf("%d\n", contador);
    }


    return 0;
}