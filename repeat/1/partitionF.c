int partition(int array[], int start, int end) {
    int i = start;
    int mid = (start + end) / 2;
    int temp = array[mid];
    int pivot;
    
    array[mid] = array[end];
    array[end] = temp;
    pivot = array[end];
    
    for ( int j = start; j < end; j++ ) {
        if ( array[j] <= pivot ) {
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            i += 1;
        }
    }
    temp = array[i];
    array[i] = array[end];
    array[end] = temp;
    
    return i;
}
