/**
* @file util.cpp
* @brief  Week 10, C++ Review and Warmup from CSI140
*
* @author Ryan LaVigne
* @assignment Lecture 10.1
* @date 11/2/2020
* @credits
* lecture 10.1 videos
*/
#include <util.h>

void printVector(vector<int> &arr)
{
    cout << arr[0];
    for(int i = 1; i < arr.size(); i++)
    {
        cout << ", " << arr[i];
    }
}

void printVector(vector<string> &arr)
{
    cout << arr[0];
    for(int i = 1; i < arr.size(); i++)
    {
        cout << ", " << arr[i];
    }
}

int sum(vector<int> &arr)
{
    int sum = 0;
    for(int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
    }
    return sum;
}

int avg(vector<int> &arr)
{
    return sum(arr) / arr.size();
}

int lowest(vector<int> &arr)
{
    int lowest = arr[0];
    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] < lowest)
        {
            lowest = arr[i];
        }
    }
    return lowest;
}

string &randomElement(vector<string> &arr)
{
    return arr[rand() % arr.size()];
}

void CamelCase(string &str)
{
    for(int i = 0; i <= str.size(); i++)
    {
        if(str[i] == 32)//ascii text code for space
        { 
            str.erase(i, 1); //gets rid of space
            if(str[i] >= 97 && str[i] <= 122)//ascii text code for a-z
            {
                str[i] = str[i] - 32; //Changes to upper case letter
            }
        }
        else if(str[i] >= 65 && str[i] <= 90) //ascii text code for A-Z
        {
            str[i] = str[i] + 32; //changes it to lowercase
        }
    }
}
