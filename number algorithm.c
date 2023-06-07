#include <stdio.h>

int main()  {

int number1, number2;
printf("Type 2 numbers and i will tell you if one those two are bigger each other: ");
scanf("%d" ,&number1);
printf("Type the 2nd number: ");
scanf("%d",&number2);

if (number1 > number2) {
printf ("%d is bigger", number1);
}

else if (number1 < number2) {
    printf ("%d is bigger", number2);
    
}

else if (number1 == number2) {
printf ("Hey ! Both are equal !", number1 && number2);
}

else {
printf("You either typed nothing or just something bad happened.");
}

}