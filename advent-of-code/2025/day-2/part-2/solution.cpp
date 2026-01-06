#include <string>
#include <vector>
#include <iostream>
#include <fstream>

using namespace std;

// Now, an ID is invalid if it is made only of some sequence of digits repeated at least twice. So, 12341234 (1234 two times), 123123123 (123 three times), 1212121212 (12 five times), and 1111111 (1 seven times) are all invalid IDs.

vector<string> split(const string &s, const string &delimiter)
{
  vector<string> tokens;
  string str = s;
  size_t pos = 0;
  string token;
  // npos -> a static member constant used to indicate "no position" or an invalid index within a string
  while ((pos = str.find(delimiter)) != string::npos)
  {
    token = str.substr(0, pos);
    tokens.push_back(token);
    str.erase(0, pos + delimiter.length());
  }
  tokens.push_back(str);

  return tokens;
}

int main()
{
  ifstream inputFile("input.txt");

  if (!inputFile.is_open())
  {
    cerr << "Error: Could not open the file." << endl;
    return 1;
  }

  string line;
  vector<string> rangeStr;
  string delimiter = ",";

  while (std::getline(inputFile, line))
  {
    rangeStr = split(line, delimiter);
  }

  vector<pair<long, long>> ranges;
  for (auto &&i : rangeStr)
  {
    string pairDelimiter = "-";
    vector<string> pair = split(i, pairDelimiter);
    ranges.push_back({stol(pair[0]), stol(pair[1])});
  }

  long counter = 0;
  for (auto &&range : ranges) {
    for (long k = range.first; k <= range.second; ++k) {
        string numStr = to_string(k);
        bool isValid = true;
        for (int i = (numStr.length() / 2); i > 0 ; --i) {


        }

        if (isValid) {
            counter += k;
        }
    }
  }

  cout << " answer : " << counter << endl;
  inputFile.close();

  return 0;
}

// divide and conqueror?
