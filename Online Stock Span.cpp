#include <bits/stdc++.h>
vector<int> findSpans(vector<int> &price)
{ // Write your code here.
    vector<int> v;
    stack<pair<int, int>> st;
    for (int i = 0; i < price.size(); i++)
    {
        if (st.size() == 0)
        {
            v.emplace_back(-1);
        }
        else if (st.size() > 0 && st.top().first > price[i])
        {
            v.emplace_back(st.top().second);
        }
        else if (st.size() > 0 && st.top().first <= price[i])
        {
            while (st.size() > 0 && st.top().first <= price[i])
            {
                st.pop();
            }
            if (st.size() == 0)
            {
                v.emplace_back(-1);
                v.emplace_back(-1);
            }
            else
            {
                v.emplace_back(st.top().second);
            }
        }
        st.push({price[i], i});
    }
    for (int i = 0; i < v.size(); i++)
    {
        v[i] = i - v[i];
    }
    return v;
}