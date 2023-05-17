#include<iostream>
#include<map>

using namespace std;

/*
 * insert()
 * find()
 * erase()
 */
//Ref: https://life-with-coding.tistory.com/305
int main(void)
{
	map<int, string> m; // int type key, string value map
	
	m.insert(make_pair(2,"a"));
	m.insert(make_pair(1,"b"));
	m.insert(make_pair(3,"c"));
	m.insert(make_pair(4,"d"));
	m.insert(make_pair(5,"e"));
	m.insert({6,"Cam"});

	if(m.find(1) != m.end()){
		cout<<"value[b] find"<<endl;
	}
	else{
		cout<<"value[b] do not find"<<endl;
	}

	m.erase(5);
	map<int, string>::iterator iter;

	for(iter = m.begin(); iter != m.end(); iter++){
		cout<<"["<<iter->first<<","<<iter->second<<"]"<<" ";
	}



	return 0;
}
