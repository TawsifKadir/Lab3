int main() {
    // Write C++ code here
    int rows,columns;
    cout << "Enter number of rows:";
    cin >> rows;
    cout << "Enter number of columns:";
    cin >> columns;
    dynArr<int> arr1(rows,columns);int value;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=columns;j++){
            cin >> value;
            arr1.setValue(i,j,value);
        }
    }
    arr1.printAll();
    return 0;
}
