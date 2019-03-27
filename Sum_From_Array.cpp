//
//  main.cpp
//  PracticeCodes
//
//  Created by Ashwath Satyanarayan on 27/03/19.
//  Copyright © 2019 Ashwath Satyanarayan. All rights reserved.
//

#include <iostream>

using namespace std;

/*
 Given a list of numbers and a number k, return whether any two numbers from the list add up to k.
 For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.
*/

bool isSumPresent(int* inp, int length, int sum) {
    sort(inp, inp + length);
    int start = 0;
    int end = length - 1;
    while(start < end) {
        int start_num = inp[start];
        int end_num = inp[end];
        if(start_num + end_num == sum) {
            return true;
        }
        else if(start_num + end_num < sum) {
            start++;
        }
        else{
            end--;
        }
    }
    return false;
}

int main() {
    int arr[] = {10, 1, 2, 5, 6, 5};
    int size = 6;
    int sum = 17;
    if(isSumPresent(arr, size, sum)) {
        cout << "We can make the sum" << endl;
    }
    else {
        cout << "We can't make the sum" << endl;
    }
    return 0;
}
