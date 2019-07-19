/*Adrian Glabik I semestr niestacjonarne 2016*/
/*
 * Rozwiazywanie rownania kwadratowego
 * Robert Arsoba
 * 1.12.2009
 * Wersja 1.0
 */
#include <math.h> /* funkcja sqrt */
#include <stdio.h> /* funkcje printf, scanf */
#include <stdlib.h> /* funkcja system */
float a, b, c; /* wspolczynniki rownania */
float delta; /* wyroznik rownania */
float x1, x2; /* pierwiastki rzeczywiste */
float y; /*wynik rownania*/
float x3; /*x dla rownania liniowego*/
int main()
{
 system("cls"); /* wyczyszczenie ekranu */
 printf("Program rozwiazuje rownanie kwadratowe\n");
 printf(" postaci: ax^2 + bx + c = 0\n\n");
 printf("Podaj wartosci wspolczynnikow:\n");
 printf("a = "); /* wyswietlenie napisu */
 scanf("%f", &a); /* odczyt z klawiatury */
 if (a == 0) /* sprawdzenie, czy rownanie jest kwadratowe */
 {
  printf("b = ");
  scanf("%f", &b);
  printf("c = ");
  scanf("%f", &c);
  x3=-b/c;
  y=(b*x3)+c;
  printf("Rownanie nie jest kwadratowe, jest to rownanie liniowe\n");
  printf("Rozwiazanie rownania linowego\n");
  printf("argument x = %.5f\n\n", x3); /* na ekran */;
  printf("argument y = %.5f\n\n", y); /* na ekran */;
  system("pause");
 /*
 printf("Rownanie nie jest kwadratowe!\n");
 system("pause");
 /* wyjscie z programu */
 return -1; 
 }
 printf("b = ");
 scanf("%f", &b);
 printf("c = ");
 scanf("%f", &c);
 delta = b*b-4*a*c; /* obliczenie wyroznika */
 printf("Rozwiazanie: ");
 if (delta >= 0) /* sprawdzenie delty */
 {
 x1 = (-b+sqrt(delta))/(2*a); /* obliczenie pierwiastkow */
 x2 = (-b-sqrt(delta))/(2*a);
 printf("x1 = %.1f, x2 = %.1f\n\n", x1, x2); /* na ekran */
 }
 else
 printf("brak pierwiastkow rzeczywistych\n\n");
 system("pause"); /* zatrzymanie programu */
 return 0; /* wyjscie z programu */
}
