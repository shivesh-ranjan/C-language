#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <time.h>
void printFileProperties(struct stat stats){
    struct tm dt;
    printf("\nFile access: ");
    if (stats.st_mode & R_OK)
        printf("read ");
    if (stats.st_mode & W_OK)
        printf("write ");
    if (stats.st_mode & X_OK)
        printf("execute");
    printf("\nFile size: %d", stats.st_size);
    dt = *(gmtime(&stats.st_ctime));
    printf("\nCreated on: %d-%d-%d %d:%d:%d", dt.tm_mday, dt.tm_mon, dt.tm_year + 1900, 
                                              dt.tm_hour, dt.tm_min, dt.tm_sec);
    dt = *(gmtime(&stats.st_mtime));
    printf("\nModified on: %d-%d-%d %d:%d:%d", dt.tm_mday, dt.tm_mon, dt.tm_year + 1900, 
                                              dt.tm_hour, dt.tm_min, dt.tm_sec);
}
int main(){
    char path[100];
    struct stat stats;
    printf("Enter source file path: ");
    scanf("%s", path);
    if (stat(path, &stats) == 0){
        printFileProperties(stats);
    }
    else{
        printf("Unable to get file properties.\n");
        printf("Please check whether '%s' file exists.\n", path);
    }
    return 0;
}