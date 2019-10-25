#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	/*int a[]={5,-1,0,4,6,2};
	int k=3,ms=0,ws=0,i;
	deque<int> dq(k);
	priority_queue<int> pq;
	for(i=0;i<k;i++)
	{
		while((!dq.empty())&&a[i]>=a[dq.back()])
		dq.pop_back();
		dq.push_back(i);
	}
	for(;i<6;i++)
	{
		cout<<a[dq.front()]<<" ";
		pq.push(dq.front());
		
		while((!dq.empty())&&dq.front()<=(i-k))
		dq.pop_front();
		
		while((!dq.empty())&&a[i]>=a[dq.back()])
		dq.pop_back();
		
		dq.push_back(i);
		
	}
	cout<<a[dq.front()]<<" ";
	pq.push(dq.front());
	//max of all subarrays max
	cout<<"        "a[pq.top()];*/
	
	
	//with vector  
	vector<int> v,v1;
	v.push_back(5);
	v.push_back(3);
	v.push_back(-1);
	v.push_back(4);
	v.push_back(6);
	v.push_back(7);
	vector<int>::iterator itr;
	
	int x=*max_element(v.begin(),(v.begin()+2));
	cout<<x<<" ";
	for(itr=v.begin()+1;itr<v.end()-2;itr++)
	{
		//v.erase(v.begin());
		//cout<<*itr<<" "<<*(itr+2)<<endl;
		int x=*max_element(itr,(itr+3));
	    cout<<x<<" ";
		
	}
	
	
}
