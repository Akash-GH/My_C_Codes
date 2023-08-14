#include <stdio.h>

int main()
{
    int x = 4;
    int y = 9;
    printf("The value of 3 * x - 8 * y is %d \n",3 * x - 8 * y);
    // 3 * 4 - 8 * 9
    // 12 - 72
    // -60
    /* Operator precedence: First priority is given to ' *, / ,% ', Second priority is given to ' +, - ' and Third priority 
    is given to ' = '. Operators of higher priority are evaluated first in absence of parenthesis. This condition does 
    not follow in presence of parenthesis or when parenthesis are used in equation.*/
    printf("The value of 8 * y / 3 * x is %d \n",8 * y / 3 * x);
    // 8 * 9 / 3 * 4
    // 72/3 * 4
    // 24 * 4
    // 96
    /* Operator Associativity: When there are operators of same priority in an equation then to take care of this tie 
    associativity comes into picture. In this operators priority will be form left to right. This means operator starting
    from left side will have first priority then second will move to next operator and at last least priority will given 
    to the one who is at the right side. Note: This only applies to the operators of same priority.
    */
    return 0;
}