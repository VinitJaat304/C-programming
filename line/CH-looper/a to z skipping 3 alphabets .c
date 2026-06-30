#include <stdio.h>

main() 
{
    char ch = 'a';
	char count = 0;    
    do {
       
        if (count % 4 != 0)
		{
            ch++;
            count++;
            continue; 
        }
        else
		{
			printf("%c\t", ch);
        	ch++;
        	count++;
		}
        
    } while (ch <= 'z');
}
