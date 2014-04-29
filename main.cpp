#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int tab[5];
    int n = 5;
    int k, temp;
    string sortowanie;

    int flag = 0;

    tab[0] = 7;
    tab[1] = 3;
    tab[2] = 5;
    tab[3] = 0;
    tab[4] = 1;

    cout << "Jakie chcesz soretowanie (asc, desc): ";
    cin >> sortowanie;

    for(int p = 0; p < 5; p++)
    {
        for(int i = 0; i < n; i++)
        {
            k = i;

            for(int j = i + 1; j < n; j++)
            {
                if(sortowanie == "desc")
                {
                    if(tab[j] > tab[k])
                    {
                        k = j;
                        temp = tab[k];
                        tab[k] = tab[i];
                        tab[i] = temp;
                    }
                }
                else if(sortowanie == "asc")
                {
                    if(tab[j] < tab[k])
                    {
                        k = j;
                        temp = tab[k];
                        tab[k] = tab[i];
                        tab[i] = temp;
                    }
                }
                else
                {
                    cout << "Nie ma takiej opcji!";
                    flag = 1;
                    break;
                }
            }

            if(flag == 1)
                break;
        }

        if(flag == 1)
                break;
    }

    for(int i = 0; i < n; i++)
    {
        cout << tab[i] << endl;
    }

    getch();
    return 0;
}
