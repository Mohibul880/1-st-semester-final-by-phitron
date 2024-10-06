#include <stdio.h>

void F(int N, char *rounds) 
{
    int Tiger = 0, Pathaan = 0;

    for (int i = 0; i < N; i++) 
    {
        if (rounds[i] == 'T')
            Tiger++;
        else if (rounds[i] == 'P')
            Pathaan++;
    }

    if (Tiger > Pathaan)
        printf("Tiger\n");

    else if (Pathaan > Tiger)
        printf("Pathaan\n");

    else
        printf("Draw\n");
}

int main() 
{
    int T;
    scanf("%d", &T);

    while (T--) 
    {
        int N;
        scanf("%d", &N);

        char rounds[N + 1];
        scanf("%s", rounds);

        F(N, rounds);
    }

    return 0;
}
