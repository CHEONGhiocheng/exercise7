//
//  main.cpp
//  exercise7
//
//  Created by jane cheong  on 12/11/2022.
//

#include <iostream>
#include "odd_iterator.h"

odd_iterator::odd_iterator(int x){
    m_data[x]=1;
};

odd_iterator::~odd_iterator(){};

odd_iterator::odd_iterator(const odd_iterator& s){
    for (int i=0;i<size;i++){
        m_data[i] = s.m_data[i];
        if (m_data[i] % 2 == 0){
            std::cout <<"The iterator is wrong" <<std::endl;
        }
    }
};//copy

odd_iterator odd_iterator::operator*() const {
    return *m_data;

}

odd_iterator& odd_iterator::operator=(const odd_iterator &rhs){
    
    return *this;
};

odd_iterator& odd_iterator::operator++(){
    for(int i =1; i <size;i++){
        if(m_data[i] % 2 != 0){
            m_data[i]++;
            std::cout << ++m_data[i]<<std::endl;
        }
    }
    return *this;
};

odd_iterator odd_iterator::operator++(int)
{
    odd_iterator my_data = *this;
    ++(*this);
    return my_data;
    
}
 bool operator== (const odd_iterator& a, const odd_iterator& b)
{
    return a.m_data == b.m_data;
    
};
 bool operator!= (const odd_iterator& a, const odd_iterator& b)
{
    return a.m_data != b.m_data;
    
};

int main(int argc, const char * argv[]) {
    odd_iterator p1;
    p1.operator++();
    p1.operator++();
    p1.operator++();
    p1.operator++();
    p1.operator++();
    p1.operator++();
    p1.operator++();
    p1.operator++();
    p1.operator++();
    p1.operator++();
    p1.operator++();
    p1.operator++();
    p1.operator++();
    p1.operator++();
    p1.operator++();
    p1.operator++();
    p1.operator++();
    p1.operator++();
    p1.operator++();
    p1.operator++();
    p1.operator++();
    p1.operator++();
    
    
    
    return 0;
}
