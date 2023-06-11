string kthPermutation(int n, int k) {
    // Write your code here.
    vector<int> num;
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
        num.emplace_back(i);
      }
    fact /= n; 
    string ans = "";
    k = k - 1;
    while(true)
    {
        ans += to_string( num[k/fact]);
        num.erase(num.begin()+k/fact);
        if(num.size() == 0)
        {
            break;
        }
        k = k % fact;
        fact = fact / num.size();
    }
    return ans;
}