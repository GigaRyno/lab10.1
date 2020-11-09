/**
* @file main.cpp
* @brief  Week 10, C++ Review and Warmup from CSI140
*
* @author Ryan LaVigne
* @assignment Lecture 10.1
* @date 11/2/2020
* @credits
* lecture 10.1 videos
*/

#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <util.h>

using namespace std;

int main()
{
    vector<string> strVec = {"This", "was", "Made", "by", "Ryan LaVigne"};
    cout << "Dumping of vector strings: ";
    printVector(strVec);

    cout << "\nClue: Setting srand in main" << endl;
    srand(time(NULL));

    cout << "Random Elements Called" << endl;
    cout << randomElement(strVec) << endl;
    cout << endl;


    vector<int> intVec = {69, 23, 72, 12, 9};
    cout << "Printing Vector: ";
    printVector(intVec);
    cout << "\nSum: " << sum(intVec) << endl;
    cout << "Avg: " << avg(intVec) << endl;
    cout << "Lowest: " << lowest(intVec) << endl;

    string multiWordString = "A little bird with a yellow bill";
    cout << "Calling camelCase " << multiWordString << endl;
    CamelCase(multiWordString);
    cout << "strMessage after camelCase: " << multiWordString << endl;

    return EXIT_SUCCESS;
}