template <class T>
dynArr<T>::dynArr() {
    data = NULL;
    rows=0;
    columns=0;
}
template <class T>
dynArr<T>::dynArr(int r,int c) {
    data = new int[r*c];
    rows = r;
    columns = c;
}
template <class T>
dynArr<T>::~dynArr() {
    delete[] data;
}
template <class T>
T dynArr<T>::getValue(int row,int column) {
    return *(data+(row-1)*columns+(column-1));
}
template <class T>
void dynArr<T>::setValue(int row,int column, T value) {
    *(data+(row-1)*columns+(column-1)) = value;
}
template <class T>
void dynArr<T>::printAll() {
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=columns;j++){
            cout << getValue(i,j) << " ";
        }
        cout << endl;
    }
}
