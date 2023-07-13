#include <stdio.h>
#include <string.h>

int main()
{
    //6)
     int t,z,i,x,y,count=0;
    int j=0;
    char a;
    char str1[50];
    printf("Enter the string");
    gets(str1);
    x=strlen(str1);
    char word[50];
    printf("Enter the string to be replaced : \n");
    gets(word);
    y=strlen(word);
    char str2[50];
    printf("Enter the new string : ");
    gets(str2);
    z=strlen(str2);
    int o;
    char replaced[100];
    int r,v=0;
    for(i=0;i<x;i++)
    {
        
        if(str1[i]==word[j])
        {
           if(j< y-1)
           {
               j++;
           }
           else
            {
            	for(r=0;str2[r];r++)
            	{
            		replaced[v]=str2[r];
            		v++;
				}
            	
            }
     }
        else
        {
        	replaced[v]=str1[i];
           	v++;
        	
            j=0;
        }
    }
  int u=0;  
   for(u=0;replaced[u];u++)
   {
   	printf("%c",replaced[u]);
   }
   
    

    return 0;
}
