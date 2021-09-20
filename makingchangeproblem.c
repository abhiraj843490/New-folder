#include<stdio.h>
void main()
{
   int i, j, n, x, a[n];
   printf("Enter number of coins: ");
   scanf("%d",&n);
   printf("Enter maximum value: ");
   scanf("%d", &x);
   printf("Enter value of each coin in sorted order: ");
   for(i=0; i<n; i++)
   {
      scanf("%d",&a[i]);
   }
   
   int m[n][x+1];
   for(i=0; i<n; i++)
   {
      for(j=0; j < x+1; j++)
      {
         if(j==0)
         m[i][j]=0;
         
         else if(i==0 && j<a[i] || i==0 && j % a[i]!=0)
         m[i][j] = -1;

         else if(i==0 && m[i][j-a[i]]!=-1)
         m[i][j] = 1 + (m[i][j-a[i]]);
         
         else if(j < a[i]) 
         m[i][j] = m[i-1][j];
         
         else
         {
            if(m[i-1][j] == -1 && m[i][j - a[i]] == -1)
            m[i][j] = -1;

            else if(m[i-1][j]==-1 && m[i][j-a[i]]!= -1)
            m[i][j] = 1+ (m[i][j-a[i]]);

            else if(m[i-1][j]!=-1 && m[i][j-a[i]]==-1)
            m[i][j]= m[i-1][j];

            else
            {
               if((1 + m[i][j - a[i]]) <= m[i-1][j])
               m[i][j]=1+(m[i][j-a[i]]);

               else
               m[i][j] = m[i-1][j];
            }
         }
      }
   }
printf("\n\n\t");
for(j=0; j < x+1; j++)
{
   printf("%d\t", j);
}
printf("\n");
for(i=0; i<n; i++)
{
   printf("%d\t",a[i]);
   for(j=0; j < x+1; j++)
   {
      if(m[i][j]==-1)
      printf("0\t");

      else
      printf("%d\t",m[i][j]);
   }
   printf("\n");
}
printf("\nMinimum %d coins are required ", m[i-1][j-1]);  
}