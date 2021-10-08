Aho Corasick - Linear Search Algorithm 
Trie 

O(m+n+z)
  


void build_suffix_and_output_links(node *root) {
  root -> suffix_link = root;
  
  queue<node*> q;
  for ( auto &it : root -> children) {
    q.push(it.second);
    it.second -> suffix_link = root;
  }
  
  while (!q.empty()) {
    node *curr = q.front();
    q.pop();
    
    for (auto &it : curr -> children) {
      node *temp = curr -> suffix_link;
      char c = it.first;
      
      
      while (temp -> children.count(c) == 0 && temp != root) {
        temp = temp -> suffix_link;
      }
      
      if (temp -> children.count(c)) {
        it.second -> suffix_link = temp -> children[c];
      }
      
      else {
        it.second -> suffix_link = root;
      }
       q.push(it.second)
     }
    
    if (curr -> suffix_link -> pattern_ind >= 0) {
      curr -> output_link = curr -> suffix_link;
    }
    
    else {
      curr -> output_link = curr -> suffix_link -> output_link 
      }
  }
}

void search_for_patterns(node *root, string test, int indices[]) {

  node *parent = root;
    
  for (int i = 0; i < text.length(); i++) {
    char c = text[i];
    if (parent -> children.count(c)) {
      parent = parent -> children[c];
      
      if (parent -> pattern_ind >= 0) {
        
int main() {
  int k;
  cin >> k;
  string text = "I hate coding interviews because I always segfault"
  vector <string> patterns(k);
  for (int i = 0; i < k; i++ ) {
      cin >> patterns[i];
  }
  
  node *root = create node();
  
  build Trie(root, patterns);  // using the Trie function that I have not mentioned here
  
  build suffix_and_output links(root);
  
  
