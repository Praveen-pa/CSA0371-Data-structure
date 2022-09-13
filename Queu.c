#include<stdio.h>
#define n 5
int main()
{
    int queue[n],ch=1,front=0,rear=0,i,j=1,x=n;
    printf("Queue using Array");
    printf("\n1.Insertion \n2.Deletion \n3.Display \n4.Exit");
    while(ch)
    {
        printf("\nEnter the Choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            if(rear==x)
                printf("\n Queue is Full");
            else
            {
                printf("\n Enter no %d:",j++);
                scanf("%d",&queue[rear++]);
            }
            break;
        case 2:
            if(front==rear)
            {
                printf("\n Queue is empty");
            }
            else
            {
                printf("\n Deleted Element is %d",queue[front++]);
                x++;
            }
            break;
        case 3:
            printf("\nQueue Elements are:\n ");
            if(front==rear)
                printf("\n Queue is Empty");
            else
            {
                for(i=front; i<rear; i++)
                {
                    printf("%d",queue[i]);
                    printf("\n");
                }
                break;
            case 4:
                exit(0);
            default:
                printf("Wrong Choice: please see the options");
            }
        }
    }
    return 0;
}

output:

Queue using Array
1.Insertion
2.Deletion
3.Display
4.Exit
Enter the Choice:1

 Enter no 1:3

Enter the Choice:1

 Enter no 2:6

Enter the Choice:1

 Enter no 3:8

Enter the Choice:1

 Enter no 4:9

Enter the Choice:3

Queue Elements are:
 3
6
8
9

Enter the Choice:2

 Deleted Element is 3
Enter the Choice:2

 Deleted Element is 6
Enter the Choice:2

 Deleted Element is 8
Enter the Choice:2

 Deleted Element is 9
Enter the Choice:2

 Queue is empty
Enter the Choice:3

Queue Elements are:

 Queue is Empty
