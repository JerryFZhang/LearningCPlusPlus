//
//  1-8-CommentWithPrint.cpp
//  
//
//  Created by Jerry Zhang on 2016-09-29.
//
//

#include "1-8-CommentWithPrint.hpp"
#include <iostream>
int main(){
    
    
    std::cout<<"/*";
    std::cout<<"*/";
    //Answer: These two executed properly
    
    //std::cout<</* "*/" */;
    //Answer: This will not execute properly.
    std::cout<</* "\*\/" */;
    
    std::cout<<"HW"<<std::endl;
    
    return 0;
}
