/* Q.1 Which of the folling are valid or invalid?:
i. int a; b = a; 
ii. int v = 3 ^ 3;
iii. char dt = '21 Dec 2020
Ans: i and iii are invalid ; ii is valid.
*/

/* Q.2  What data type will 3.0/8 - 2 return?
Ans : In normal case we will consider that it will return double. But when two choices are given integer or float
then ofcourse answer is float. Basically it wiil give a real number at output.
*/
#include <stdio.h>

int main()
{
    // int a; b = a; // This is invalid
    int a; int b = a;// Valid way of writing
    int v = 3 ^ 3; // Valid
    // char dt = '21 Dec 2020'; // this is invalid
    char dt = '2'; // Valid bcoz character can store only one character, num or symbol.
// Q.3 Write a program to check whether the given number is divisible by 97 of not*/
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    printf("Divisibility Test returns: %d\n", num%97);// returns 0 if given number is divisible by 97 and any other number if not
    
// Q.4 Explain step by step evaluation of  3*x/y - z+k where x=2, y = 3, z = 3, and k = 1
    int x=2, y = 3, z = 3, k = 1;
    int result = 3 * x / y - z + k;
    // 3 * 2 / 3 - 3 + 1
    // 6 / 3 - 3 + 1
    // 2 - 3 + 1
    // -1 + 1
    // 0
    printf("The value of result is %d\n",result);
    return 0;
}
/* Q.5 3.0 + 1 will be:
i. integer
ii. floating point number
iii. character
Ans: ii
*/