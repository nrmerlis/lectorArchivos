#include<stdio.h>
#include <getnum.h>
#include <stdlib.h>
#include <string.h>

int main (void){


fileRead("testFile.txt");

}

void fileRead (char * path)
{

FILE * file;

char configValues[100][100];

/*configValues = malloc(100);
*configValues = malloc(100);*/

file = fopen(path,"r"); /*Le asigno al puntero file la ruta del archivo que abro con la funcion fopens*/
int i=0;
    if (file == NULL){

        printf("\nError de apertura del archivo. \n\n");
    }else{
    while (feof(file) == 0)
        {
                fgets(configValues[i],100,file);

                ++i;
        }


         strcpy(configValues[i], "END");
       //char *eq=strrchr(configValues[i-1],'=');



}
}
// char *eq=strrchr(configValues[i],'=');
void trimArrayValues(char **configValues){
int i=0;
struct fileData {
        char *name;
        int *value;
        };

struct fileData data[10];
char *row;
char *name;
while (strcmp(configValues[i],"END")){

    row=strrchr(configValues[i],'='); //Puntero a '=' de cada linea

    int nameLength=0;

    (data+i)->value = row+1; //Guardo el valor de cada linea desde el =


    nameLength = (strlen(configValues[i])-1) - (strlen(row)-1);

    name = malloc(nameLength);

    memmove(name,configValues[i],nameLength);

    name[nameLength]='\0';

   (data+i)->name = name;

    free(name);

    ++i;

}
}


