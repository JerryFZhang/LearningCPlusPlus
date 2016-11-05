//
//  main.cpp
//  PointerTesting
//
//  Created by Jerry Zhang on 2016-11-05.
//  Copyright © 2016 Jerry Zhang. All rights reserved.
//

#include <iostream>

int main() {

    int i = 24455;
    
    // Prints the value stored in the int variable (int)
    std::cout<<"1 - "<< i << std::endl;
    // Prints the address of the int variable (int)
    std::cout<<"2 - "<< &i << std::endl;
    std::cout<<"3 - "<< *&i << std::endl;
    std::cout<< "----------------------" << std::endl;
    
    
    int* j = &i;
    std::cout<<"1 - "<< j << std::endl;
    std::cout<<"2 - "<< &j << std::endl;
    std::cout<<"3 - "<< *j << std::endl;
    std::cout<< "----------------------" << std::endl;
    
    int k[4] = {101,1001,10001,100001};
    std::cout<<"1 - "<< k << std::endl;
    std::cout<<"2 - "<< *k << std::endl;
    std::cout<<"3 - "<< &k << std::endl;
    std::cout<<"4 - "<< *&k << std::endl;
    std::cout<<"5 - "<< **&k << std::endl;
    std::cout<< "----------------------" << std::endl;
    
    std::cout<<"1 - "<< k[0] << std::endl;
    std::cout<<"2 - "<< &k[0] << std::endl;
    std::cout<<"3 - "<< *&k[0] << std::endl;
    std::cout<< "----------------------" << std::endl;
    
    std::cout<<"1 - "<< k[1] << std::endl;

}
