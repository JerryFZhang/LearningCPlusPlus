//
//  1-5-SeperatedOperand.cpp
//  
//
//  Created by Jerry Zhang on 2016-09-29.
//
//

#include "1-5-SeperatedOperand.hpp"
#include <iostream>
int main(){
    int v1,v2;
    std::clog<<"Please enter two numbers: "<<std::endl;
    std::cin>>v1>>v2;
    std::cout<<"The product of ";
    std::cout<<v1;
    std::cout<<" and ";
    std::cout<<v2;
    std::cout<<" is : ";
    std::cout<<v1*v2;
    std::cout<<"."<<std::endl;
    return 0;
}
