// -> Take two vectors even and odd to store the value of nodes at even and odd indexes.
// -> Traverse likedlist again and declare the values first from the odd index vector and continue to and add from even indexes.
// -> Retrun the head of the given linkedlist.

LinkedListNode<int>* oddEvenList(LinkedListNode<int>* head)
{
	// Write your code here.
    vector<int> even;
    vector<int> odd;
    int count = 0;
    LinkedListNode<int> * temp = head;
    while(temp!=NULL){
        if(count%2==0){
            even.push_back(temp->data);
            count++;
        }
        else{
            odd.push_back(temp->data);
            count++;
        }
        temp = temp->next;
    }
    temp = head;
    for(int i=0; i<even.size(); i++){
        temp->data = even[i];
        temp = temp->next;
    }
    for(int i=0; i<odd.size(); i++){
        temp->data = odd[i];
        temp = temp->next;
    }
    return head;
}