int arrayUnique( int array[], int size) {
    int sorted = 1;
    
    for ( int unique = 1; unique < size; unique++ ) {
        if ( array[unique-1] != array[unique] ) {
            sorted += 1;
        } else {
            
        }
        
        for ( int current = 0; current < sorted; current++ ) {
            if ( array[unique] != array[current] ) {
                array[sorted] = array[unique];
                current += 1;
            }
        }
    }
    
    return sorted;
}