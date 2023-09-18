#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX_CADASTERS 1000

struct cadasters
{
    char name[50];
    int account;
    double value;
};

struct cadasters users[MAX_CADASTERS];
int totalUsers = 0;

void createAccount()
{
    if (totalUsers >= MAX_CADASTERS)
    {
        printf("Limite de cadastros atingido.\n\n");
        return;
    }

    struct cadasters newUser;

    printf("Informe o nome do usuario: ");
    scanf("%s", newUser.name);

    printf("Informe o numero da conta: ");
    scanf("%d", &newUser.account);

    newUser.value = 0;

    users[totalUsers++] = newUser;
    printf("\n");
    printf("Conta criada com sucesso.\n\n");
}

void verificAcount()
{
    int accountNumber;
    printf("\n");
    printf("Informe o numero da conta: ");
    scanf("%d", &accountNumber);

    bool found = false;
    for (int i = 0; i < totalUsers; i++)
    {
        if (users[i].account == accountNumber)
        {
            found = true;
            printf("\n");
            printf("Saldo da conta de %s: %.2f\n\n", users[i].name, users[i].value);
            break;
        }
    }

    if (!found)
    {
        printf("\n");
        printf("Conta nao encontrada.\n\n");
    }
}

void saque()
{
    int accountNumber;
    printf("\n");
    printf("Informe o numero da conta: ");
    scanf("%d", &accountNumber);

    bool found = false;
    for (int i = 0; i < totalUsers; i++)
    {
        if (users[i].account == accountNumber)
        {
            found = true;
            printf("\n");
            printf("Informe o valor a ser sacado: ");
            double amount;
            scanf("%lf", &amount);
            double *valuePtr = &users[i].value;

            if (amount <= *valuePtr)
            {
                *valuePtr -= amount;
                printf("\n");
                printf("Saque de %.2f realizado com sucesso.\n\n", amount);
            }
            else
            {
                printf("\n");
                printf("Saldo insuficiente.\n\n");
            }

            break;
        }
    }

    if (!found)
    {
        printf("\n");
        printf("Conta nao encontrada.\n\n");
    }
}

void deposito()
{
    int accountNumber;
    printf("\n");
    printf("Informe o numero da conta: ");
    scanf("%d", &accountNumber);

    bool found = false;
    for (int i = 0; i < totalUsers; i++)
    {
        if (users[i].account == accountNumber)
        {
            found = true;
            printf("\n");
            printf("Informe o valor a ser depositado: ");
            double amount;
            scanf("%lf", &amount);

            double *valuePtr = &users[i].value;

            *valuePtr += amount;
            printf("\n");
            printf("Deposito de %.2f realizado com sucesso.\n\n", amount);

            break;
        }
    }

    if (!found)
    {
        printf("\n");
        printf("Conta nao encontrada.\n\n");
    }
}

int main()
{
    int op;
    while (true)
    {
        printf("Escolha qual operacao deseja realizar: \n");
        printf("Criar Conta - 1\n");
        printf("Verificar Saldo - 2\n");
        printf("Saque - 3\n");
        printf("Deposito - 4\n");
        printf("Sair - 0\n");
        scanf("%i", &op);

        if (op == 1)
        {
            createAccount();
        }
        else if (op == 2)
        {
            verificAcount();
        }
        else if (op == 3)
        {
            saque();
        }
        else if (op == 4)
        {
            deposito();
        }
        else if (op == 0)
        {
            printf("\n");
            printf("Encerrando...\n\n");
            break;
        }
        else
        {
            printf("\n");
            printf("Opcao inválida. Tente novamente.\n\n");
        }
    }

    return 0;
}