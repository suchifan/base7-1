//
//  main.cpp
//  base7-1
//
//  Created by suchao on 5/2/18.
//  Copyright © 2018 cs.nju. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    double sum = 0;
    for(double i=1; i<101; i++){
        if((int)i % 2 == 0){
            sum = sum - 1/i;
        }else{
            sum = sum + 1/i;
        }
    }
    cout << sum;
    return 0;
}
