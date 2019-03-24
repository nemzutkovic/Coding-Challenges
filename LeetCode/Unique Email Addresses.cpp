int numUniqueEmails(vector<string>& emails) {
  if (emails.empty()) return 0;
  if (emails.size() == 1) return 1;
  
  cout << emails.size() << endl;
  
  set<string> emaillist;
  string temp;
  bool localname;
  bool domain;
  
  for(int i = 0; i < emails.size(); ++i){
      
    localname = true;
    domain = false;
    temp = "";
    
    for (int j = 0; j < emails[i].length(); ++j){
      if (emails[i][j] == '+') localname = false;
      else if (emails[i][j] == '@') domain = true;
      if (localname == true && emails[i][j] != '.') temp += emails[i][j];
      else if (domain == true) temp += emails[i][j];   
    }
    
    if (emaillist.find(temp) == emaillist.end()) { emaillist.insert(temp); }
      
  }
  
  return emaillist.size();
        
}