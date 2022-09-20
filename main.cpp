#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <stack>
#include <algorithm>
#include "ArgumentManager.h"

using namespace std;
//FIFO
//Time Complexity:
//SHORTEST PATH and WIDEST
void BFS(int **graph, int source, int n, ofstream &output) //use & to reference output
{
    stack<int> s;
    bool *visited = new bool[n]; //we create a boolean called visited to check if vertices has been visited by using a boolean
    for(int i = 0;i<n;i++)
    {
        visited[i] = false;
    }
    s.push(source);
    int v = 0; //we set vertices = 0
    while(!s.empty()) //use a while loop to continue till s is empty
    {
        v=s.top(); //or s.pop(); inializing vertices to equal current value in s
        s.pop();
        if(!visited[v]) //we have to check if vertices is visited or else it will repeat itself
        {
            output << v << " "; //if not visited we output the vertices 
            visited[v] = true; //set to true that we've visited
        }
        for(int i = 0;i<n;i++)
        {
            if(graph[v][i]==1 && !visited[i]) //i is edges
            {
                s.push(i); //push pos into s
            }
        }
    }    
output << endl;
delete [] visited;
}

int main(int argc, char* argv[])
{
    ArgumentManager am(argc,argv);
    string infilename = am.get("input");
    string outfilename = am.get("output");
    ifstream input(infilename);
    ofstream output(outfilename);

    int n = 0;
    int source = 0;
    input >> n; //get n
    input >> source; //get source

    //create the graph
    int **graph = new int*[n];
    for(int i = 0;i<n;i++)
    {
        graph[i] = new int[n];
    }

    //set all vertices
    for(int i = 0;i<n;i++)
    {
        for(int j =0;j<n;j++)
        {
            graph[i][j] = 0;
        }
    }

    string str;
    int pos = 0,x=0,y=0;

    while(getline(input,str))
    { //make sure string is not empty
        if(str.empty() || str.size()<=1)
        {
            continue;
        }
        pos = str.find(' '); //find space of pos
        x = stoi(str.substr(0,pos)); //parse string
        y = stoi(str.substr(pos+1,str.length()-pos-1)); //parse string
        graph[x][y] =1; //set graph[x][y] = 1 to indicate there is a connection
    }

BFS(graph,source,n,output);

for(int i = 0;i<n;i++) //we do this to deallocate memory
{
    delete []graph[i];
}
delete []graph;

return 0;
}






struct Node
{
    int val;
    node *next;
};
class LinkedList
{
    LinkedList() == nullptr;
}


int CountNode(node *root,int low,int high)
{
    if(!root)return;
    if(root->value<=high && root->value>-low)
    {
        return 1+CountNode(root->right,low,high)
        return CountNode(root-left,low,high)
    }
    if(root->value<low)
    {
        return CountNode(root->right,low,high)
    }
    else{
        return CountNode(root->left,low,high)
    }
}

void PrintLeafs(node *root)
{
    if(!root) return;

    if(!root->right && !root->left)
    {
        cout << root->value << " ";
        return;
    }
    if(root->right)
    {
        return PrintLeafs(root->right)
    }
    if(root->left)
    {
        return PrintLeafs(root->left)
    }
}

int CountNodes(node *root, int low,int high)
{
    if(!root) return;
    if(root->val>=high && root->val<=low)
    {
        return 1+CountNode(root->right,low,high)
        return CountNode(root->left,low,high)
    }
    if(root->val<low)
    {
        return CountNode(root->right,low,high)
    }
    else{
        return CountNode(root->left,low,high)
    }
}

void PrintLeafs(node *root) //printleafnodes
{
    if(!root)return; //base case
    if(!root->left && !root->right)
    {
        cout << root->val <<"";
        return;
    }
    if(root->left) //checks left child
    {
        return PrintLeafs(root->left);
    }
    if(root->right)
    {
        return PrintLeafs(root->right);
    }
    

}

int CountNode(node *root, int low,int high)
{
    if(!root)return;

    if(root->val<=high && root->va;>=low)
    {
        return 1+CountNode(root->right,low,high)
        return CountNode(root->left,low,high)
    }
    else if(root->val<low)
    {
        return COuntNode(root->right,low,high)
    }
    else{
        return COutnNode(root->left,low,high)
    }
}


void CountLeaf(node *root)
{
    if(!root)
    {
        return;
    }
    if(!root->left && !root->right)
    {
        cout << root->val <<  " ";
        return;
    }
    if(root->right)
    {
        countLeaf(root->val)
    }
    if(root->left)
    {
        countLeaf(root->val)
    }
}

int max( int a,int b)
{
    return(a>=b) ? a:b;
}

int height(node* node) //checkiing node
{
    if(node==nullptr) return;

    return 1+max(height(node->left))
    return max(height(node->right))
}


int max(int a,int b)
{
    return(a>=b) ? a:b //iterates
}

int height(node * node)
{
    if(node == NULL)
    {
        return 0;
    }
    else{
        return 1+max(height(node->left), (height(node->right)); //check left and right max val
    }
}

int CountNode(node* root, int low,int hight)
{
    if(!root) return 0;

    if(root->val<=low && root->val>=high)
    {
        return 1+CountNode(root->right,low,high)
        return 1+CountNode(root->left,low,high)
    }
    else if(root->val<low)
    {
        return(root->right,low,high)
    }
    else{
        return root->left,low,high)
    }
}

int CountLeafNode(node*root)
{
    if(!root)return 0;

    if(!root->left && !root->right)
    {
        cout <<< root->val <<  "" 
        return 0;
    }
    if(root->left){return CountLeafNode(root->left)}
    if(root->right){return CoutnLeafNode(root->right)};
}

int max(int a ,int b)
{
    return (a>=b) ? a:b;
}

int height(node *node)
{
    if(node == NULL) return 0;

    return 1+max(height(node->left, height(node->right)));
}

bool isBalance(node *root)
{
    if(root==nullptr)return 1;

    int lh,rh; //height of left and right subtrees

    lh = height(root->left)
    rh = height(root->right)
    
    if(abs(lh,rh)<=1 && isBalance(root->left) && isBalance(root->right))

    {
        return 1;
    }
    else{
        return 0;
    }

    
}

int max(int a,int b)
{
    return(a>-b) ? a:b;
}
int height(node * node)
{
    if(node == NULL)
    {
        return 0;
    }
    else{
        retrun 1+max(height(node->left), height(node->right));
    }
}

bool isBalance(node* root)
{
    if(root== NULL) return 0;

    int lh, rh;//subtrees of left and right

    lh = height(root->left);
    rh = height(root->right)

    if(abs(lh-rh)<=1 && isBalanced(root->left) && isBalanced(root->right)) //subtract and (lh-rh)<1
    {
        return 1;
    }

    return 0;
}


int CountNoDES(node *root, int low, int high)
{
    if(!root) return 0;

    if(root->val <=low && root->val>=high)
    {
        return 1+CountNode(root->right,low,high)
        return CountNode(root->left,low,high)
    }
    else if(root->val<low)
    {
        return CountNode(root->right,low,high)
    }
    else{
        returnt CountNoDE(root->left,low,high)
    }
}


int CountLeafNode(node *root)
{
    if(!root) return 0;

    if(!root->right && !root->left)
    {
        cout << root->val << "" ;
        return 0;
    }
    if(root->right)
    {
        CountLeafNode(root->right)
    }
    if(root->left)
    {
        CountLeafNode(root->left)
    }
    
    int max(int a,int b)
    {
        return (a>=b) ? a:b;
    }

    int height(node *node)
    {
        if(node==NULL) return 0;

        return 1+max(height(node->left),height(node->right));
    }

    bool isBalance(node *root)
    {
        if(root==NULL) return 1; //return 1 not 0


        int lh,rh;
        lh = root->left
        rh = root->right

        if(abs(lh-rh)<=1 && isBalance(root->left) && isBalance(root->right)) return 1;
        return 0; //if we reach here then the tree is not balanced
    }



//CHECK IF TREE IS BALANCE
int max(int a,int b)
{
    return(a>=b) ? a:b;
}

int height(node *node)
{
    if(node == NULL) return 0;

    return 1+max(height(node->left),(node->right));
}

bool isBalance(node *root)
{
    if(!root)return 1; //check if tree is empty return true;

    int lh = root->left;
    int rh = root->right;

    if(abs(lh-rh)<=1 && isBalance(root->left) && isBalance(root->right))
    {
        return 1;
    }

    return 0; //if false
}

int CountNodes(node *root, int low, int high)
{
    if(!root) return 0;

    if(root->val>=low && root->val<=high)
    {
        return 1+CountNodes(root->right,low,high)
        return CountNodes(root->left,low,high)
    }
    else if(root->val<low)
    {
        return CountNodes(root->right)
    }
    else{
        return CountNodes(root->left)
    }
}

void PrintLeafs(node *root)
{
    if(!root)return;

    if(!root->right && !root->left)
    {
        cout << root->val << " ";
        return 0;
    }
    if(root->left)
    {
        PrintLeafs(root->left)
    }
    if(root->right)
    {
        PrintLeafs(root->right)
    }
}

int CountNode(node *root,int high, int left))
{
  if(!root) return 0; //base case

  if(root->data==left && root->data== high)
  {
    return 1;
  }

  if(root->data<=high && root->data>=low)
  {
    return 1+CountNode(root->right, low, high)
    return CountNode(root->right,low, high)
  }
   else if (root->data < low)
         return getCount(root->right, low, high);
 
    // Else recur for left child
    else return getCount(root->left, low, high);
}

int CountNode(node *root,int low,int high)
{
  if(!root) return 0;//base case

  if(root->data<=high && root->data>=low)
  {
    return 1+CountNode(root->right,low,high)
    return CountNode(root->left,low,high)
  }
  else if(root->data<low) //less than low
  {
    return CountNode(root->right, low,high)
  }
  else //recurse for left child
  {
    return CountNode(root->left,low,high)
  }
}


int CountNode(node *root, int low,int high)
{
  if(!root) return 0;

  if(root->data <= high && root->data >=low)
  {
    return 1+CountNode(root->right,low,high)
    return CountNode(root->left,low,high)
  }
  else if(root->data<low)
  {
    return CountNode(root->right,low,high)
  }
  else
  {
    return CountNode(root->left,low,high)
  }
}

void PrintLeafNodes(node *root)
{
  if(!root) return;

  if(!root->right && !root->left)
  {
    cout << root->value << endl;
    return;
  }
  //if right child exists, check recursively
  if(root->right)
  {
    PrintLeafNodes(root->right);
  }
  //if left child exists check recursively
  if(root->left)
  {
    PrintLeafNodes(root->left);
  }
}

int CountNodes(node *root, int low, int high)
{
  if(!root) return 0;

  if(root->data<=high && root->data>=low)
  {
    return 1+CountNode(root->right,low,high)
    return CountNode(root->left,low,high)
  }
  if(root->data<low)
  {
    return CountNode(root->right,low,high)
  }
  else
  {
    CountNode(root->left,low,high)
  }
}

PrintleafNodes(node *root)
{
  if(!root) return;
  if(!root->right && !root->left)
  {
    cout << root->value << " ";
    return;
  }

  if(root->right)
  {
    printLeafNodes(root->right)
  }
  if(root->left)
  {
    printLeafnode(root->left)
  }
}

int max(int a, int b)
{
  return(a>=b) ? a : b
}

int height(node* root)
{
  if(!root)
  {
    return 0;
  }
  if(root->right && root->left)
  {
    return 1+max(root->left)
    return max(root->right))
  }
}


balance a tree

int max(int a ,int b)
{
  return(a>=b) ? a:b;
}

int height(node* node)
{
  if(node == nullptr) return 0;
  return 1+max(height(node->left),(node->right));


}

bool isBalance(node *root)
{
  if(root==nullptr)
  {
    return 1;
  }
  int lh = root->left
  int rh = root->right

  if(abs(lh-rh)<=1 && isBlance(root->left) && isBalance(root->right))
  {
    return 1;
  }
  return 0;
}


int CountNodes(node *root)
{
  if(!root) return 0;

  if(node->val<=low && node->val>=high)
  {
    return 1+countnode(root->right,low,high)
    return countNode(root->left,low, high)
  }
  else if(root->val<low)
  {
    return countNOde(root->right,low,high)
  }
  else{
    return countNode(root->left, low, high)
  }
}



int countLeafs(node * root)
{
  if(!root)return 0;


  if(!root->right && !root->left)
  {
    cout << root->val << " ";
    return 0;
  }
  if(root->left)
  {
    retrun countleafs(root->left)
  }
  if(root->right)
  {
    return countleafs(root->right)
  }
}

reverse a linked list
node* reverse(node *current)
{
  if(current==NULL) return 0;
  if(current->next == NULL)
  {
    head = current;
    return current;
  }
  node* temp = reverse(current->next)
  current->next = current;
  current->next = NULL;
  return current;
}


int countNode(node * root, int low,int high)
{
    if(!root) return;

    if(root->val<=low && root->val>=high)
    {
        return 1+countNode(root->right,low,high)
        return countNode(root->left,low,high)
    }

    if(root->val<low)
    {
        returnt Countnode(root->right,low,high)
    }
    else{
        return countNode(root->left,low,high)
    }
}

//check if tree is balance
int max(int a,int b)
{
    return(a>=b) ? a:b;
}

int height(node *node)
{
    if(node==NULL)return;

    return 1+max(height(node->left),(node->right));

}

bool isBalance(node* root)
{
    if(root==nullptr)return 1;
    int lh, rh;
    lh = height(root->left);
    rh = height(root->right);
    if(abs(lh-rh)<=1 && isBalance(root->left) && isBalance(root->right))
    {
        return 1;
    }
    
    return 0;
    
}


int printLeafs(node *root)
{
    if(!root) return;

    if(!root->right && root->left)
    {
        cout << root->val << " "
        return 0;
    }

    if(root->left)
    {
        return printLeafs(root->left)
    }

    if(root->right)
    {
        return printLeafs(root->right)
    }
   
}

reverse link literals

node* reverse(node *current)
{
    if(current==nullptr)return;
    if(current->next == nullptr)
    {
        head = current;
        return current;
    }

    node* temp = reverse(current->next);
    current->next = current;
    current->next = nullptr;
    return current;
}






int countNode(node* root, int low,int high)
{
    if(!root)return 0;
    if(root->val<=low && root->val>=high)
    {
        return 1+countNode(root->right, low,high)
        return countNode(root->left,low,high)
    }

    if(root->val<low)
    {
        return countNode(root->right)
    }
    else{
        return countNode(root->left)
    }
}

int max(int a,int b)
{
    return(a>=b)? a:b;
}
int height(node *node)
{
    if(node==NULL) 
    return 1+max(height(node->left),(node->right))
}

bool isBalance(node* root)
{
    if(root==NULL) return 1;

    int lh,rh;
    lh = height(root->left)
    rh=height(root->right)

    if(abs(lh-rh)<=1 && isBalance(root->left) && isBalance(root->right))
    {
        return 1;
    }
    return 0;
}


print all leafs of a binary tree

int Printleafs(node* root)
{
    if(!root) return 0;

    if(!root->left && root->right)
    {
        cout << root->val << " ";
        return 0
    }
    if(root->left)
    return printLeafs(root->left)

    if(root->right)
    return printLeafs(root->right)
}

//delete copy
node* deleteCopy(node *current)
{
    if(current == NULL)
    {
        return 0;
    }
    node* next_next;
    while(current->next == NULL)
    { //compare current node with next node
        if(current->next == current->next->data)
        {
            //memorize sequence of step
            next_next = current->next->next;
            free(current->next);
            current->next = next_next;
        }
        else{ //only advance if there is no deletion
            current = current->next;
        }
    }

}

//delete all duplicates in a linked list

node *deletecopy(node *current)
{
    if(current == NULL) return;
    node* next_next;

    while(current->next!= NULL)
    {//compare to see if they are duplicated
        if(current->data == current->next->data)
            next_next = current->next->next;
            free(current->next)
            current->next = next_next;
        else{ //advance if no deletion
            current = current->next;
        }
    }


}



//remove a duplicate in a linked list

node* removeCopy(node* current)
{
    if(current == NULL) return;

    node* next_next; //next is like a dummy variable
    while(current->next != NULL)
    {
        if(current->data == current->next->data)
        {
            next_next = current->next->next;
            free(current->next)
            current->next = next_next;
        }
        else{
            //advance if no deletions
            current = current->next;
        }
    }
}


node* removeCopy(node* current)
{
    if(current==NULL)return; //our pointer to traverse the linked list

    node* next_next;

    while(current->next != nullptr)
    {
        if(current->data == current->next->data)
        {
            next_next = current->next->next;
            free(current->next)
            current->next = next_next;
        }
        else{ //advances the data if no deletion
            current = current->next;
        }
    }
}

node* removeCopy(node* current)
{
    if(current==nullptr)return;
    node* next_next;
    while(current->next!=NULL)
    {
        if(current->data == current->next->data)
        {
            next_next = current->next->next
            free(current->next)
            current->next = next_next;
        }
        else{ //advances if there is no deletion
            current = current->next;
        }
    }
}

node* removeIndex(int index, node* current)
{
    if(current== NULL) return;
    node* first;
    node* second;
    node *temp;
    while(current->next!=nullptr){
        first = current->next;
        second = current->next->next;
        if(first)
        {
            free(first)
            first = current->next;
        }
        else if(second)
        {
            free(second)
            second = current->next->next;
        }
        else{
            current = current->next;
        }
    }

}

node* removeCopy(node *current)
{
    if(current == null) return;

    node* next_next;

    while(current->next != nullptr)
    {
      if(current->data == current ->next->data)
      {
          next_next = current->next;
          free(current->next)
          current->next = next_next;
      }  
      else{
          current = current->next;
      }
    }
}

node* removeCopy(node* current)
{
    if(current==nullptr){return;}
    node* next_next;
    while(current!=nullptr)
    {
        if(current->data == current->next->data)
        {
            next_next = current->next->next;
            free(current->next)
            current->next = next_next;
        }
        else{
            current = current->next;
        }
    }
}

node GetNode(node* current, int index)
{
    if(current==nullptr) return;
    while(current!=nullptr)
    {
        if(current->data==index)
        {
            return (current->data);
        }
        count++;
        current=  current->next;
    }
}

node* getNthNode(node* current, int index)
{
    if(current==NULL)return;
    while(current!=nullptr)
    {
        if(current->data == index)
        {
            return (current->data)
        }
        count++
        current = current-next;
    }

    assert(0);
}

node* getNthnode(node* current, int index)
{
    int count = 0;
    if(current==nullptr)return;
    while(current!=nullptr)
    {
        if(current->data == index)
        {
            return(current->data)
        }
        count++
        current=current->next;
    }
    assert(0)
}

node* deleteCopy(node* current)
{
    if(current==nullptr)return;
    node* next_next;
    while(current!=nullptr)
    {
        if(current->data == current->next->data)
        next_next = current->next->next;
        free(current->next)
        current->next=next_next;
    }
    else{
        current = current->next;
    }
}

//check if balance

int max(int a,int b)
{
    return (a>=b) ? a:
}
int height(node* node)
{
    if(node==nullptr) return;

    return 1+max(height(node->left),(node->right))
}
bool ifBalance(node* root)
{
    int lh,rh;
    if(root==nullptr)return 1;
    lh = height(root->left)
    rh = height(root->right)
    
    if(abs(lh-rh)<=1 && root->left && root->right)
    {
        return 1;
    }
}

int getNth(struct Node*current, int index) //get nth node recursively
{
    if(current==nullptr)return -1;
    if(index == 0)
    return current->data;

    return GetNth(current->data, index-1)
}

node* reverse(node* current)
{
    if(current==nullptr)return;
    if(current->next!=nullptr)
    {
        head = current;
        return current;
    }
    node* temp = reverse(current->next);
    temp->next = current;
    current->next = nullptr;
    return current;
    
}

node* reverse(node* current)
{
    if(current==nullptr)return;

    if(current->next==nullptr)
    {
        head = current;
        return current;
    }
    node* temp = reverse(current->next);
    temp->next = current;
    current->next = nullptr;
    return current;
}

node* reverse(node* current)
{
    if(current==nullptr)return;

    if(current->next!=nullptr){
        head = current;
        return current;
    }

    node* temp = reverse(current->next)
    temp->next = current;
    current->next = nullptr;
    return current;

}

int countNode(node* root, int low,int high)
{
    if(!root) return;

    if(root->val<=low && root->val>=high)
    {
        return 1+countNode(root->right,low,high)
        return countNode(root->left,low,high)
    }
    if(root->val<low)
    {
        return countNode(root->right,low,high)
    }
    else{
        return countNode(root->left,low,high)
    }
}

int max(int a,int b)
{
return (a>=b) ? a:b
}
int height(node* node)
{
If(node==nullptr)return;
Return 1+max(height(node->left),height(node->right))
}
bool isBalance(node* root)
{
    int lh,rh;
    if(!root)return 1;
    lh = heigh(root->left)
    rh = height(root->right)
    if(abs(lh-rh)<=1 && isBalance(root->left) && isBalance(root->right))
    {
        return 1;
    }
    return 0;
}

void printleafs(node* root)
{
    if(!root)
    {
        return 0;
    }
    if(!root->right && !root->left){
        cout << root->val << " "
        return;
    }
    if(root->left)
    {
        printLeafs(root->left)
    }
    if(root->right)
    {
        printLeafs(root->right)
    }
}

node* deletecopy(node* current)
{
    if(current==nullptr)return;
    node* next_next;
    while(current->next!=nullptr)
    {
        if(current->val == current->next->val)
        {
            next_next = current->next->next;
            free(current->next)
            current->next = next_next;
        }
        else{
            current = current->next;
        }
    }
}

node* reverse(node* current)
{
    if(current== nullptr)return;

    if(current->next==nullptr)
    {
        head = current;
        return current;
    }
    node* temp = reverse*(current->next)
    temp->next = current;
    current->next = nullptr;
    return current;
    

}


int maxElement(int A[], int n)
{
    if(n==1)
        return A[0]
    return max(A[n-1],maxElement(A,n-1));
}

node* kthnode(node* current)
{
    if(current==nullptr)return;
    while(current!=nullptr)
    {

    }
}

//SUM OF LEFT LEAVES
 if(!root){return 0;}
        int count = 0;
        if(root!=nullptr)
        {
            if(root->left)
            {
                count += root->left->val;
            }
            else
            {
                sumOfLeftLeaves(root->left);
            }
            count += sumOfLeftLeaves(root->right);
            
        }
        return count;
    }

    int countLeftLeaves(node* root)
    {
        if(!root){
            return 0;
        }
        int count = 0;
        if(root!=nullptr)
        {
            if(root->left)
            {
                count += root->left->val;
            }
            else{
                return countLeftLeaves(root->left);
            }
            countLeftLeaves(root->right);
        }
        return count;
    }

    //countLeftLeaves 

    int countLeftLeaves(node* root)
    {
        if(!root){return 0;}
        int count = 0;

        if(root!=nullptr)
        {
            if(root->left)
            {
                count+= root->left->val;
            }
            else{
                countLeftLeaves(root->left);
            }
            countLeftLeaves(root->right);
        }
        return count;
    }
    //count Kth node from end of a linked list
    int countKnode(struct node* head, int k)
    {
        if(head==nullptr){return 0;}

        int index=countKnode(head->next, k)+1;

        if(index==k)
        {
            cout << head->val;
        }
        return index;
    }

    int minElement(int* A, int index, int size, int min)
    {
        if(index==size)
        {
            return min;
        }
        
        if(A[index]<min)
        {
            min = A[index]
        }
        
        return minElement(A, index+1, size, min;
    }

    int maxElement(int* A, int index, int n, max)
    {
        if(index == n)
        {
            return max;
        }
        if(A[index]>max)
        {
            max = A[index];
        }
        return maxElement(A, index+1, n, max);
    }

    int printKthNode(struct Node* head, int k){
        if(head==nullptr){return 0;}
        
        int index = printKthNode(head->next, k);
        
        if(index == k)
        {
            cout << head->val;
        }
        return index;
    }



    //find max array
    int maxElement(int* A, int index, int n, int max)
    {
        if(index==n)
        {
            return max;
        }
        if(A[index]>max)
        {
            max = A[index];
        }
        return maxElement(A,index+1, n, max);
    }

    int min(int* A, int index, int n, int min)
    {
        if(index==n)
        {
            return min;
        }
        if(A[index]<min)
        {
            min = A[index];
        }
        return min(A, index+1, n, min);
    }

    //write a function that output the kth node from the end of a linked list using recursion
    int kthNode(node* head, int k)
    {
        if(head==nullptr){return 0;}
        int index = kthNode(head->next, k)+1;

        if(index == k)
        {
            cout << head->val;
        }
        return index;
    }
    //reverse a linked list
    node* reverse(node* current)
    {
        if(current==nullptr){return;}
        if(current ->next== nullptr)
        {
            head=current;
            return current;
        }
            node*temp = reverse(current->next);
            current->next = current;
            current->next = nullptr;
    }


    int countNodes(node* root, int low, int high)
    {
        if(!root){return nullptr;}
        if(root->val<=low && root->val>=high)
        {
            return 1+countNodes(root->right,l,h);
            return countNodes(root->left,l,h);
        }
        else if(root->val<low)
        {
            return countNodes(root->right, l ,h);
        }
        else{
            return countNodes(root->left);
        }
    }

    int max(int a,int b)
    {
        return(a>=b)?a:b;
    }
    int height(node* node)
    {
        if(node==nullptr){return 0;}
        return 1+max(height(node->left),height(node->right));
    }
    bool isBalanceTree(node* root)
    {
        if(root==nullptr){return 1;}
        int lh,rh;

        lh = height(root->left);
        rh = height(root->right);
        
        if(abs(lh-rh)<=1 && isBalanceTree(root->left),isBalanceTree(root->right))
        {
            return 1;
        }
        return 0;
        }


        //printleafs of binary tree
        node* printLeafs(node* root)
        {
            if(!root){return 0;}
            if(!root->left && !root->right)
            {
                cout << root->val << " ";
                return 0;
            }
            if(root->left)
            {
                return printLeafs(root->left);
            }
            if(root->right)
            {
                return printLeafs(root->right);
            }
        }


        void BFS(int start, int n)
        {
            bool *visited = new bool[n];
            for(int n = 0;i<n;i++)
            {
                visited[i] = false;
            }
            queue<int> q;
            visited[start] = true; //once visited its true
            q.enqueue(start); //adds start to queue
            list<int>::iterator i; //traverses through the list
            int temp;

            while(!q.empty())
            {
                temp = q.front();
                cout << temp << " ";
                q.pop_front();

                for(i = adj[temp].begin();i!=adj[temp].end()++i)//i == begin and i!= end, ++i
                {
                    if(!visited[*i])
                    {
                        visited[*i] = true;
                        q.enqeeue(*i);
                    }
                }
            }
        }

        void BFS(int start, n)
        {

            //FIRST WE MAKE BOOLEAN
            bool* visited = new bool[n]; 
            for(int i = 0;i<n;i++)
            {
                visited[i] = false;
            }
            //SECOND CREATE QUEUE and ENQUEUE VALUE START
            queue<int> q;
            visited[start]= true;
            q.enqueue(start);
        }

        void BFS(int start, int n)
        {
            //first create BOOL
            bool *visited = new bool[n];
            for(int i = 0;i<n;i++)
            {
                visited[i] = false;
            }
            //SECOND CREATE QUEUE, index start in visited will be true then ADD ENQUEUE START VALUE
            queue<int> q;
            visited[start] = true;
            q.enqueue(start);
            
        }

        void BFS(int start, int n)
        {
            //FIRST CREATE BOOL
            bool *visited = new bool[n];
            for(int i =0;i<n;i++)
            {
                visited[i] = false;
            }

            //SECOND: we create queue, visited to true at start and enqueue start
            queue<int> q;
            visited[start] = true;
            q.enqueue(start);

            //THIRD: create list iterator and create int temp
            list<int>:: iterator i;
            int temp;
        }


        void BFS(int start, int n)
        {
            bool *visited = new bool[n];
            for(int i=0;i<n;i++)
            {
                visited[i] = false;
            }

            //secondly create queue, make visited tru and add start
            queue<int> q;
            visited[start] = true;
            q.enqueue(start);

            //third we create list iterator and int temp
            list<int>::iterator i;
            int temp;
        }

        //stack uses top and pop
        void BFS(int start, int n) //front and pop_front
        {
            //first we bool
            bool *visited = new bool[n];
            for(int i=0;i<n;i++)
            {
                visited[i]= false;
            }
            
            //second we create queue, initalize visited(start) and enqueue
            queue<int> q;
            visited[start] = false;
            q.enqueue(start);

            //third create iterator list i and temp
            list<int>:: iterator i;
            int temp;

            //fourth we check if q is not empty;
            while(!q.empty())
            {
                //4.1) use dummy temp to output whats in queue and pop
                temp = q.front();
                cout << temp << endl;
                q.pop_front();

            }

        }

        void BFS(int start, int n)
        {
            bool* visited = new bool[n];
            for(int i=0;i<n;i++)
            {
                visited[i]=false;
            }

            queue<int>q;
            visited[start]=true;
            q.enqueue(start);

            list<int>:: iterator i;
            int temp;

            while(!q.empty())
            {
                temp = q.front();
                cout << temp << " ";
                q.pop_front();

                if(i= adj[temp].begin(); i!=adj[temp].end();++i)
                {
                    if(!visited[i])
                    {
                        visited[*i]= true;
                        q.enqueue(*i);
                    }
                }
            }
        }


        void BFS(int start, int n)
        {
            bool *visited = new bool[n];
            for(int i =0;i<n;i++)
            {
                visited[i] = false;
            }

            queue<int> q;
            visited[start]= true;
            q.enqueue(start);

            list<int>:: iterator i;
            int temp;

            while(!q.empty())
            {
                temp = q.front();
                cout << temp << " ";
                q.pop_front();

                if(i==adj[temp].begin();i!=adj[temp].end();++i) //adjacency of that vertices 'temp'
                {
                    if(!visited[*i])
                    {
                        visited[*i] = true;
                        q.enqueue(*i);
                    }
                }
            }

        }

        void BFS(int start, int n)
        {
            bool *visited = new bool[n];
            for(int i= 0;i<n;i++)
            {
                visited[i] = false;
            }

            queue<int>q;
            visited[start]=true;
            q.enqueue(start);

            list<int> :: iterator i;
            int temp;

            while(!q.empty())
            {
                temp = q.front();
                cout << temp << " ";
                q.pop_front();

                if(i=adj[temp].begin();i!=adj[temp].end();++i)
                {
                    if(!visited[*i])
                    {
                        visited[*i] = true;
                        q.enqueue(*i);
                    }
                }
            }
        }

        void BFS(int start, int n)
        {
            bool *visited = new bool[];
            for(int i=0;i<n;i++)
            {
                visited[i] = false;
            }


            queue<int> q;
            visited[start] = true;
            q.enqueue(start);


            list<int>:: iterator i;
            int temp;

            while(!q.empty())
            {
                temp = q.front();
                cout << temp << " ";
                q.pop_front();

                if(i=adj[temp].begin();i!=adj[temp].end();++i)
                {
                    if(!visited[i])
                    {
                        visited[*i] = true;
                        q.enqueque(*i);
                    }
                }
            }
        }


        void BFS(int start, int n)
        {
            bool *visited = new bool[n];
            for(int i =0;i<n;i++)
            {
                visited[i] = false;
            }

            queue<int> q;
            visited[start]=true;
            q.enqueue(start);

            list<int>:: iterator i;
            int temp;

            while(!q.empty())
            {
                temp = q.front();
                cout << temp << endl;
                q.pop_front();

                if(i=adj[temp].begin();i!=adj[temp].end();++i)
                {
                    if(!visited[*i])
                    {
                        visited[*i] = true;
                        q.enqueue(*i);
                    }
                }
            }
        }

        void FloodFill(char** tiles, int x, int y, int n, char newCol)
        {
            queue<pair<int, int>> q;
            q.push(make_pair(x,y));
        }

        void FloodFill(char** tiles, int x, int y, int n, char newCol)
        {
            queue<pair<int,int>> q;
            q.push(make_pair(x,y));
        }

        void FloodFill(char **tiles, int x, int y, int n, char newColumn)
        {
            //create q and push x and y with helper function make_pair
            queue<pair<int,int>> q;
            q.push(make_pair(x,y));

            //check if empty
            while(!q.empty())
            {
                //this create i and j and inialize oldCol to tiles matrix and tiles matrix to new column
                int i = q.front.first();
                int j = q.front.second();
                char oldCol = tiles[i][j];
                tiles[i][j] = newColumn;
                
                //CONDITIONAL FOR I AND J
                if(i-1 >= 0 && tiles[i-1][j] == oldCol){ //CHECK IF >= THAN 0
                    q.push(make_pair(i-1,j));
                }
                if(i+1 < n && tiles[i+1][j]==oldCol){ //CHECK IF LESS THAN N
                    q.push(make_pair(i+1,j));
                }

                if(j-1 >= 0 && tiles[i][j-1] == oldCol){ 
                    q.push(make_pair(i,j-1));
                }
                if(j+1 < n && tiles[i][j] == oldCol){
                    q.push(make_pair(i,j+1));
                }

                //POP
                q.pop();


            }
        }


        void FloodFill(char** tiles, int x, int y, int n, char newCol)
        {
            queue<pair<int,int>> q;
            q.push(make_pair(x,y));


            while(!q.empty())
            {
                //initialize i and J
                int i = q.front.first();
                int j = q.front.second();
                oldCol=tiles[i][j];
                tiles[i][j]=newcol;

                if(i-1 >= 0 && tiles[i-1][j] == oldCol){ //less than or equal to
                    q.push(make_pair(i-1,j));
                }
                if(i+1<n && tiles[i+1][j] == oldCol){
                    q.push(make_pair(i+1,j));
                } //greater than 
                if(j-1 >= 0 && tiles[i][j-1]==oldCol)
                {
                    q.push(make_pair(i,j-1));
                }
                if(j+1 < n && tiles[i][j+1] == oldCol)
                {
                    q.push(make_pair(i,j+1));
                }
            }
        }

        void BFS(int start, int n)
        {
            bool* visited = bool[n];
            for loop
            visited[i]= false;

            queue<int> q;
            visited[start] = true;
            q.enqueue(start);

            list<int> ::iterator i;
            int temp;

            while(!q.empty())
            {
                temp = q.front();
                cout << temp <<  " ";
                q.pop_front();

                if(i=adj[temp].begin();i!=adj[temp].end();++i)
                {
                    if(!visited[*i])
                    {
                        visited[*i] = true;
                        q.enqueue(*i);
                    }
                }
            }
        }

        void Floodfill(char** tiles, int x, int y, int n, char newCol)
        {   
            //make queue for x and y
            queue<pair<int, int>> q;
            q.push(make_pair(x,y));
            //check if q is empty
            while(!q.empty){
                //initialize i and j and CHAR oldCol and then tiles
                int i = q.front.first();
                int j = q.front.second();
                char oldCol=tiles[i][j];
                tiles[i][j] = newCol;

                if(i-1 >= 0 && tiles[i-1][j]==oldCol)
                {
                    q.push(make_pair(i-1,j));
                }
                if(i+1<n && tiles[i+1][j]==oldCol)
                {
                    q.push(make_pair(i-1,j));
                }
                if(j-1 >=0 && tiles[i][j-1]){
                    q.push(make_pair(i,j-1))
                }
                if(j+1 < n && tiles[i][j+1]){
                    q.push(make_pair(i,j+1));
                }
                q.pop();
            }
        }


        void BFS(int start, int index)
        {
            bool *visited = new bool[n];
            for __introsort_loop
            visited[i] = false;

            queue<int> q;
            visited[start] = true;
            q.enqueue(start);


            list<int>:: iterator i;
            int temp;

            while(!q.empty()){
                temp = q.front();
                cout << temp <<  " ";
                q.pop_front();

                if(i=adj[temp].begin();i!-adj[temp].end();++i)
                {
                    if(!visited[*i])
                    {
                        visited[*i] = true;
                        q.enqueue(*i);
                    }
                }
            }
        }

        void Floodfill(char** tiles, int x,int y, int n, char newCol)
        {
            queue<pair<int,int>> q;
            q.push(make_pair(x,y));

            while(!q.empty()){
                int i = q.front.first();
                int j = q.front.second();
                char oldCol = tiles[i][j];
                tiles[i][j] = newCol;

                if(i-1 >= 0 && tiles[i-1][j]==oldCol) //greater than or equal to 0
                {
                    q.push(make_pair(i-1,j));
                }
                if(i+1 < n && tiles[i+1][j]==oldCol) //less than n
                {
                    q.push(make_pair(i+1,j));
                }
                if(j-1 >= 0 && tiles[i][j-1] == oldCol)
                {
                    q.push(make_pair(i,j-1));
                }
                if(j+1 < n && tiles[i][j+1]){
                    q.push(make_pair(i,j+1));
                }
                q.pop();
            }
        }

        ListNode* deleteDuplicates(ListNode* current)
        {
            if(current==nullptr){return 0}
            ListNode* next_next;
            while(current->next!=nullptr)
            {
                if(current->val == current->next->val)
                next_next = current->next->next;
                delete(current->next);
                current->next = next_next;
                else{
                    current = current->next; // traverses
                }
            }
        }

        void removeFriends(node* head, int x, int n)
        {
            node* current = head;
            node* nxtPointer = head;

            for(int i = 0;i<=n;i++) //less than or equal to
            { //moving nxtPointer to its intended position after skipping n people
                nxtPointer = nxtPointer->next;
                if(nxtPointer==nullptr){break;}

            }
            for(int j = 0;j<=x;i++)
            {
                current->next = nxtPointer; //redirect current's next pointer;
                current = current->next; //traverses

                if(current=-nullptr){break;}

            }
        }

        void removeFriends(node* head, int x, int n)
        {
            node* cu = head;
            node* nxtPointer = head;
            while(deleteptr!=nullptr)
            {
                for(int i =0;i<=n;i++)
                {
                    nxtPointer = nxtPointer->next;
                    if(nxtPointer==nullptr){break;}
                }
                for(int j=0;j<=x;j++)
                {
                    current->next = nxtPointer;
                    current= current->next;

                    if(current==nullptr)}{break;}
                }
            }
        }

        void removeFriends(node* head, int x,int n)
        {
            node*current = head;
            node* nxtPointer = head;

            while(deleteptr!=nullptr)
            {
                for(int i =0;i<=n;i++)
                {
                    nxtPointer = nxtPointer->next;
                    if(nxtPointe==nullptr{break;})
                }
                for(int j=0;j<=x;j++)
                {
                    current->next = nxtPointer;
                    current= current->next;
                    if(current==nullptr){break;}
                }
            }
        }


        int printKthNode(node* current, k)
        {
            if(current==nullptr){return;}
            int index = 1+printKthNode(current->next, k);
            if(index==k){
                cout << current->val;
            }
            return index;
        
        }

        int minArray(int A, int index, int min, int n)
        {
            if(index==size){
                return min;
            }
            if(A[index]<min)
            {
                min = A[index];
            }
            return minArray(A, index+1, min, n);
        }

       void removeFriends(node* head, int x, int n)
       {
           node* nxtPtr = head;
           node* current = head;

           while(deleteptr!=nullptr)
           {
               for(int i = 0;i<=n;i++)
               {
                    nxtPtr = nxtPtr->next;
                    if(nxtPtr==nullptr){break;}
               }
               for(int j =0;j<=x;j++)
               {
                   current->next = nxtPtr;
                   current = current->next;
                   if(current == nullptr)
                   {break;}
               }


           }
       }

       ListNode* deleteDuplicates(ListNode* head)
       {
           node* current = head;
            node* next_next;
           if(current==nullptr){return 0;}
           while(current->next!=nullptr)
           {
               if(current->data == current->next->data)
               {
                   next_next = current->next->next;
                   delete(current->next);
                   current->next = next_next;
               }
               else{
                    current = current->next;

               }
           }
       }

       void FloodFill(char** tiles, int x, int y, int n, char newCol)
       {
           queue<pair<int,int>> q;
           q.push(make_pair(x,y));

           while(!q.empty())
           {
               int i = q.front.first();
               int j = q.front.second();
               char oldCol = tiles[i][j];
               tiles[i][j] = newCol;

               if(i-1 >= 0 && tiles[i-1][j]==oldCol)
               {
                   q.push(make_pair(i-1,j));
               }
               if(i+1 < n && tiles[i+1][j]==oldCol)
               {
                   q.push(make_pair(i+1,j));
               }
               if(j-1>=0 && tiles[i][j-1]==oldCol)
               {
                   q.push(make_pair(i,j-1));
               }
               if(j+1 < n && tiles[i][j+1]==oldCol)
               {
                   q.push(make_pair(i,j+1));
               }
            q.pop();
           }
       }

       void BFS(int start, int n)
       {
           bool *visited = new bool[n];
           for loop
           visited[i] = false;


           queue<int> q;
           visited[start] = true;
            q.enqueue(start);

            list<int>:: iterator i;
            int temp;

            while(!q.empty())
            {
                temp = q.front();
                cout << temp << " ";
                q.pop_front();

                if(i=adj[temp].begin();i!=adj[temp].end;++i)
                {
                    if(!visited[*i])
                    {
                        visited[*i] = true;
                        q.enqueue(*i);
                    }
                }
            }

       }

       int printLeafs(node* root)
       {
           if(!root){return;}
           if(!root->right && !root->left)
           {
               cout << root->val << " ";
               return;
           }
           if(root->left)
           {
               printLeafs(root->left);
           }
           if(root->right)
           {
               printLeafs(root->right);
           }
       }

       int sumOfLeftLeaf(node* root)
       {
           int count = 0;
           if(!root)return;
            if(root!=nullptr)
            {
                if(root->left)
                {
                    count += root->left->val;
                }
                else{
                    sumOfleftLeaf(root->left);
                }
                count += sumofLeafLeaf(root->right);
            }
            return count;
       }
       int max(a,b)
       {
           return (a>=b) ? a:b;
       }
       int height(node* node)
       {
           if(node==nullptr){return;}
           return 1+max(height(node->left),height(node-.right));
       }
       int isBalanced(node* root)
       {
           if(root==nullptr)return;
           int lh, rh;
           lh = height(root->left);
           rh = height(root->right);

           if(abs(lh-rh))<=1 && isBalance(root->left) && isBalance(root->right) //less than or equal to 1
           {
               return 1;
           } 
           return 0;
       }
       

       int countRng(node* root, int low, int high)
       {
           if(!root)return;
           if(root->val<=low && root->val>=high)
           {
               return 1+countRng(root->right,l,h)
               return countRng(root->left, l, h);
           }
           else if(root->val < low)
           {
               return countRng(root->right, l, h);
           }
           else if(root->val > high){
               return countRng(root->left,l,h);
           }
       }
        //returns the number of nodes within the range of [l,h]
       int countRng(node* root, int l, int h)
       {
           if(root->val<=l && root->val>=h)
           {
               return 1+countRng(root->right,l,h);
               return countRng(root->left,l,h);
           }
           else if(root->val<l)
           {
               return countRng(root->right,l,h);
           }
           else if(root->val>h)
           {
               return countRng(root->left,l,h);
           }
       }

       //complete isBal which determines if a given tree is height-balanced.
       //DEFINE helper functions as needed

       int max(int a,int b)
       {
           return(a>=b)? a:b;
       
       }
       int height(node* node)
       {
           if(node==nullptr) return;

           return 1+max(height(root->left), height(root->right));
       }
       bool isBal(node* root)
       {
           if(root==nullptr){return 1;}

           int lh,rh;
           lh = height(root->left);
           rh=height(root->right);
           if(abs(lh-rh)<=1 && isBal(root->left) && isBal(root->right))
           {
               return 1;
           }
           return 0; 
       }

       //complete the function printLeafs which prints all the leaves of a binary tree
       void printLeafs(node* root)
       {
           if(!root) return 0;
           if(!root->right && !root->left)
           {
               cout << root->val << " ";
               return 0;
           }
           if(root->left)
           {
               printLeafs(root->left);
           }
           if(root->right)
           {
               printLeafs(root->right);
           }
       }

       void BFS(int start, int n)
       {
           bool *visited = new bool[n];
           for __introsort_loop
           visited[i] = false;

           queue<int> q;
           visited[start]=true;
           q.enqueue(start);

           list<int>::iterator i;
           int temp;

           while(!q.empty())
           {
               temp = q.front();
               cout << temp << " ";
               q.pop_front();

               if(i=adj[temp].begin();i!=adj[temp].end();++i) //DONT FORGET ++I NOOB
               {
                   if(!visited(*i))
                   {
                       visited[*i] = true;
                       q.enqueue(*i);
                   }
               }
           }

       }

        void floodFill(char** tiles, int x, int y, int n, char newCol)
        {
            queue<pair<int,int>> q;
            q.push(make_pair(x,y));


            while(!q.empty())
            {
                int i = q.front.first();
                int j = q.front.second();
                char oldCol = tiles[i][j]; //INITALIZE OLDCOL CHAR
                tiles[i][j] = newCol;

                if(i-1>=0 && tiles[i-1][j] == oldCol)
                {
                    q.push(make_pair(i-1,j));
                }
                if(i+1<n && tiles[i+1][j] == oldCol)
                {
                    q.push(make_pair(i+1,j));
                }
                if(j-1>=0 && tiles[i][j-1] == oldCol)
                {
                    q.push(make_pair(i,j-1));
                }
                if(j+1<n && tiles[i][j+1] == oldCol)
                {
                    q.push(make_pair(i,j+1));
                }
                q.pop();
            }
        }

        void deleteDuplicates(node* head) //NEED TO WORK ON THIS AGAIN STUPID
        {
            node* current = head;
            if(current==nullptr){return 0;}
            node* next_next;
            while(current->next!=nullptr)
            {
                if(current->data == current->next->data)
                    next_next = current->next->next;
                    delete(current->next);
                    current->next = next_next;
                else{
                    current = current->next;
                }
            }
        }

        void removeFriends(node* head, int n, int x)
        {
            node* current=head;
            node* nxtpointer = head;
            if(current==nullptr){return 0;}
            if(current!=nullptr)
            {
                for(int i = 0;i<=n;i++)
                {
                    nxtPointer = nxtPointer->next; //ASSIGN FOR REDIRECTION IN THE SECOND LOOP
                    if(nxtPointer == nullptr){break;} //BREAK WE ARE IN A FOR LOOP DUMMY
                }
                for(int j = 0;j<=x;j++)
                {
                    current->next = nxtPointer; //redirect
                    current = current->next; //traverse
                    if(current == nullptr){break;}
                }

            }
        }

        //GIVEN AN ARRAY, WRITE A FUNCTION TO FIND THE MINIMUM ELEMENT USING RECURSION
        int min(int *A, int index, int n,int min)
        {
            if(A[index]==n)
            {
                return min;
            }
            if(A[index]<min)
            {
                min = A[index];
            }
            return min(A,index+1, n, min);
        }

        int Kthnode(node* head, int k){
            if(head==nullptr){return head;}
            int index = return 1+(head->val, k);

            if(index==k)
            {
                cout << head->data;
            }
            return index;
        }

        bool isValid(string s)
        {
            stack<char> st;

            for(char:s){
                if(c=='[' || c=='{' || c=='(')
                {
                    st.push(c);
                    continue;
                }
                if(st.size()==0){return false;}
                char top = st.top();
                st.pop();
                switch(c){
                    case ']': if(top!='[') return false;break;
                    case '}': if(top!='{') return false; break;
                    case ')': if(top!='(') return false; break;
                }
            }
            return st.size() == 0;

        }
        bool isValid(string s)
        {
            stack<char> st;
            
            for(char c:s)
            {
                if(c == '[' || c=='{' || c== '(')
                {
                    st.push(c);
                }
                char top = st.top();
                st.pop();
                switch(c){
                    case ']': if(top != ']') return false; break;
                    case '}': if(top!= '}') return false; break;
                    case ')': if(top!=')') return false; break;
                }
            }
            return st.size() == 0;
        }

        bool validPar(string s)
        {
            stack<char> s;
            char c, top;
            for(c : s)
            {
                if(c=='[' || c =='{' || c=='(')
                {
                    s.push(c);
                    continue;
                }
                top = s.top();s.pop();
                switch(c){
                    case '[': if(top!=']'){return false;break;})
                    case '{': if(top!='}'){return false;break;})
                    case '(': if(top!=')'){return false;break;})
                }
            }
            return s.size() == 0;
            
        }

        ListNode* deleteDuplicates(ListNode* current)
        {
            ListNode* next_next;
            if(current==nullptr)return;
            while(current->next!=nullptr)
            {
                if(current->val == current->next->val)
                    next_next = current->next->next;
                    free(current->next);
                    current->next = next_next;

                else{
                    current = current->next;
                }

            }
        }

        void removeNames(node* current, int x, int n)
        {
            node* nxtPtr = current;

            while(deleteptr!=nullptr)
            {
                for(int i=0;i<=n;i++)
                {
                    nxtPtr = nxtPtr->next;
                    if(nxtPtr==null){break;}
                }
                for(int j=0;j<=x;j++)
                {
                    current->next = nxtPtr;
                    current = current->next;
                    if(current==nullptr){break;}
                }
            }
        }

        bool isValid(string str)
        {
            stack<char> st;
            for(char c: str)
            {
                if(c=='(' || c=='[' || c=='{')
                {
                    st.push(c);
                    continue;
                }
                if(st.size()=0){return false;}
                char top = st.top();
                st.pop();
                switch(c){
                    case ')': if(top!='(') return false; break;
                    case ']': if(top!='[') return false; break;
                    case '}': if(top!='{') return false; break;
                }
            }
            return str.size() == 0;
        }

        int min(int* A, int index, int n, int min)
        {
            if(A[index]==n)
            {
                return min;
            }
            if(A[index]<min)
            {
                min = A[index];
            }

            return min(A, index+1, n, min);
        }

        int printKthNode(node* current, int k){
            if(current==nullptr)return;

            int index = printKthNode(current->val, k) +1;

            if(index==k)
            {
                cout << current->val;
            }
            return index;
        }

        node* reverse(node* current)
        {
            if(current==nullptr)return;
            if(current->next==nullptr)
            {
                hesd=current;
                return current;
            }
            
                node* temp = reverse(current->next);
                temp->next = current;
                current->next = nullptr;
                return current;
        }
            
        }


void printPreOrder(node* root)
{
    cout << root->data << " ";

    printPreOrder(node->left);

    printPostOrder(node->right);
}

void printInorder(node* root)
{
    printInorder(root->left)

    cout << root->data << " ";

    printInorder(root->right)
}

void printPost(node* root)
{
    printPost(root->left)
    printPost(root->right)
    cout  << root->data << ' ';
}

int rangeSumBST(node* root, int l,int h)
{
    if(root==null)return;
    int sum - 0;
    queue<Node*> q; //stores nodes while performing level order traversal

    q.push(root); //push root node into queue

    while(!q.empty())
    {
        node*curr = q.front(); //stores front node of q
        q.pop();


        if(curr->val >=low && curr->val<=high){ //usual condition for low and high
            sum += curr->val; //sum 
        }

        if(curr->left != NULL && curr->val > low)
        {
            q.push(curr->left);
        }

        if(curr->right != NULL && curr->val < high)
        {
            q.push(curr->right);
        }

        return sum;
    }

}


int sumofBST(node* root, int l, int h)
{
    if(!root) return;
    int sum = 0;
    queue<Node*> q;
    q.push(root);

    while(q.empty())
    {
        node* curr = q.front();
        q.pop();

        if(curr->val>= low && curr->val>=high)
        {
            sum += curr->val;
        }
        if(curr->left!=NULL && curr->val>low) //greater than
        {
            q.push(curr->left);
        }
        if(curr->right!=NULL && curr->val<high) //less than
        {
            q.push(curr->right);
        }

    }
    return sum;
}

init sumOfBST(node* root, int l,int h) //SUM OF BST
{
    int sum = 0;
    if(!root) return ;
    //THIS IS BST not BT
    queue<Node*> q;
    q.push(root);

    while(q.empty())
    {
        node* curr = q.front();
        q.pop();

        if(curr->val>=low && curr->val<= high)
        {
            sum += curr->val;
        }
        if(curr->left!=null && curr->val > low)
        {
            q.push(curr->left);
        }
        if(curr->right!=null && curr->val < high)
        {
            q.push(curr->right);
        }

    }

    return sum;

}

int sumOfBST(node* root, int low, int high)
{
    if(root==nullptr){return 0;}
    int sum = 0;
    queue<node*> q;
    q.push(root);

    while(!q.empty())
    {
        node* curr = q.front();
        q.pop();
        if(curr->val>=low && curr->val<=high){
            sum+=curr->val;
        }
        if(curr->left!=nullptr && curr->val>low)
        {
            q.push(curr->left);
        }
        if(curr->right!=nullptr && curr->val<high)
        {
            q.push(curr->right);
        }

    }
    return sum;
}

void reverseString(string str)
{
    if(str.length()==1)
    {
        return str;
    }
    return reverseString(str.substring(1)) + str[0];
}

void reverseLinkedList(node* curr)
{
    if(current==null) return;

    if(curr->next==null)
    {
        head = curr;
        return curr;
    }
    node* temp = reverse(curr->next);
    temp->next = curr;
    curr->next= null;
    return curr;
}

int findLastOccurrence(int A[], int index, int k)
{
    if(index<0){
        return -1;
    }
    if(arr[index]==k)
    {
        return index;
    }
    retrun findLast(A, i-1, k);
    findLast(A, A.size()-1,k);
}

void deleteDuplicate(node* curr)
{
    if(curr==nullptr)return;
    while(curr!=nullptr)
    {
        if(curr->val == curr->next->val)
        {
            node* next_next = curr->next->next;
            free(curr->next);
            curr->next=next_next;
        }
        else{
            curr=curr->next;
        }
    }
}

bool validParanthese(string s)
{
    stack<char> st;
    for(char c:s)
    {
        if(c=='(')
        {
            st.push(c);
            continue;
        }
        if(st.size()==0)return false;
        char x = st.top();
        st.pop();
        switch(c){
            case ')': if(x!='(') return false;break;
        }
    }
    return st.size()==0;
}

void reverseString(string s)
{
    if(s.length()==1)
    {
        return s;
    }
    return reverseString(s.substr(1)) + s[0];

}

bool isMirror(node* a, node* b)
{
    if(a==null && b==null)
    {
        return 1;
    } //both are empty tree so they mirror

    if(a && b && a->key == b->key)
    {
        return isMirror(a->left, a->right) && isMirror(root->right, root->left);
    }
    return false;
}

bool isSymmetric(struct Node* root)
{
    return isMirror(root,root);
}


bool isMirror(node* a, node* b)
{
    if(a==null && b==null)
    {
        return 1; //they both are empty so they same
    }

    if(a && b && a->key==b->key)
    {
        return isMirror(a->left,b->right) && isMirror(a->right,b->left);
    }
    return false;
}

string revereStr(string s)
{
    if(s.length()==1)
    {
        return s;
    }
    return reverseStr(s.substring(1))+s[0];
}

bool isMirror(node*a, node* b)
{
    if(!a && !b)
    {
        return 1;
    }
    if(a && b && a->val==b->val)
    {
        return isMirror(a->left,b->right) && isMirror(a->right,a->left);
    }
    return false;
}

string reverseS(string s)
{
    if(string.length()==1)
    {
        return s;
    }
    return reverseString(s.substring(1))+s[0];
}

//validate BST
bool isBST(Node* root, Node* l=NULL, Node* r=NULL)
{
    // Base condition
    if (root == NULL)
        return true;
 
    // if left node exist then check it has
    // correct data or not i.e. left node's data
    // should be less than root's data
    if (l != NULL and root->data <= l->data)
        return false;
 
    // if right node exist then check it has
    // correct data or not i.e. right node's data
    // should be greater than root's data
    if (r != NULL and root->data >= r->data)
        return false;
 
    // check recursively for every node.
    return isBST(root->left, l, root) and
           isBST(root->right, root, r);
}

//search BST
 TreeNode* searchBST(TreeNode* root, int val) {
        if(root == NULL || root->val==val)
        {
            return root;
        }
        if(root->val < val)
        {
            return searchBST(root->right, val);
        }
        else
        {
            return searchBST(root->left,val);
        }
    }

    int countRng(node* root, int l, int h)
    {
        if(!root){return 0;}

        if(root->val>=low && root->val<=high)
        {
            return 1+countRng(root->right, l, h) + countRng(root->left, l ,h);
        }
        else if(root->val <low)
        {
           return countRNG(root->right,l,h); 
        }
        else if(root->val > high)
        {
            return countRNG(root->left,l,h);
        }

    }

    int max(int a, int b)
    {
        return(a>=b)? a:b;
    }
    int height(node* node)
    {
        if(node==NULL)return 0;
        return 1+max(height(root->left), height(root->right));
    }
    bool isBal(node* root)
    {
        if(!root){return 0;}

        int lh, rh;

        lh = 
    }

    //valid BST
    bool isBSTnode(node* node)
    {
        if(node==nullptr)return 0; //CHECK IF EMPTY

        //if left val is greater than n/root val, return false
        if(n->left != nullptr && node->left->val > node->val) return false; //CHECK LEFT AND RIGHT

        //now we check if right side is less than n/root val, return false
        if(n->right !=nullptr && node->right->val < node->val) return false;

        if(!isBST(n->left) || !isBST(n->right)) //RECURSIVELY CHECK LEFT AND RIGHT SUB TREES
        {
            return false; //RETURN FALSE
        }
        return true; //RETURN TRUE IF AVAILABLE
    }

    bool isMirror(node* a, node* b)
    {
        if(!root)return 0;

        if(a==null && b==null)
        {
            return true;
        }   

        if(a && b && a->val == b==val)
        {
            return isMirror(a->left,b->right) && isMirror(a->right, b->left);
        }
        return false;
    }

    bool isSymmetric(struct *node root)
    {
        return isMirror(root,root);
    }

    bool isBST(node* root)
    {
        if(!root)return 0;
        
        //check if left is greater than n return false;
        if(root->left!=nullptr && root->left->val > root->val) return false;

        if(root->right!=nullptr && root->right->val < root->val)return false;

        if(!BST(root->left) || !BST(root->right))
        {
            return false;
        }
        return true;
    }

    bool isPalindrome(int x)
    {
        if(x<0)return false;
        stack<int> st;
        queue<int> q;

        int n = 0; 

        while(x>0) //SIZE
        {
            n=x%10; //NUMBER MODULO
            x = x/10; //X DIVIDE BY 10

            st.push(n);
            q.push(n);
        }
        while(!st.empty() && !q.empty()) //WHILE LOOP TO ITERATE THROUGH STRUCTURES
        {
            if(st.top() != q.front()) //CHECK TOP AND FRONT
            {
                return false
            }//OTHERWISE WE POP THEM ALL OUT IF FALSE
                st.pop();
                q.pop();
        }
        return true;
        }
    }

    bool validBST(node* root)
    {
        if(!root) return ;

        if(root->left!=nullptr && root->left->val>root->val)return false;

        if(root->right!=nullptr && root->right->val<root->val)return false;

        if(!BST(root->left)||!BST(root->right))
        {
            return false;
        }
        return true;

    }

    node* reverse(node* n)
    {
        node* current = n;
        if(!current)return 0;

        if(current->next==nullptr)
        {
            n = current;
            return current;
        }

        node* temp = reverse(current->next);
        temp->next = current; //TEMP->NEXT = CURRENT
        current->next = nullptr; //CURRENT->NEXT -NULL
        return current; //DONT FORGET TO RETURN
    }

    bool isPalindrome(int x)
    {
        stack<int> st;
        queue<int> q;

        if(x<0) {return false;}
        while(x>0){
            int x = x/10;
            int n = 0;
            n%10;

            q.push(n);
            st.push(n);
        }
        while(!q.empty() && !st.empty())
        {
            if(q.front()!=st.front())
            {
                return false;
            }
            st.pop();
            q.pop();
        }
        return true;
        }
    
reverseString(string s)
{
    if(s.length()==1)
    {
        return s;
    }
    return reverseString(s.substring(1))+s[0];
}


bool isPalindrome(node* head)
{
    Node* slow = head;

    stack<int> s;

    while(slow!=nullptr)
    {
        s.push(slow->val)
        slow = slow->next;
    }
    while(head!=nullptr)
    {
        int index = st.top();

        s.pop();
        if(head->data != index)
        {
            return false;
        }
        head = head->next;
    }
    return true;
}

bool validBST(node* root)
{
    if(!root)return 0;

    if(root->left!=nullptr && root->left->val > root->val) return false;

    if(root->right!=nullptr && root->right->val < root->val) return false;


    if(!BST(root->left) || !BST(root->rigt))
    {
        return false;
    }

    return true;
}


bool isPalindrome(node* head)
{
    if(!head)return 0;

    node* slow = head;

    stack<int> s;

    while(slow!=nullptr)
    {
        s.push(slow->val);
        slow = slow ->next;
    }

    while(head!=nullptr)
    {
        int index = s.top();
        s.pop();
        if(head->val != index)
        {
            return false;
        }
        head = head->next;
    }
    return true;
}

int height(node* node)
{
    if(!node)return 0;
    return 1+max(height(root->left),height(root->right));
}
bool isBal(node* root)
{
    if(!root)return 1;

    int lh,rh;
    lh = height(root->left)
    rh = height(root->right)

    if(abs(lh-rh)<=1 && isBal(root->left) && isBal(root->right))
    {
        return 1;
    }
    return 0;
}

void PrintLeafs(node* root)
{
    if(!root)return 0;

    if(!root->left && !root->right)
    {
        cout << root->val;
        return 0;
    }
    if(root->left)
    {
        printLeafs(root->left);
    }
    if(root->right)
    {
        printLeafs(root->right)
    }
}

void BFS(int start, int n)
{
    bool *visited = new bool[n];
    for __introsort_loop
    visited[i] = false;

    queue<int> q;
    visited[start] = true;
    q.enqueue(start);

    list<int>iterator:: i;
    int temp;

    while(!q.empty())
    {
        temp = q.front();
        cout << temp;
        q.pop_front();
        for(i = adj[temp].begin();i!=adj[temp].end();++i)
        {
            if(visited[*i])
            {
                visited[*i]=true;
                q.enqueue(*i);
            }
        }
    }
}


int middleNode(node* head)
{
    node* slow = head;
    node* fast= head;

    if(head!=nullptr)
    {
        while(fast!=nullptr && fast->next!=nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        cout << slow->val;
    }
}

void printMiddleNode(node* head)
{
    node* slow = head;
    node* fast = head;
    if(head!=nullptr)
    {
        while(fast!=nullptr && fast->next!=nullptr)
        {
            fast = fast->next->next;
            slow = slow-next;
        }
        cout << slow->val;
    }
}

node* reverseLL(node* current)
{
    if(!current) return 0;
    if(current->next == nullptr)
    {
        head = current;
        return current;
    }
    node*temp = reverse(current->next);
    temp->next = current;
    current->next = nullptr;
    return current;
}

void middleNode(node* head)
{
    node* fast = head;
    node* slow = head;

    if(head!=null)
    {
        while(fast!=null && fast->next!=nullptr)
        {
            fast = fast-next->next;
            slow = slow->next;
        }
        cout << slow->val;
    }

}

void middleNOde(node* head)
{
    node* fast = head;
    node* slow = head;

    if(head!=nullptr)
    {
        while(fast!=nullptr && fast->next!=nullptr)
        {
            fast = fast->next->next;
            slow = slow - bext
        }
        cout slow->val
    }
}

void reverseLL(node* current)
{
    if(c==null)return 0;

    if(current->next==nullptr)
    {
        head = current;
        return current;
    }
    node* temp = reverse(current->next);
    temp->next = current;
    current->next = nullptr;
    return current;
}

void removeDuplicates(node* current)
{
    if(!current)return 0;
    while(current->next!=nullptr)
    {
        if(current->val == current->next->val)
        {
            node* nxt = current->next->next;
            delete(current->next)
            current->next = nxt;
        }
        current = current->next;
    }
}

void middleNode(node* head)
{
    node* slow = head;
    node* fast = head;

    if(head!=nullptr)
    {
        while(fast!=nullptr && fast->next!=nullptr)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        cout << slow->val;
    }
}

bool isPalindrome(node* head)
{
    ListNode* slow = head;
    stack<int> st;

    while(slow!=nullptr)
    {
        st.push(slow->val);
        slow = slow->next;
    }
    while(head!=nullptr)
    {
        int index = st.top();st.pop();
        if(index != head->val)
        {
            return false;
        }
        head = head->next;
    }
    return true;
}

void middleLinkedList(node* head)
{
    node* slow = head;
    node* fast = head;

    if(head!=nullptr)
    {
        while(fast!=nullptr && fast->next !=nullptr)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        cout << slow->val;
    }
}

bool isBST(node* root)
{
    if(!root)return 0;

    if(root->left!=nullptr && root->left->val > root->val) return false;
    if(root->right!=nullptr && root->right->val < root->val) return false;

    if(!isBST(root->left) || !isBST(root->right))
    {
        return false;
    }
    return true;
}

mid(node* head)
{
    node* fast = head;
    node* slow = head;

    if(head!=nullptr)
    {
        while(fast!=null && fast!=nullptr)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        cout << slow->val;
    }
}

void reverse(node* current)
{
    if(current==nullptr)return;
    if(current->next==nullptr)
    {
        head =current;
        return current;
    }
    node* temp = reverse(current->next);
    temp->next = current;
    current->next = nullptr;
    return current;
}

isPalindrome(node* head)
{
    node* slow = head;
    stack<int> st;

    while(slow!=nullptr)
    {
        st.push(slow->val);
        slow=slow->next;
    }

    while(head!=nullptr)
    {
        int index=st.top();st.pop();

        if(head->val!=index)
        {
            return false;
        }
        head = head->next;
    }
    return true;

}

bool isBst(node* root)
{
    if(!root)return 0;

    if(root->left!=nullptr && root->left->val > root->val)return false;
    if(root->right!=nullptr && root->right->val < root->val)return false;

    if(!isBST(root->left) || !isBST(root->right))
    {
        return false;
    }
    return true;
}


reverseLinkedList(node* current)
{
    if(current==nullptr)return;
    if(current->next==nullptr)
    {
        head=current;
        return current;
    }
    node* temp = reverse(current->next);
    temp->next = current;
    current->next = nullptr;
    return current;
}

reverseString (string s)
{
    if(s.length() == )1
    {
        return s;
    }
    return reverse(s.substring(1)) + s[0];
}

bool isPal(node* head)
{
    stack<int> st;
    node* slow = head;

    while(slow!=nullptr)
    {
        st.push(slow->val);
        slow = slow->next;
    }
    while(head!=nullptr)
    {
        int index = st.top();st.pop();
        if(head->val !=index)
        {
            return false;
        }
        head = head->next;
    }
    return true;
}


 vector<vector<int>>  v;

        if (root == NULL) {
            return v;
        }
        queue<TreeNode> q;

        q.push(root);
        q.push(NULL);

        vector<int> cur;

        while (!q.empty()) {
            TreeNode node = q.front();
            q.pop();

            if (node == NULL) {
                v.push_back(cur);

                cur.resize(0);

                if (q.size() != 0) {
                    q.push(NULL);
                }
            } else {
                cur.push_back(node->val);

                if (node->left != NULL) {
                    q.push(node->left);
                }

                if (node->right != NULL) {
                    q.push(node->right);
                }
            }
        }

        return v;
    }

    vector<vecto<int>> levelOrder(TreeNode* root)
    {
        vector<int>> v;
        if(root==nullptr)return v;

        vector<int> curr;

        queue<int> q;
        q.push(root);
        q.push(null);

        while(!q.empty())
        {
            TreeNode* node = q.front();q.pop();

            if(node==nullptr)
            {
                v.push_back(curr);

                curr.resize(0);

                if(q.size!=0)
                {
                    q.push(NULL);
                }
            }
            else{
                curr.push_back(node->val);
                if(node->left!=nullptr)
                {
                    q.push(node->left)
                }
                if(node->right!=nullptr)
                {
                    q.push(node->right);
                }
            }
        }
    }

    vector<vector<int>> LevelOrder(node* root)
    {
        vector<int> v;
        if(!root) return v;
        queue<int> q;
        q.push(root);
        q.push(nullptr);

        vector<int> curr;

        while(!q.empty())
        {
            TreeNode* node == q.front();q.pop();

            if(node==nullptr)
            {
                v.push_back(curr);

                curr.resize(0);

                if(q.size()!=0)
                {
                    q.push(NULL);
                }

            }
            else
            {
                curr.push_back(node->val);

                if(root->left != nullptr)
                {
                    q.push(node->left);
                }

                if(root->right !=nullptr)
                {
                    q.push(node->right);
                }
            }
        }
        return v;
    }

    reverse LinkedList(node * current)
    {
        if(!current) return;

        if(current->next==nullptr)
        {
            head =current;
            return current;
        }

        node* temp = reverse(current->next);
        temp->next = current;
        current->next =nullptr;
        return current;
    }


    find middle(node* head)
    {
        node* slow = head;
        node* fast = head;

        if(head!=nullptr)
        {
            while(fast!=nullptr && slow!=nullptr)
            {
                slow = slow->next;
                fast=fast->next->Next;
            }
            cout << slow->val;
        }
    }

    bool isPalindrome(node* head){
        if(!head)return;
        node* slow = head;

        stack<int> st;

        while(slow!=nullptr)
        {
            st.push(slow->val);
            slow = slow->next;
        }

        while(head!=nullptr)
        {
            int index = st.top();st.pop();

            if(head->val!=index)
            {
                return false'
            }
            head = head->next;
        }
        return true;
    }

    vector<vector<int>> LevelOrder(node* root)
    {
        vector<int> v;
        if(!root)return v;


        queue<TreeNode> q;

        q.push(root);
        q.push(nullptr);
        vector<int> curr;

        while(!q.empty())
        {
            TreeNode node = q.front();q.pop();
            if(node==nullptr)
            {
                v.push_back(curr);

                curr.resize(0);
                
                if(q.size()!=0)
                {
                    q.push(nullptr);
                }
            }
            else{
                curr.push_back(node->val)

                if(root->left!=nullptr)
                {
                    q.(root->left);
                }
                if(node->right!=nullptr)
                {
                    q.(root->right);
                }
        }
        return v;
        }

        vector<vector<int>> levelorder(TreeNode* root)
        {
            vector<int> v;

            if(!root)return v;

            queue<int> q;
            q.push(root);
            q.push(null);

            vector<int> curr;
            while(!q.empty())
            {
                TreeNode* node = q.front();q.pop();
                if(node==nullptr)
                {
                    v.push_back(curr); //VECTOR

                    curr.resize(0);

                    if(q.size()==0)
                    {
                        q.push(nullptr);
                    }
                }
                else{
                    curr.push_back(node->val); //CURR

                    if(node->left !=nullptr)
                    {
                        q.push(node->left);
                    }
                    if(node->right !=nullptr)
                    {
                        q.push(node->right);
                    }
                }
            }
            return v;
        }


        vector<vector<int>> levelorder(TreeNode* root)
        {
            vector<int> v;
            if(!root)return v;

            queue<TreeNode> q;

            q.push(root);
            q.push(nullptr);
            vector<int> curr;
            while(!q.empty())
            {
                TreeNode* node = q.front();q.pop();

                if(node==nullptr)
                {
                    v.push_back(curr);
                    curr.resize(0);

                    if(q.size()==0)
                    {
                        q.push(null);
                    }
                    else{
                        curr.push_back(node->val);

                        if(!node->left)
                        {
                            q.push(node->val);
                        }
                        if(!node->right)
                        {
                            q.push(node->val)
                        }
                    }
                }
            }
            return v;
        }


        vector<vector<int>> LevelOrder(node* root)
        {
            vector<int> v;

            if(!root)return v;

            queue<int> q;
            q.push(root);
            q.push(nullptr)


            vector<int> curr;

            if(!q.empty())
            {
                TreeNoDE* node = q.front();q.pop();
                if(node==nullptr)
                {
                    v.push_back(curr);

                    curr.resize(0);

                    if(q.size==0)
                    {
                        q.push(null);
                    }
                }
                else{
                    curr.push_back(node->val);

                    if(!node->left)
                    {
                        q.push(node->val);
                    }
                    if(!node->right){
                        q.push(node->val);
                    }
                }
            }
            return v;
        }
bool isPalindrom(TreeNode* head)
{
    node* slow = head;
    stack<int> st;

    while(slow!=nullptr)
    {
        q.push(slow->val);
        slow=slow->next;
    }
    while(head!=nullptr)
    {
        int index= st.top();st.pop();

        if(head->next!=nullptr)
        {
            return false;
        }
        head = head->next;
    }
    return true;
}

int middleLinkedList(node* head)
{
    node* slow = head;
    node* fast= head;

    if(head!=nullptr)
    {
        while(fast!=nullptr && fast->next!=nullptr)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow->val;
    }
}

node* reverse(node* current)
{
    if(!current)return;
    if(current->next==null)
    {
        head =current;
        return current;
    }
    node* temp = reverse(current->next)
    temp->next = current;
    current = nullptr;
    return current;

}

bool validBST(node* root)
{
    if(!root)return;

    if(root->left!=nullptr && root->left->val > root->val)return false;
    if(root->right!=nullptr && root->right->val < root->val)return false;

    if(!isBST(root->left) || !isBST(root->right))
    {
        return false;
    }
    return true;
}

Symmetrical(node* root)
{
    isMirror(root,root)''
}

bool isMirror(root* a, root* b)
{
    if(!a && !b){return true;}
    if(a && b && a->val == b->val)
    {
        return isMirror(a->left,b->right) && isMirror(a->right,b->left);
    }
    return false;
}

vector<vector<int>> levelorder(treenode* root)
{
    queue<TreeNode> q;

    vector<vector<int> v;

    if(!root)return v;

    q.push(root);
    q.push(nullptr);

    vector<int> curr;
    while(!q.empty())
    {
        TreeNode* node = q.front();q.pop();

        if(node==nullptr)
        {
            v.push_back(curr);

            curr.resize(0);

            if(q.size()==0)
            {
                q.push(nullptr);
            }
            else{
                curr.push_back(node->val);

                if(!node->left)
                {
                    q.push(node->val);
                }
                if(!node->right)
                {
                    q.push(node->val);
                }
            }
        }
    }
    return v;
}

reverseLinked List(string s)
{
    if(s.length() == 1)
    {
        return s;
    }
    return reverseLinkedList(s.substring(1)) + s[0];
}

TreeNode* searchBST(node* root)
{
    if(!root || root->val == val)
    {
        return root;
    }
    if(root->val<val)
    {
        return searchBST(root->right, val);
    }
    if(root->val>val)
    {
        return searchBST(root->left,val);
    }
}

vector<vector<int>> LevelOrder(TreeNode* root)
{
    vector<vector<int>> v;

    if(!root)return v;

    queue<TreeNode> q;
    q.push(root);
    q.push(null);
    vector<int> curr;

    while(!q.empty())
    {
        TreeNode* node = q.front();q.pop();

        if(node==nullptr)
        {
            v.push_back(curr);

            curr.resize();

            if(q.size()==0)
            {
                q.push(nullptr);
            }
            else{
                curr.push_back(node->val);

                if(!node->left)
                {
                    q.push(val);
                }
                if(!node->right)
                {
                    q.push(val);
                }
            }
        }

    }
    return v;
}

isMirror(node* a,node* b)
{
    if(!a&&!b)return true;

    if(a && b a->val==b->val)
    {
        return isMirror(a->left,a->right) && isMirror(a->left,b->right);
    }
}

reversedLinked (node* current)
{
    if(!current)return;
    if(current->next==nullptr)
    {
        head = current;
        return current;
    }

    node* temp = reverse(current->Next);
    temp->next=current;
    current->next= current;
    return current;
}

bool isPalindrome(node* head)
{
    if(head==nullptr)return;
    node* slow = head;
    stack<int> st;
    while(slow!=nullptr)
    {
        st.push(slow->val)
        slow=slow->next;
    }
    while(head!=nullptr)
    {
        node* temp = st.top();st.pop();
        if(head->val!=temp)
        {
            return false;
        }
        head = head->next;
    }
    return true;
}
    

bool validBST(node* root)
{
    if(!root)return;

    if(root->left!=nullptr && root->left->val > root->left)return false;
    if(root->right!=nullptr && root->right->val < root->right)return false;

    if(!isBST(root->left)|| !isBST(root->right))
    {
        return false;
    }
    return true;
}

search BST(node* root,int val)
{
    if(root == NULL || root->val == val)
    {
        return root;
    }

    if(root->val < val)
    {
        return searchBST(root->left, val);
    }
    else
    {
        return searchBST(root->right, val);
    }
}

reverseString(string s)
{
    if(s.length()==1)
    {return 1}
    return reverseString(s.substring(1))+s[0];
}

isBal(node *root)
{
    if(!root)return 1;

    int lh,rh;
    lh = height(r->left)
    rh = height(r->right)

    if(abs(lh-rh)<=1 && isBal(root->left) && isBal(root->right))
    {
        return 1;
    }
    return false;

}

itn height(node* node)
{
    if(!node)return;

    return 1+max(height(root->left),height(root->right))
}

deleteDuplicates(node* head)
{
    if()
}

vector<vector<int>> Levelorder(node* root)
{
    vector<vector<int> v;
    if(!root)return v;

    queue<TreeOrder> q;
    q.push(root)
    q.push(null)

    while(!q.empty())
    {
        TreeNode* temp = q.front();q.pop();

        if(node==null)
        {
            v.push_back(curr);
            curr.resize(0);

            if(q.size()==0)
            {
                q.push(nullptr);
            }
            else{
                curr.push_back(v);

                if(!node->left || !node->right)
                {
                    q.push(root->val);
                }
            }
        }
    }
    return v;
}


