template <class T>
class dynArr
{
private:
    int *data;
    int size;
public:
    dynArr();
    dynArr(int a);
    ~dynArr();
    void setValue(int index,T value);
    T getValue(int index);
    void printAll();
};