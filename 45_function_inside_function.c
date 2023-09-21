#include <stdio.h>
void GoodMorning();
void GoodAfternoon();
void GoodNight();

int main()
{
    // By using a single function multiple functions can be called.
    GoodMorning(); 
    return 0;
}
void GoodMorning(){
    printf("Good Morning! Akash\n");
    GoodAfternoon();
}
void GoodAfternoon(){
    printf("Good Afternoon! Akash\n");
    GoodNight();
}
void GoodNight(){
    printf("Good Night! Akash\n");
}
