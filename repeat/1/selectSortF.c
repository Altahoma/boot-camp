void selectSort(int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        for ( int j = i + 1; j < size; j++ ) {
            if ( array[j] < array[i] ) {
                int temp = array[i];
                
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

void selectSort(int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        int min = i;
        
        for ( int j = i + 1; j < size; j++ ) {
            if ( array[j] < array[min] ) {
                min = j;
            }
        }
        
        if ( min != i ) {
            int temp = array[i];
            
            array[i] = array[min];
            array[min] = temp;
        }
    }
}
