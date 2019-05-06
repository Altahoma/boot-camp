void sliceShiftRight(int array[], int start, int end) {
    if ( end > start ) {
        int temp = array[end];
        
        for ( int i = end; i > start; i-- ) {
            array[i] = array[i-1];
        }
        array[start] = temp;
    }
}
