#include <conio.h>
#include <windows.h>
#include <stdio.h>

const UCHAR Nmax = 15;                 

void main()
{
   
   bool f = true;                      
   int arr[Nmax];                    

   printf_s("Input array:\n");
   for (UCHAR i = 0; i < Nmax; i++)
      scanf_s("%d", &arr[i]);          

   while(f)                            
   { 
      f = false; 
      for (UCHAR j = Nmax - 2; j >= 0; j--)
         if (arr[j] > arr[j + 1])
         {
            int b = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = b;
            f = true;                  
         }
   }
 
   for (UCHAR i = 0; i < Nmax; i++) 
      printf_s("%d ", arr[i]);
}
