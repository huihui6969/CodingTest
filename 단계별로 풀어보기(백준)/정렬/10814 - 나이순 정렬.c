#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    int age;
    int index;
    char name[101];
} ID;

int compare(const char* a, const char* b)
{
    ID A = *(ID*)a;
    ID B = *(ID*)b;

    if (A.age > B.age)
    {
        return 1;
    }
    else if (A.age == B.age)
    {
        if (A.index > B.index)
        {
            return 1;
        }
        else
        {
            return -1;
        }
    }
    else
    {
        return -1;
    }
    return 0;
}

int main()
{
    int N = 0;
    scanf("%d", &N);
    ID arr[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d %s", &arr[i].age, &arr[i].name);
        arr[i].index = i;
    }

    qsort(arr, N, sizeof(ID), compare);

    for (int i = 0; i < N; i++)
    {
        printf("%d %s\n", arr[i].age, arr[i].name);
    }
    return 0;
    
    //c언어 퀵 소트 사용법!!!!
}