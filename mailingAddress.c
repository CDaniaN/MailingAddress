/*
Dania Naseresddin
2-1-2021
Mailing Address is a program that different parts of an address from the user
and prints them in in one line at the end.
*/
#include <stdio.h>

int main()
{
  char another, street[50], city[50], state[50];
  int apt, zip;
  while (another != 'n')
  {
    printf("Enter your street: ");
    scanf("%49[^\n]s", street);
    while((getchar())!='\n');

    printf("Enter the house or apartment number: ");
    scanf(" %d", &apt);
    while((getchar())!='\n');

    printf("Enter the city: ");
    scanf(" %49[^\n]s", city);
    while((getchar())!='\n');

    printf("Enter the zipcode: ");
    scanf(" %d", &zip);
    while((getchar())!='\n');

    printf("Enter the state: ");
    scanf("%49[^\n]s", state);
    while((getchar())!='\n');

    printf("%d %s, %s, %s %d \n", apt, street, city, state, zip);

    printf("Would you like to enter another address? Enter y or n: ");
    scanf(" %c", &another);
    while((getchar())!='\n');
  }

  return 0;
}
