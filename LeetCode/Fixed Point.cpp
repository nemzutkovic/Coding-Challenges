int fixedPoint(vector<int>& A) {
    int smallestindex = A.size() - 1;
    int index = 0;
    bool exists = false;
    
    for (auto i = A.begin(); i != A.end(); i++){
        if (*i == index && A.at(*i) < smallestindex){
            smallestindex = *i;
            exists = true;
        }
        index++;
    }
    
    if (exists) return smallestindex;
    else return -1;
}