int heightChecker(vector<int>& heights) {
    vector<int> sortedvector = heights;
    sort(sortedvector.begin(), sortedvector.end());
    int count = 0;
    auto j = sortedvector.begin();
    
    for (auto i = heights.begin(); i != heights.end(); i++){
        if (*i != *j) count++;
        j++;
    }
    
    return count;
}