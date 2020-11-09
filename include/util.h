/**
* @file util.h
* @brief  Week 10, C++ Review and Warmup from CSI140
*
* @author Ryan LaVigne
* @assignment Lecture 10.1
* @date 11/2/2020
* @credits
* lecture 10.1 videos
*/

#include <iostream>
#include <vector>

using namespace std;

//prints elements in vector
void printVector(vector<int> &arr);

//prints elements in vector
void printVector(vector<string> &arr);

//returns the sum of integers in the vector
int sum(vector<int> &arr);

//returns the avg of intgers in the vector
int avg(vector<int> &arr);

//returns the lowest integer in the vector
int lowest(vector<int> &arr);

//returns reference to random string element in a vector
string &randomElement(vector<string> &arr);

//takes a string and modifies it
void CamelCase(string &str);