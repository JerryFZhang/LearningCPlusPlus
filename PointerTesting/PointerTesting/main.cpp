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
    std::cout<< i << std::endl;
    std::cout<< &i << std::endl;
    std::cout<< "----------------------" << std::endl;
    int* j = &i;
    std::cout<< j << std::endl;
    std::cout<< &j << std::endl;
    std::cout<< "----------------------" << std::endl;
    int k[4] = {111,1111,11111,111111};
    std::cout<< k << std::endl;
    std::cout<< &k << std::endl;
    std::cout<< *&k << std::endl;
    std::cout<< **&k << std::endl;
    std::cout<< "----------------------" << std::endl;
    std::cout<< k[0] << std::endl;
    std::cout<< &k[0] << std::endl;
    std::cout<< *&k[0] << std::endl;
    std::cout<< "----------------------" << std::endl;
    std::cout<< k[1] << std::endl;

}
