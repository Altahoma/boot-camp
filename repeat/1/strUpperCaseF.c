void strUpperCase(char str[]) {
    for ( int i = 0, temp = str[i]; temp != 0; i++ ) {
        if ( temp > 96 && temp < 123 ) {
            temp -= 32;
        }
        str[i] = temp;
        temp = str[i+1];
    }
}
