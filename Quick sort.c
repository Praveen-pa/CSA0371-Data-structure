#include <stdio.h>
#define MAX 10

void swap(int *m,int *n)
{
   int temp;
   temp = *m;
   *m = *n;
   *n = temp;
}
int get_key_position(int x,int y )
{
   return((x+y) /2);
}

// Function for Quick Sort
void quicksort(int list[],int m,int n)
{
   int key,i,j,k;
   if( m < n)
   {
      k = get_key_position(m,n);
      swap(&list[m],&list[k]);
      key = list[m];
      i = m+1;
      j = n;
      while(i <= j)
      {
         while((i <= n) && (list[i] <= key))
                i++;
         while((j >= m) && (list[j] > key))
		j--;
	 if( i < j)
		swap(&list[i],&list[j]);
      }
      swap(&list[m],&list[j]);
      quicksort(list,m,j-1);
      quicksort(list,j+1,n);
   }
}

// Function to read the data
void read_data(int list[],int n)
{
   int j;
   printf("\n\nEnter the elements:\n");
   for(j=0;j<n;j++)
       scanf("%d",&list[j]);
}

// Function to print the data
void print_data(int list[],int n)
{
   int j;
   for(j=0;j<n;j++)
       printf("%d\t",list[j]);
}

int main()
{
   int list[MAX], num;
   //clrscr();
   printf("\n***** Enter the number of elements Maximum [10] *****\n");
   scanf("%d",&num);
   read_data(list,num);
   printf("\n\nElements in the list before sorting are:\n");
   print_data(list,num);
   quicksort(list,0,num-1);
   printf("\n\nElements in the list after sorting are:\n");
   print_data(list,num);
   return 0;
}

output:

***** Enter the number of elements Maximum [10] *****
6


Enter the elements:
23 32 13 67 45 66


Elements in the list before sorting are:
23      32      13      67      45      66

Elements in the list after sorting are:
13      23      32      45      66      67
