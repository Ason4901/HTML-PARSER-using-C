#include <stdio.h>
#include <string.h>

void parser(char * string)
{
    int in=0; 
    int index = 0;
    for (int i = 0; i < strlen(string); i++){
        if(string[i] == '<'){
            in = 1;
            continue;
        }
        else if(string[i]=='>')
        {
            in = 0;
            continue;
        }
        if(in==0){
            string[index] = string[i];
            index ++;
        }
    }
    string[index] = '\0';

    while(string[0] ==' '){

        for (int i = 0; i < strlen(string); i++)
        {

            string[i] = string[i+1];
        }
    }

    while(string[strlen(string) - 1] == ' ')
    {
        string[strlen(string) - 1] = '\0';

    }


}

int main()
{
    char string[1000];
    printf("Enter the HTML Codes \n");
    gets(string);
    parser(string);
    printf("The parsed string is \n %s", string);
    return 0;
}