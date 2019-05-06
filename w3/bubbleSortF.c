void bubbleSort(int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        for ( int j = 0; j < size; j++ ) {
            int min = array[j];
            int next = j + 1;
            
            if ( min > array[next] ) {
                array[j] = array[next];
                array[next] = min;
            }
        }
    }
}
