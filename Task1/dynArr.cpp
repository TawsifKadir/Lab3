template <class T>
dynArr<T>::dynArr() {
    data = NULL;
    size = 0;
}
template <class T>
dynArr<T>::dynArr(int a) {
    data = new int[a];
    size = a;
}
template <class T>
dynArr<T>::~dynArr() {
    delete[] data;
}
template <class T>
T dynArr<T>::getValue(int index) {
    return data[index];
}
template <class T>
void dynArr<T>::setValue(int index, T value) {
    data[index] = value;
}
template <class T>
void dynArr<T>::printAll() {
    for(int i=0;i<size;i++){
        cout << getValue(i) << endl;
    }
}