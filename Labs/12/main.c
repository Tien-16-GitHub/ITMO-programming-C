#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {

    FILE *F1,*F2,*F3;
    
    char *file1_path = argv[1];
    char *file2_path = argv[2]; 
    char *file3_path = argv[3]; 

 
    F1 = fopen(file1_path, "r");
    F2 = fopen(file2_path, "r");
    F3 = fopen(file3_path, "w");

    
    for (char ch = getc(F1); ch != EOF; ch = getc(F1)) {
        fputc(ch, F3);
    }

    for (char ch = getc(F2); ch != EOF; ch = getc(F2)) {
        fputc(ch, F3);
    }

    fclose(F1);
    fclose(F2);
    fclose(F3);
    return 0;
}
