
vector<int> nextGreaterElements(vector<int> v) {
    stack<int> st;
    vector<int> ans(v.size(), -1);  // Initialize the result vector with -1

    for (int i = v.size() - 1; i >= 0; i--) {
        while (!st.empty() && st.top() <= v[i]) {
            st.pop();
        }
        if (!st.empty()) {
            ans[i] = st.top();
        }
        st.push(v[i]);
    }
    
    return ans;
}
