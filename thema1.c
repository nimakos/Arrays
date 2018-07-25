#include<stdio.h>
#include <conio.h>

int main()
{
    int x[3][3],i,j,g,sum=0;
    float mesos[3],min;

    for(i = 0; i<3; i++)
    {
        for(j = 0; j<3; j++)
            {
                printf("Dwse Stoixeia  ");
                scanf("%d", &x[i][j]);
            }
    }

	while (1)
    {
		printf("\n1.Sum of Lines\n"

                 "2.Average of Columns\n");

    g=getch();

		switch (g)
           {

		case '1':

                for(i = 0; i<3; i++)
                { sum=0;
                    for(j = 0; j<3; j++)
                    {
                        sum=sum+x[i][j];
                    }
                    printf("To aroisma einai : %d\n", sum);
                }

			break;

		case '2':

                for(j = 0; j<3; j++)
                { sum=0;
                    for(i = 0; i<3; i++)
                    {
                        sum=sum+x[i][j];
                    }
                    mesos[j]=sum/3;
                }

                    min=32000;
                    for(j = 0; j<3; j++)
                     {
                        if (mesos[j]<min)
                        {
                            min=mesos[j];
                        }
                    }

                    for(j = 0; j<3; j++)
                    {
                        if (mesos[j]==min)
                        {
                            printf("\nO Minimum mesos twn stilwn einai %.2f kai vrsketai sti stilli me arithmo %d\n", min, j+1);
                        }
                    }

                break;
           }
    }
        return 0;
}
