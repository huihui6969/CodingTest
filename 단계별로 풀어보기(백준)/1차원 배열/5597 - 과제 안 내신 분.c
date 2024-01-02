#include <stdio.h>

int main()
{
    int presentNum[28];
    int student[31] = { 0 };

    for (int i = 0; i < 28; i++)
    {
        scanf("%d", &presentNum[i]);
    }

    for (int j = 0; j < 28; j++)
    {
        student[presentNum[j]] = presentNum[j];
    }

    for (int k = 1; k < 31; k++)
    {
        if (student[k] == 0)
        {
            printf("%d\n", k);
        }
    }

    return 0;
}