template<typename T>
class vector{
    T *arr;
    int cs;
    int ms;
public:
    vector(int max_size=1){
        cs=0;
        ms= max_size;
        arr = new T[ms];
    }
    void push_back(int d){
        if(cs==ms){
            T *oldarr = arr;
            ms=2*ms;
            arr= new T[ms];
            //copy the elements
            for(int i=0;i<cs;i++){
                arr[i] = oldarr[i];
            }
           //delete
           delete [] oldarr;

        }
        arr[cs] = d;
        cs++;
    }
    void pop_back(){
        if(cs>=0){
             cs--;
        }    
    }
    bool isempty(){
        return cs==0;
    }
 //front,back,at(1),size implementation
 int front(){
     return arr[0];
 }
 int back(){
     return arr[cs-1];
 }
 int at(int i){
     return arr[i];
 }
 int size(){
     return cs;
 }
 int capacity(){
     return ms;
 }
};
