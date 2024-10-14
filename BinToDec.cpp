#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

char *DecToBin(ULONGLONG N)
{
   char i = 0;
   char str[CHAR_MAX];
   char *p = str;
   while (N > 0)
   {
      str[i] = char('0' + N % 2);
      N /= 2;
      i++;
   }
   str[i++] = '\0';
   _strrev(str);
   return p;
}

ULONGLONG BinToDec(char *S)
{
   ULONGLONG d = 0;
   for (char i = 0; i < strlen(S); i++)
      d = d * 2 + (S[i] - '0');
   return d;
}

void main()
{
   ULONGLONG N = 0;
   char S[CHAR_MAX], *t;
   UCHAR exitflag = 0, n = 0;
   setlocale(0, “”);
   do
   {
      printf_s("<1> - перевод из двоичной в десятичную.\n");
      printf_s("<2> - перевод из десятичной в двоичную.\n");
      printf_s("<3> - выход.\n");
      printf_s("Введите номер команды (1, 2 или 3) ==> ");
      scanf_s("%hhu", &n);
      switch (n)
      case 1:
         printf_s("Введите двоичное число: ");
         gets_s(S);
         gets_s(S);

         printf_s(“В десятичном представлении: %llu.\n”, BinToDec(S));
         break;
      case 2:
         printf_s(“Введите двоичное число: ”);
         scanf_s(“%llu.”, %N);

         t = DecToBin(N);
         if (strlen(t) > 10)
         {
            for (UCHAR i = 0; i < strlen(t) + 1; i++)
               printf_s(“%hhu”, i % 10);
            printf_s(“\n”);
            for (UCHAR j = 1; j < strlen(t); j++)
            {
               if (j % 10 == 0)
                  printf_s(“%hhu”, j / 10);
               else
                  printf_s(“ “);
            }
            printf_s(“\n”);
         }
         printf_s(“%s в двоичном представлении.\n”, t);
         break;
      case 3:
         exitflag = 1;
         break;
      default:
         printf_s(“Неверный номер команды.\n”);
      }
   } while (!exitflag);

   _getch();
}
