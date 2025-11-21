  #include <stdio.h>

   int main ()
   {
       int i, j, n;
       printf ("Enter Array size\n");
       scanf ("%d", &n);

       int arr[n], freq[n];
       printf ("Enter Array elements\n");
       for (i=0; i<n; i++)
       {
           scanf ("%d", &arr[i]);
           freq[i]=1;
       }
       for (i=0; i<n; i++)
       {
           if (freq[i]==0)
              {
                  continue;
              }
             int count=1;

           for (j=i+1; j<n; j++)
           {
               if (arr[i]==arr[j])
               {
                   count++;
                   freq[j]=0;
               }

           }
             freq[i]=count;
       }
       for (i=0; i<n; i++)
       {
          if (freq[i]!=0)
           printf ("%d occurs %d times\n",arr[i], freq[i] );
       }

   }
