#include <stdio.h>
int main()
{
    int i, j, count = 0;
    int data[20], stuffed_data[30];
    // Read the input data
    printf("Enter the data: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &data[i]);
    }
    // Perform bit stuffing
    j = 0;
    for (i = 0; i < 10; i++)
    {
        stuffed_data[j] = data[i];
        if (data[i] == 1)
        {
            count++;
        }
        else
        {
            count = 0;
        }
        j++;
        if (count == 5)
        {
            stuffed_data[j] = 0;
            j++;
            count = 0;
        }
    }
    // Print the stuffed data
    printf("Stuffed data: ");
    for (i = 0; i < j; i++)
    {
        printf("%d ", stuffed_data[i]);
    }
    printf("\n");
    return 0;
}
