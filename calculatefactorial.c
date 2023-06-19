#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, factorial;
    char choice;

    do
    {
        factorial = 1;

        printf("Enter a number: ");
        scanf("%d", &number);

        if (number < 0)
        {
            printf("Factorial is not defined for negative numbers.\n");
        }
        else
        {
            for (int i = 1; i <= number; i++)
            {
                factorial *= i;
            }
            printf("Factorial of %d is %d\n", number, factorial);
        }
        printf("Do you want to calculate the factorial again? (Y/N): ");
        do
        {
            scanf(" %c", &choice);
            if (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n')
            {
                printf("Invalid choice. Please enter 'Y', 'y', 'N', or 'n'.\n");
            }
        } while (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n');

    } while (choice == 'Y' || choice == 'y');

    printf("Program exited.\n");

    return 0;
}