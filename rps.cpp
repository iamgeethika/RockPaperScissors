#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll no_of_states;
    scanf("%lld", &no_of_states);

    char St[no_of_states];
    char Out_St[no_of_states];
    ll Arr[no_of_states][3];
    ll Out_Arr[no_of_states][3];

    ll i, j;
    i = 0;

    for (; i < no_of_states; i++)
    {
        // scanf("%c", &St[i]);
        cin >> St[i];
        j = 0;
        for (; j < 3; j++)
        {
            scanf("%lld", &Arr[i][j]);
        }
    }
    i = 0;
    for (; i < no_of_states; i++)
    {
        ll rock = 0;
        ll paper = 0;
        ll scissor = 0;
        if (St[i] == 'S')
        {
            Out_St[i] = 'R';

            j = i;
            for (; j < no_of_states; j++)
            {
                if (St[j] == 'R')
                {
                    if (rock == 0)
                    {
                        Out_Arr[i][0] = Arr[j][0];
                        rock += 1;
                    }
                }

                if (St[j] == 'P')
                {
                    if (paper == 0)
                    {
                        Out_Arr[i][1] = Arr[j][0];
                        paper += 1;
                    }
                }

                if (St[j] == 'S')
                {
                    if (scissor == 0)
                    {
                        Out_Arr[i][2] = Arr[j][0];
                        scissor += 1;
                    }
                }
            }

            ll rand1 = (rand() % no_of_states) + 1;
            ll rand2 = (rand() % no_of_states) + 1;
            ll rand3 = (rand() % no_of_states) + 1;

            if (rock == 0)
            {
                Out_Arr[i][0] = rand1;
            }

            if (paper == 0)
            {
                Out_Arr[i][1] = rand2;
            }

            if (scissor == 0)
            {
                Out_Arr[i][2] = rand3;
            }
        }

        if (St[i] == 'R')
        {
            Out_St[i] = 'P';

            j = i;
            for (; j < no_of_states; j++)
            {
                if (St[j] == 'R')
                {
                    if (rock == 0)
                    {
                        Out_Arr[i][0] = Arr[j][1];
                        rock += 1;
                    }
                }

                if (St[j] == 'P')
                {
                    if (paper == 0)
                    {
                        Out_Arr[i][1] = Arr[j][1];
                        paper += 1;
                    }
                }

                if (St[j] == 'S')
                {
                    if (scissor == 0)
                    {
                        Out_Arr[i][2] = Arr[j][1];
                        scissor += 1;
                    }
                }
            }

            ll rand1 = (rand() % no_of_states) + 1;
            ll rand2 = (rand() % no_of_states) + 1;
            ll rand3 = (rand() % no_of_states) + 1;

            if (rock == 0)
            {
                Out_Arr[i][0] = rand1;
            }

            if (paper == 0)
            {
                Out_Arr[i][1] = rand2;
            }

            if (scissor == 0)
            {
                Out_Arr[i][2] = rand3;
            }
        }

        if (St[i] == 'P')
        {
            Out_St[i] = 'S';

            j = i;
            for (; j < no_of_states; j++)
            {
                if (St[j] == 'R')
                {
                    if (rock == 0)
                    {
                        Out_Arr[i][0] = Arr[j][2];
                        rock += 1;
                    }
                }

                if (St[j] == 'P')
                {
                    if (paper == 0)
                    {
                        Out_Arr[i][1] = Arr[j][2];
                        paper += 1;
                    }
                }

                if (St[j] == 'S')
                {
                    if (scissor == 0)
                    {
                        Out_Arr[i][2] = Arr[j][2];
                        scissor += 1;
                    }
                }
            }

            ll rand1 = (rand() % no_of_states) + 1;
            ll rand2 = (rand() % no_of_states) + 1;
            ll rand3 = (rand() % no_of_states) + 1;

            if (rock == 0)
            {
                Out_Arr[i][0] = rand1;
            }

            if (paper == 0)
            {
                Out_Arr[i][1] = rand2;
            }

            if (scissor == 0)
            {
                Out_Arr[i][2] = rand3;
            }
        }
    }

    printf("%lld\n", no_of_states);
    i = 0;
    for (; i < no_of_states; i++)
    {
        printf("%c ", Out_St[i]);
        j = 0;
        for (; j < 3; j++)
        {
            printf("%lld ", Out_Arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}