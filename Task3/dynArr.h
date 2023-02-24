template <class T>
class dynArr
{
private:
    T *data;
    int rows,columns;
public:
    dynArr();
    dynArr(int r,int c);
    ~dynArr();
    void setValue(int row,int column,T value);
    T getValue(int row,int column);
    void printAll();
};
