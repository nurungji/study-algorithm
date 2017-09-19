#include <stdio.h>

#define N_MAX 100
#define M_MAX 5000
#define INF 987654321

int N, M;
int adj[N_MAX + 2][N_MAX + 2];

int main()
{
    scanf("%d %d", &N, &M);

    for (int i = 0; i < N_MAX; i++)
    {
        for (int j = 0; j < N_MAX; j++)
        {
            adj[i][j] = INF;
        }
        adj[i][i] = 0;
    }

    for (int k = 0; k < M; k++)
    {
        int i, j;
        scanf("%d %d", &i, &j);
        adj[i][j] = adj[j][i] = 1;
    }


    for (int k = 1; k <= N; k++)
    {
        for (int i = 1; i <= N; i++)
        {
            for (int j = 1; j <= N; j++)
            {
                if (adj[i][j] > adj[i][k] + adj[k][j])
                    adj[i][j] = adj[i][k] + adj[k][j];
            }
        }
    }

    int max = INF;
    int person = 0;
    for (int i = 1; i <= N; i++)
    {
        int temp = 0;
        for (int j = 1; j <= N; j++)
        {
            temp += adj[i][j];
        }
        if (max > temp)
        {
            max = temp;
            person = i;
        }
    }

    printf("%d\n", person);
    return 0;
}


