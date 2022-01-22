// Author: Md. Hasnain Ali
/*
 * This can sort in accending order according to the roll of RU CSE and also maintain the * sessions
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream inFile;
    ofstream outFile;

    inFile.open("input.txt");
    outFile.open("output.txt");

    int id;
    vector<pair<int, int>> ids1;
    vector<pair<int, int>> ids2;

    while (inFile >> id)
    {
        int temp = id / 100000000;
        if (temp == 20)
            ids1.push_back({id % 100, id});
        else
            ids2.push_back({id % 100, id});
    }

    sort(ids1.begin(), ids1.end());
    sort(ids2.begin(), ids2.end());

    int size1 = ids1.size();
    int size2 = ids2.size();

    for (int i = 0; i < size1; i++)
    {
        outFile << ids1[i].second << endl;
    }
    for (int i = 0; i < size2; i++)
    {
        outFile << ids2[i].second << endl;
    }

    return 0;
}