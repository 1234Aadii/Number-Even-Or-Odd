//Even or Odd

#include <stdio.h>
#include <conio.h>

int main()
{
    int Num = 0;
    
  printf("\n Enter an Integer Number to Check it is whether Even or Odd = ");
  up:
  scanf("%d",&Num);
  
  if(Num == 0)
  {
      printf ("\n Given Number is Natural.\n\n Please Enter other than Zero Integer Number to Check whether it is Even or Odd = ");
      goto up;
  }
  
  (Num % 2 == 0) ? printf ("\n Given Number is Even"): printf("\n Given Number is Odd");
  
  
  printf ("\n Thanks");
  
  getch();
  return 0;
}