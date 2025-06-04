#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int n;

    cin >> n;

    int num;
    
    int result = 0;
    for (size_t i = 0; i < n; i++)
    {
        int temp = 0;
        for (size_t i = 0; i < 3; i++)
        {
            cin >> num;
            temp += num;
        }
        if (temp >= 2)
        {
            result++;
        }
        
    }

    cout << result;
    
}