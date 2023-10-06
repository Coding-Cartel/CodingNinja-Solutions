#include <bits/stdc++.h> 
using namespace std;
/*********************************************************

    Following is the class structure of the Node class:

    class Node
	{
	public:
	    int data;
	    Node *next;
	    Node *prev;
	    Node(int data)
	    {
	        this->data = data;
	        this->next = NULL;
	        this->prev = NULL;
	    }
	};

************************************************************/

Node* reverseDLLInGroups(Node* head, int k)
{	
    // Write your code here. 
	vector<int> listt;
	vector<int> res;
	Node* ptr = head;
	while(ptr!=NULL){
		listt.push_back(ptr->data);
		ptr = ptr->next;
	}
	int counter = 0;
	int end = k;
	int n = listt.size();
	while(counter < listt.size()){
		vector<int> temp;
		for(int i=counter; i<min(n, end); i++){
			temp.push_back(listt[i]);
		}
		reverse(temp.begin(), temp.end());
		res.insert(res.end(), temp.begin(), temp.end());
		counter+=k;
		end+=k;
	}
	ptr = head;
	for(int i=0; i<res.size(); i++){
		ptr->data = res[i];
		ptr = ptr->next;
	}
	return head;
} 