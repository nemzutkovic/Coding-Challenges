int minDeletionSize(vector<string>& A) {
        
    int index = 0, count = 0;
    
    while (index != A[0].length()){
        bool deleti = false;
        char prev = ' ';
        for (auto it = A.begin(); it != A.end(); it++){
            string word = *it;
            if (prev > word[index]){
                deleti = true;
                break;
            }
            prev = word[index];
        }
        if (deleti == true) count++;
        
        index += 1;
    }
    
    return count;
}