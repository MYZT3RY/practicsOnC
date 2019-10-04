#define _DEFAULT_SOURCE
#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>

int main(void){
    struct dirent **namelist;
    int n;
    n = scandir(".", &namelist, NULL, alphasort);
    if (n == -1) {
        perror("scandir");
    }
    else{
        n--;
        int coincidences, errorCheck=0;
        struct stat statbuf;
        while(n>0){
            coincidences=0;
            errorCheck=stat(namelist[n]->d_name,&statbuf);
            if(errorCheck == -1){
                perror("stat");
            }
            else{
                if((statbuf.st_mode & S_IFMT) == S_IFREG){
                    printf("%s ",namelist[n]->d_name);
                    for(char * cur = namelist[n]->d_name; (*cur) && coincidences < 4; cur++){
                        if((*cur >= 'A' && *cur <= 'Z') || (*cur >= 'a' && *cur <= 'z') || *cur == '.' || (*cur >= '1' && *cur <= '9')){
                        }
                        else{
                            coincidences++;
                        }
                    }
                    if(coincidences >= 4){
                        errorCheck = remove(namelist[n]->d_name);
                        if(errorCheck == -1){
                            perror("remove");
                        }
                    }
                    printf("%i\n",coincidences);
                }
            }
            free(namelist[n]);
            n--;
        }
    }
    free(namelist);
}