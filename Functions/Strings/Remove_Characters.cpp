string removeCharacter(string s, char c){
    string news;
    for(auto i : s) {
      if(i != c) {
        news += i;
      }
    }
    return news; 
}
