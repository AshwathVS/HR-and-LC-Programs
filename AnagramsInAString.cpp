#include <iostream>
#include <string>
#include <map>
#include <iterator>

using namespace std;

int main()
{
    string inputString, anagramString;
    cout << "Enter string: " << endl;
    cin >> inputString;
    cout << "Enter anagram: " << endl;
    cin >> anagramString;
    map<char, int> anagramMap;
    map<char, int> iteratorMap;
    map<char, int>::iterator it;
    int zero_count = 0;
    int anagramCount = 0;
    for (int i = 0; i < anagramString.length(); i++)
    {
        it = anagramMap.find(anagramString[i]);
        if (it != anagramMap.end())
        {
            it->second++;
        }
        else
        {
            anagramMap.insert(pair<char, int>(anagramString[i], 1));
        }
    }
    int left_index = 0;
    bool isMapAltered = false;
    iteratorMap.insert(anagramMap.begin(), anagramMap.end());
    for (int i = 0; i < inputString.length(); i++)
    {
        if (iteratorMap.find(inputString[i]) != iteratorMap.end())
        {
            isMapAltered = true;
            int charCount = iteratorMap[inputString[i]];
            if (charCount == 0)
            {
                while(inputString[left_index] != inputString[i]) {
                    if(!iteratorMap[inputString[left_index]]) {
                        zero_count--;
                    }
                    iteratorMap[inputString[left_index]]++;
                    left_index++;
                }
                zero_count--;
                left_index++;
                charCount++;
            }
            charCount--;
            if (charCount == 0)
            {
                zero_count++;
            }
            iteratorMap[inputString[i]] = charCount;
        }
        else
        {
            left_index = i + 1;
            if (isMapAltered)
            {
                iteratorMap.clear();
                iteratorMap.insert(anagramMap.begin(), anagramMap.end());
                isMapAltered = false;
                zero_count = 0;
            }
        }
        if (zero_count == anagramMap.size() && (i - left_index) == anagramString.length() - 1)
        {
            anagramCount++;
        }
        // cout << "Index: " << i << endl;
        // cout << "Zero Count: " << zero_count << endl;
        // cout << "Left Index: " << left_index << endl << endl;
    }
    anagramMap.clear();
    iteratorMap.clear();
    cout << "Number of Anagrams: " << anagramCount << endl;
    return 0;
}
