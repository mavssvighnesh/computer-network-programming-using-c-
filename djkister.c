#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{ 
    int dd[5][2];
    int op,d3,d4,d1,d2,i,j;
    for(i=0;i<5;i++)
    {   if(i==0)
            printf("enter values of a \n");
        else if (i==1 )
            printf("enter values for b\n");
        else if(i==2)
            printf("enter values for c \n");
        else if(i==3)
            printf("enter values for d \n");
        else 
            printf("enter values for e\n");
        for(j=0;j<2;j++)
        {
            printf("enter distance to node %d \t",j+1);
            scanf("%d",&dd[i][j]);

        }
    }
    for(i=0;i<5;i++)
    {   for(j=0;j<2;j++)
        {
            
            printf("%d \t ",dd[i][j]);

        }
        printf("\n");
    }
   
    while(1)
    {
        printf("select one option in the below \n ");
        printf("----****MENU****----\n");
        printf("1.)A->B\n 2.)A->c\n 3.)A->D \n4.)A->E\n5.)EXIT \n");
        printf("enter ur option: \t");
        scanf("%d",&op);
        switch(op)
        {
            case(1):
            {
                printf("the shortest path between a->b is %d  distance \n ",dd[0][0]);
                break;

            }
            case(2):
            {
               d1=dd[0][0]+dd[1][1];
               d2=dd[0][1]+dd[3][1]+dd[4][1];

                if (d1<d2)
                {
                    printf("\nthe shortest path between A->C is a->b->c %d \n",d1);
                    }
                else
                {
                    printf("\n the shortest path between a->c is a->d->e->c is %d\n",d2);
                }
                break;
            

            }
            case(3):
            {
                printf("the shortest path between a->d is %d \n ",dd[0][1]);
                break;

            }
            case(4):
            {
               d3=dd[0][0]+dd[1][1]+dd[2][1];
               d4=dd[0][1]+dd[3][1];

                if(d3<d4)
                {
                    printf("the shortest path between a->e is a->b->c->e is %d \n ",d3);
                }
                else 
                {
                    printf("the shortest path between a->e is a->d->e is %d \n",d4);
                }
                break;
            }
            case(5):
            {
                exit(1);
            }
        }
    }
    return(0);
}

