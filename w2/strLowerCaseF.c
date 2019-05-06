void strLowerCase(char str[]) {
    for ( int i = 0, temp = str[0]; temp != '\0'; i++ ) {
        temp = str[i];
        
        if ( temp >= 65 && temp <= 90 ) {
            str[i] += 32;
        }
    }
}
