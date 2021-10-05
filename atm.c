#include <stdio.h>
#include <stdlib.h>
int main()
{

    float x,y;
    char ch;
    char choice;
    main:
        printf("                       =======================================================");
        printf("\n                      |                      ATM MACHINE                     |");
        printf("\n                      ========================================================");
        printf("\n\n\tEnter initial amount: ");
        scanf("%f",&x);
        printf("\n\t**********************ATM SERVICES*************************");
        printf("\n\n\tEnter c for credit.\n\tEnter d for debit.\n\tEnter b for balance.\n ");
        scanf("\n\n\t%c", &ch);
        printf("\n\t************************************************************");
        switch(ch)
        {
            case 'c':
                printf("\n\tEnter credit amount:");
                scanf("%f",&y);
                x=x+y;
                printf("\n\t\tNew Amount = %.2f",x);
                goto next;

            case 'd':
                printf("\n\tEnter debit amount:");
                scanf("%f",&y);
                if(x>=y)
                {
                   x=x-y;
                   printf("\n\t\tNew amount = %.2f",x);
                }
                else
                {
                    printf("\n\t   Insufficient amount in your account");
                }
                goto next;
            case 'b':
                printf("\n\t   Amount in your account is = %.2f",x);
                goto next;

            default:
                printf("\n\tInvalid choice.Please Enter Valid Input");
                goto next;

        }
        next:
            printf("\n\n\t************************************************************");
            printf("\n\tPRESS b TO GO Main menu:");
            scanf("\n%c",&choice);
            system("cls");
            if(choice=='b')
            {
                goto main;
            }
            else
            {
                return 0;
            }

}
