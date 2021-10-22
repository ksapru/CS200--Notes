L = 0 
R = "upper bound value"




(Refer to the slides in the CS200 presentations)



vector <int> v; 
int main() { 
  int n; 
  cin >> n; 
  
  for (int i = 0; i < n; i++) {
    int t;
    cin >> t;
    v.push_back(t); 
    
   }
  
 int l = 0; 
 int r = n-1;
 
 while (l <= r) {
      int m = l + (r-1)/2;
      if (good(m)) {
        r = m - 1 
       }
       // copy the remaining template
       




      
  
