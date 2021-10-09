
class Vector
{
private:

    int m_capacity;
    int m_size;
    int* m_buffer;

public:

    Vector();
    int at(int);
    void push_back(int);
    bool empty_vector();
    void insert(int,int);
    void erase(int);
    void resize(int);
    void clear();
    int size();
    int capacity();
    int* data();
    void shrink_to_fit();
    ~Vector();
    
};

