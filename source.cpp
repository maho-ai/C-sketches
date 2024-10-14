#include <conio.h>
#include <windows.h>
#include <stdio.h>

const UCHAR Nmax = 15;                 // объ€вление размера массива

void main()
{
   bool f = true;                      // объ€вление флага
   int arr[Nmax];                      // объ€вление массива

   printf_s("Input array:\n");
   for (char i = 0; i < Nmax; i++)
      scanf_s("%d", &arr[i]);          // ввод массива с клавиатуры

   while(f)                            // пока флаг "подн€т", выполн€етс€ сортировка
   { 
      f = false;  // "опускаем" флаг
      for (char j = Nmax - 2; j >= 0; j--)
         if (arr[j] > arr[j + 1])
         {
            int b = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = b;
            f = true;                  //если произошла перестановка, "поднимаем" флаг
         }
   }
 
   for (char i = 0; i < Nmax; i++)     //вывод массива
      printf_s("%d ", arr[i]);
}