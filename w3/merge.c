void merge(int array, int lo, int mid, int hi) {
    int size = hi - lo;
    int buffer[size];
    int i = lo;
    int j = mid;
    int k = 0;
    
    for ( ; i < mid && j < hi; k++ ) {
        if ( array[i] >= array[j] ) {
            buffer[k] = array[i];
            i += 1;
        } else {
            buffer[k] = array[j];
            j += 1;
        }
    }
    
    for ( ; i < mid; i++, k++ ) {
        buffer[k] = array[i];
    }
    
    for ( ; j < mid; j++, k++ ) {
        buffer[k] = array[j];
    }
    
    for ( int k = 0, i = lo; i < hi; k++ ) {
        array[i] = buffer[k];
    }
}

void mergeSort(int array, int lo, int hi) {
    int mid = (lo + hi) / 2;
    
    if ( lo < hi ) {
        mergeSort(array, lo, mid);
        mergeSort(array, mid, hi);
        merge(array, lo, mid, hi);
    }
}