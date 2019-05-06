void strRot13(char str[]) {
    for ( int i = 0, temp = str[0]; temp != '\0'; i++ ) {
        temp = str[i];
        
        if ( temp >= 65 && temp <= 77 ) {
            str[i] += 13;
        } else if ( temp >= 78 && temp <= 90 ) {
            str[i] -= 13;
        } else if ( temp >= 97 && temp <= 109 ) {
            str[i] += 13;
        } else if ( temp >= 110 && temp <= 122 ) {
            str[i] -= 13;
        }
    }
}
