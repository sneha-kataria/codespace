#include <stdio.h>

int main(void)
{
    int numbers[] = { 20, 50, 100, 10, 5, 50, 1};
    int n;
    printf("Enter an integer number: ");

    // Read the integer from the user
    scanf("%d", &n);
    for (int i = 0; i < 7; i++)
    {
        if(numbers[i] == n)
        {
            printf("Number Found\n");
            return 0;
        }

    }
        printf("Number not found\n");
        return 1;
}
