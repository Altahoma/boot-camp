#include <stdio.h>

#define LENGTH 101

void arrayScan(FILE *in, char array[]) {
    fscanf(in, "%100s", array);
}

int strEqual(char str1[], char str2[]) {
    for ( int i = 0; str1[i] == str2[i]; i++ ) {
        if ( str1[i] == '\0' ) {
            return 1;
        }
    }
    return 0;
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    char str1[LENGTH];
    char str2[LENGTH];
    
    arrayScan(in, str1);
    arrayScan(in, str2);
    fclose(in);
    
    if ( strEqual(str1, str2) == 1 ) {
        fprintf(out, "yes\n");
    } else {
        fprintf(out, "no\n");
    }
    fclose(out);
    
    return 0;
}

    // for ( int i = 0; str1[i] != '\0'; i++) {
    //     fprintf(out, "%c", str1[i]);
    // }
    // fprintf(out, "\n");
    // for ( int i = 0; str2[i] != '\0'; i++) {
    //     fprintf(out, "%c", str2[i]);
    // }

// #include <stdio.h>

// #define LENGTH 101

// void arrayScan(FILE *in, char array[]) {
//     fscanf(in, "%100s", array);
// }

// int strEqual(FILE *out, char str1[], char str2[]) {
//     for ( int i = 0; str1[i] == str2[i]; i++ ) {
//         if ( str1[i] == '\0' ) {
//             fprintf(out, "yes\n");
//             return 0;
//         }
//     }
//     fprintf(out, "no\n");
//     return 0;
// }

// int main() {
//     FILE *in = fopen("task.in", "r");
//     FILE *out = fopen("task.out", "w");
//     char str1[LENGTH];
//     char str2[LENGTH];
    
//     arrayScan(in, str1);
//     arrayScan(in, str2);
//     strEqual(out, str1, str2);
    
//     return 0;
// }
