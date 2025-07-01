// https://www.hackerrank.com/contests/bank-soal-programming/challenges/pestisida-membawa-bencana

#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int total;
  cin >> total;

  vector<int> listPlants(total);

  for (int i = 0; i < total; i++)
  {
    cin >> listPlants[i];
  }

  int sadDay = 0;

  while (true)
  {
    int index = 1;
    vector<int> listRemove;

    while (index < listPlants.size())
    {
      if (listPlants[index] > listPlants[index - 1])
      {
        listRemove.push_back(index);
      }
      index++;
    }

    if (listRemove.empty())
    {
      break;
    }
    else
    {
      for (int i = listRemove.size() - 1; i >= 0; i--)
      {
        int temp = listRemove[i];
        listPlants.erase(listPlants.begin() + temp);
      }
      listRemove.clear();
      sadDay++;
    }
  }

  cout << sadDay << endl;

  return 0;
}