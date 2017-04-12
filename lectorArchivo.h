#ifndef LECTOR_LECTORARCHIVO_H_
#define LECTOR_LECTORARCHIVO_H_

struct fileData{
        char *name;
        int *value;
        };

typedef struct fileData fileDataType;

int fileRead (char * path,char configValues[100][100]);
void trimArrayValues(char configValues[100][100],fileDataType data[10]);
char* leerConfiguracion(char* path,char configValues[100][100],fileDataType data[10]);



#endif /* LECTOR_LECTORARCHIVO_H_ */
