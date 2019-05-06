void strUpperCase(char str[]) {
    for ( int i = 0, temp = str[0]; temp != '\0'; i++ ) {
        temp = str[i];
        
        if ( temp >= 97 && temp <= 122 ) {
            str[i] -= 32;
        }
    }
}
