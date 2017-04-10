#include<stdio.h>
#include <getnum.h>
#include <stdlib.h>
#include <string.h>

int main (void){
FILE * file;
char configValues[100][100];


file = fopen("testFile.txt","r"); /*Le asigno al puntero configParameters la ruta del archivo que abro con la funcion fopens*/
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

       /*Voy a guardar todo en structs*/

       i=0;
struct fileData {
        char *name;
        char *value;
        };
struct fileData data[10];
char *row;
char *copia;
while (strcmp(configValues[i],"END")){

    row=strrchr(configValues[i],'=');

    int nameLength=0;



    (data+i)->value = row+1;







     int a = strlen(row)-1;
     int b = strlen(configValues[i])-1;
     int c = b-a;


    copia = malloc(c);

    memmove(copia,configValues[i],c);

    copia[c]='\0';
    (data+i)->name = copia;

    printf("%s\n",(data+i)->name);
    printf("%s\n",(data+i)->value);
    ++i;

    free(copia);

}
    }
}
