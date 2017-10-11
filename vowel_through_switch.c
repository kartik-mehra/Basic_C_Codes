#include<stdio.h>
main()
{
char a;
printf("enter any word\n");
scanf("%c",&a);

switch(a)
{
     case 'A':
	 printf("%c is a vowel ",a);
	 break;
	 case  'E':
     printf("%c is a vowel ",a);
     break;
     case  'I':
     printf("%c is a vowel ",a);
     break;
     case 'O':
     printf("%c is a vowel ",a);
     break;

     case 'U':
     printf("%c is a vowel ",a);
     break;
     case 'a':
     printf("%c is a vowel ",a);
     break;
     case 'e':
     printf("%c is a vowel ",a);
     break;
     case 'i':
     printf("%c is a vowel ",a);
     break;
     case 'o':
     printf("%c is a vowel ",a);
     break;
     case 'u':
     printf("%c is a vowel ",a);
     break;


     default:
     printf("word is not a vowel");
}
}
