//Even or Odd

#include <stdio.h>
#include <conio.h>

int main()
{
    int Num = 0;
    
    printf("\n Enter an Integer Numberr = ");
    scanf("%d",&Num);
  
  
    (Num == 0) ? printf ("\n Given Number is Natural "):((Num % 2 == 0) ? printf ("\n Given Number is Even"): printf("\n Given Number is Odd"));
    
   
    printf ("\n Thanks");
  
    getch();
    return 0;
 }