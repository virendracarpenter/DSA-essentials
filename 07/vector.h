
template<typename T>
class Vector{
  T* arr;
  int csize;
  int msize;

public:
  Vector(){
    csize = 0;
    msize = 1;
    arr = new T[msize];
    }
    void push_back(T data){
      if(csize==msize){
        T* oldArr = arr;
        msize = 2*msize;
        arr = new T[msize];

        for(int count = 0; count <  csize; count++){
          arr[count] = oldArr[count];
        }
        delete [] oldArr;
      }
      arr[csize] = data;
      csize++;
    }
    void pop_back(){
      if(csize>=0)
        csize--;
    }
    bool isEmpty() const{
      return csize==0;
    }

    // Front, Back At(i), []
    T front() const{
      return arr[0];
    }
    T back(){
      return arr[csize-1];
    }
    T at(int i) const{
      return arr[i];
    }
    int size() const{
      return csize;
    }
    int capacity() const{
      return msize;
    }
    T operator[](const int i) const{
      return arr[i];
    }

 };

