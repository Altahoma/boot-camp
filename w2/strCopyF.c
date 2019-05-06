void strCopy(char target[], char source[]) {
    int size = 0;
    
    for ( ; source[size] != '\0'; size++ ) {
        target[size] = source[size];
    }
    target[size] = '\0';
}
