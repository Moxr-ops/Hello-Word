#include <stdio.h>
#include <string>
using namespace std;

void FindNumber(int num) 
{
    int sum = 0;
    string factors = "";
    
    for(int i = 1; i < num; i++) 
    {
        if(num % i == 0) 
        {
            sum += i;
            if(factors.empty()) 
            {
                factors = to_string(i);
            } 
            else 
            {
                factors += " " + to_string(i);
            }
        }
    }
    
    if(sum == num) 
    {
        printf("%d: %s\n", num, factors.c_str());
    }
}

int main() 
{
    for(int i = 1; i <= 1000; i++) 
    {
        FindNumber(i);
    }
    
    return 0;
}