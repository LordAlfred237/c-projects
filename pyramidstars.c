#include <stdio.h>
// global varaible
int MaxNoOfStars, NoOfStars, NoOfSpaces;
void initialise()
{
    MaxNoOfStars = 20;
    NoOfSpaces = (MaxNoOfStars - 1) / 2;
    NoOfStars = 1;
}
// function to print space
void OutputSpace(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf(" ");
    }
    
}
// func to print stars
    void OutputStars(int n){
        for (int i = 1; i <= n; i++)
    {
        printf("*");
    }
    printf("\n");
    }

 // now we need to adjust our global varaible
    void Adjust()
    {
        NoOfStars+=2;
        NoOfSpaces--;
    }

    // Adjust to decrease func
    void AdjustOdecrease()
    {
        NoOfStars -= 2;
        NoOfSpaces++;
    }
int main()
{
    // initialise varaible
    initialise();
    // display the first part of code
    do
    {
        OutputSpace(NoOfSpaces);
        OutputStars(NoOfStars);
        Adjust();
    } while (NoOfStars <= MaxNoOfStars);
    AdjustOdecrease();
    while (NoOfStars != 1)
    {
        AdjustOdecrease();
        OutputSpace(NoOfSpaces);
        OutputStars(NoOfStars);
    }

    return 0;
}
