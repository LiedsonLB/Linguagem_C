#include <stdio.h>

int main()
{
    int op = -1;

    while(op != 0)
    {
        int Num_repeat;
        int count = 1;

        printf("Qual laço deseja utilizar:\n");
        printf("1- While\n");
        printf("2 - For\n");
        printf("0 - Sair\n");
        scanf("%i", &op);

        if(op == 0){
            break;
        }

        printf("Digite até que número deseja que seja impresso: \n");
        scanf("%i", &Num_repeat);

        if(op == 1){
            while (Num_repeat--)
            {
                printf("%i\n", count);
                count++;
            }
        }
        if(op == 2){
            for(int i = 1; i <= Num_repeat; i++){
                printf("%i\n", count);
                count++;
            }
        }
    }

    return 0;
}