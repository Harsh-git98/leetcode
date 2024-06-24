void insert(stack<int> &st, int ele) {
    if (st.empty() || st.top() < ele) {
        st.push(ele);
        return;
    }

    int topElement = st.top();
    st.pop();
    insert(st, ele);
    st.push(topElement);
}

// Function to sort the stack using recursion
void sortStack(stack<int> &st) {
    if (st.size() == 1) {
        return;
    }

    int topElement = st.top();
    st.pop();
    sortStack(st);
    insert(st, topElement);
}
