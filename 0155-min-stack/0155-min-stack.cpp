class MinStack {
public:
    stack<long long> st;
    stack<long long> min_st;

    MinStack() {
    }

    void push(int value) {
        st.push(value);

        if (min_st.empty() || value <= min_st.top()) {
            min_st.push(value);
        }
    }

    void pop() {
        if (st.top() == min_st.top()) {
            min_st.pop();
        }
        st.pop();
    }

    int top() {
        return st.top();
    }

    int getMin() {
        return min_st.top();
    }
};