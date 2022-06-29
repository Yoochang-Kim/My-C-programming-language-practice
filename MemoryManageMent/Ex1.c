#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char name[100];
    char *description;

    strcpy(name,"Yoochnag Kim");

    /*Allocate memory dynamically*/
    description = calloc(70,sizeof(char));
    
    if(description == NULL){
        fprintf(stderr,"Error: Failed to allocate memory for description");
    }else
    {
        strcpy(description,"Yoochang is IT student.");
    }

    description = realloc(description,100 * sizeof(char));

    if(description==NULL){
        fprintf(stderr,"Error:Failed to allocate memory for description");
    }else
    {
        strcat(description, "He loves ice chocolate with icecream on the top!");
    }
    
    printf("name = %s\n",name);
    printf("description = %s\n",description);
    free(description);

    return 0;
}