//
//  odd_iterator.h
//  exercise7
//
//  Created by jane cheong  on 12/11/2022.
//

#ifndef odd_iterator_h
#define odd_iterator_h
class odd_iterator{
public:
    odd_iterator(int x=0);//default
    ~odd_iterator();
    odd_iterator(const odd_iterator& s);//copy
    // dereference 
    odd_iterator operator*() const;
    odd_iterator& operator=(const odd_iterator &rhs);
    
    // Prefix increment
    odd_iterator& operator++();

    // Postfix increment
    odd_iterator operator++(int);

    friend bool operator== (const odd_iterator& a, const odd_iterator& b);
    friend bool operator!= (const odd_iterator& a, const odd_iterator& b);

private:
    const static int size =10;
    int m_data[size];
    int min_range=1;
    int max_range=10;
};

  // odd_iterator operator->()
  //  {
    //    return *m_data;
        
   // }

  //  odd_iterator& operator=(){
        
        
  //  }


    

/* template <class ForwardIterator, class T>
 void replace (ForwardIterator first, ForwardIterator last,
                 const T& old_value, const T& new_value)
 {
   while (first!=last) {
     // 既可以解引用读取值，又可以给其赋值。
     if (*first == old_value) *first=new_value;
     ++first;
   }
 }   */



#endif /* odd_iterator_h */
