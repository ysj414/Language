#include<stack>
using namespace std;

stack<int> st;

/*
 * push()
 * pop()
 * top()
 * empty()
 * size()
 */
int main(void)
{
	int a;
	int size;
	st.push(1);
	st.push(2);
	st.push(3); // add data on the top of stack

	st.pop(); // delete data on the top of stack
    a = st.top(); // return data on the top of stack
	size = st.size(); // return size of stack
	if(st.empty())
		cout<<"stack is empty return(true)"<<endl;
	else
		cout<<"stack is not empty return(false)"<<endl;

	return 0;
}

