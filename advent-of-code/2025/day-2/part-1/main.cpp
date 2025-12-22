#include <bits/stdc++.h>
#include <string>
#include <vector>

std::vector<std::string> split(const std::string &s, const std::string &delimiter)
{
  std::vector<std::string> tokens;
  std::string str = s;
  size_t pos = 0;
  std::string token;
  while ((pos = str.find(delimiter)) != std::string::npos)
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
  std::ifstream inputFile("input.txt");

  if (!inputFile.is_open())
  {
    std::cerr << "Error: Could not open the file." << std::endl;
    return 1;
  }

  std::string line;
  std::vector<std::string> rangeStr;
  std::string delimiter = ",";

  while (std::getline(inputFile, line))
  {
    rangeStr = split(line, delimiter);
  }

  std::vector<std::pair<long, long>> ranges;
  for (auto &&i : rangeStr)
  {
    std::string pairDelimiter = "-";
    std::vector<std::string> pair = split(i, pairDelimiter);
    ranges.push_back({std::stol(pair[0]), std::stol(pair[1])});
  }

  long counter = 0;
  for (auto &&range : ranges)
  {
    for (long k = range.first; k <= range.second; ++k)
    {
      std::string numberStr = std::to_string(k);
      int mid = numberStr.length() / 2;
      std::string left = numberStr.substr(0, mid);
      std::string right = numberStr.substr(mid, numberStr.length());
      if (left == right)
      {
        std::cout << " same : " << numberStr << std::endl;
        counter += k;
      }
    }
  }

  std::cout << " answer : " << counter << std::endl;
  inputFile.close();

  return 0;
}
