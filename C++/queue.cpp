#include<iostream>
#include<queue>
using namespace std;

/*
 * push()
 * pop()
 * front()
 * back()
 * size()
 * empty()
 *
 * Ref: https://twpower.github.io/76-how-to-use-queue-in-cpp
 */

int main(void)
{
	queue<int> q;

	int front_value;
	int back_value;
	int size;

	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);

	cout<<"queue in data [1,2,3,4]"<<endl;

	front_value = q.front();
	back_value = q.back();
	cout<<"queue front value :"<<front_value<<endl;
	cout<<"queue back value :"<<back_value<<endl;
	cout<<"delete q element:"<<q.front()<<endl;
	q.pop();
	cout<<"size of queue:"<<q.size()<<endl;
	if(q.empty())
		cout<<"queue is empty"<<endl;
	else
		cout<<"queue is not empty"<<endl;


	return 0;
}
