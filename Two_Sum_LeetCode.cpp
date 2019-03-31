bool compare(pair<int, int> a, pair<int, int> b) {
    return a.first < b.first;
}

pair<int, int> twoSum(vector<int> &nums, int target) {
    vector<pair<int, int>> myvect;
    pair<int, int> returnPair;
    vector<int> :: iterator it;
    pair<int, int> tmpPair;
    int counter = 0;
    for (it = nums.begin(); it != nums.end(); it++) {
        tmpPair.first = *it;
        tmpPair.second = counter++;
        myvect.push_back(tmpPair);
    }
    sort(myvect.begin(), myvect.end(), compare);
    int start = 0;
    int end = nums.size() - 1;
    while(start < end) {
        int start_num = myvect[start].first;
        int end_num = myvect[end].first;
        if(start_num + end_num == target) {
            returnPair.first = myvect[start].second;
            returnPair.second = myvect[end].second;
            break;
        }
        else if(start_num + end_num > target) {
            end--;
        }
        else {
            start++;
        }
    }
    //cout << returnPair.first << " " << returnPair.second << endl;
    return returnPair;
}
int main() {
    vector<int> inp;
    inp.push_back(2);
    inp.push_back(7);
    inp.push_back(11);
    inp.push_back(15);
    pair<int, int> result = twoSum(inp, 26);
    cout << result.first << " " << result.second << endl;
    return 0;
}
