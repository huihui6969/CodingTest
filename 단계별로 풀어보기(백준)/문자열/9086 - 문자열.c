#include <stdio.h>

int main(void)
{
    int T = 0;
    char text[1000];

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%s", text);
        printf("%c%c\n", text[0], text[strlen(text) - 1]);
    }
}