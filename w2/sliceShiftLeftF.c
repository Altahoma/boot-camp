void sliceShiftLeft(int array[], int start, int end) {
    if ( end > start ) {
        int temp = array[start];
        
        for ( int i = start; i < end; i++ ) {
            array[i] = array[i+1];
        }
        array[end] = temp;
    }
}
