// -*- coding: utf-8 -*-
// Last-Updated : <2014/07/02 19:11:21 by samui>

#include <iostream>
#include <cstdio>


  
template<typename... ARGV>
class huga;
  
template<>
class huga<>{};

template<typename T,typename... ARGV>
class huga<T,ARGV...>{
public:
  T container;
  huga<ARGV...> next;
  huga(T s,const ARGV... argv):next(argv...){
    container = s;
    std::cout<<s<<std::endl;
  }
};

int main(int argc, char **argv){
  huga<int,std::string,std::string,float> x(100,"aiueo","kakikukeko",123.456l);
  
  return 0;
}
