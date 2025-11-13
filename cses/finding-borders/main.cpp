#include <bits/stdc++.h>

using namespace std;

int main()
{
  string word;
  cin >> word;

  vector<int> words;
  for (size_t i = 0; i < word.length(); i++)
  {
    if (word.substr(0, i + 1) == word.substr(word.length() - (i + 1)) && word.substr(0, i + 1) != word)
    {
      words.push_back(word.substr(0, i + 1).length());
    }
  }

  sort(words.begin(), words.end());
  for (auto &&i : words)
  {
    cout << i << " ";
  }
}

// Still TLE, i think it use divide and conqueror, cmiiw