#include <fstream>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <fstream>

using namespace std;

int main(){
    ifstream inputFile("input.txt");

    if (!inputFile.is_open()) {
        cerr << "Error: Could not open the file." << endl;
        return 1;
    }

}
