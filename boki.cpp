#include <iostream>
#include <math.h> 
using namespace std;
int main()

{

  int a,b,c,m;

   char liczba;
   
   printf( "podaj operator: P -prostokat lub K -kwadrat lub T -trojkat  ");
cin>>liczba;
  switch(liczba)
  {
  case 'P':
  	    printf( "Podaj pierwszy bok = ");
    	scanf( "%d" , &a );
    	printf( "Podaj podaj drugi nok = ");
   		 scanf( "%d" , &b );
       	m=a*b;
        printf("pole prostokata wynosi %d", m);
      break;
  case 'K':
  	    printf( "Podaj bok = ");
    	scanf( "%d" , &a );
       	m=a*a;
        printf("pole kwadratu wynosi %d", m);
      break;
  case 'T':
  	    printf( "Podaj pierwszy bok = ");
    	scanf( "%d" , &a );
    	printf( "Podaj podaj drugi nok = ");
    	scanf( "%d" , &b );
        	m=0.5*a*b;
        printf("pole trojkata wynosi to %d", m);
      break;
  }
  return 0;
}
