void insertSort(int array[], int size) {
    for ( int i = 1; i < size; i++ ) {
        for ( int j = i, prev = i - 1; j > 0 && array[j] < array[prev]; j--, prev-- ) {
            int temp = array[j];
            
            array[j] = array[prev];
            array[prev] = temp;
        }
    }
}

void insertSort(int array[], int size) {
    for ( int i = 1; i < size; i++ ) {
        int j = i;
        int temp = array[i];
        
        for ( int prev = j - 1; j > 0 && temp < array[prev]; j--, prev-- ) {
            array[j] = array[prev];
        }
        array[j] = temp;
    }
}
