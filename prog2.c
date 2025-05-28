// QUE.2 FREQUENCY COUNTER
// This program counts the frequency of each character in a given string.

#include<stdio.h>

int main()
{
    char str[20];

    printf("Enter a string: ");
    gets(str);

    for(int i =0;str[i]!='\0';i++)
    {
        int count = 0;
        int repeat= 0;
        char repeated_ch = str[i];
        
        for(int j = 0; str[j] != '\0'; j++)
        {
            

            if(str[i] == str[j])
            {
                count++;
            }
            if(repeated_ch== str[j] && i > j)
            {
                repeat = 1;
                break;
            }
        }
        
        if(repeat==0)
        
        {
           printf("%c => %d\n",str[i],count); 
        }
        
        

        
        
    }
    return 0;
   
}



