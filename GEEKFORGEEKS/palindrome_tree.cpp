#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<stack>

using namespace std;

struct Node
{
 struct Node *lchild;
 int data;
 struct Node *rchild;
};
struct Queue
{
 int size;
 int front;
 int rear;
 struct Node **Q;
};
void create(struct Queue *q,int size)
{
 q->size=size;
 q->front=q->rear=0;
 q->Q=(struct Node **)malloc(q->size*sizeof(struct
Node *));
}
void enqueue(struct Queue *q,struct Node *x)
{
 if((q->rear+1)%q->size==q->front)
 printf("Queue is Full");
 else
 {
 q->rear=(q->rear+1)%q->size;
 q->Q[q->rear]=x;
 }
}
struct Node * dequeue(struct Queue *q)
{
 struct Node* x=NULL;

 if(q->front==q->rear)
 printf("Queue is Empty\n");
 else
 {
 q->front=(q->front+1)%q->size;
 x=q->Q[q->front];
 }
 return x;
}
int isEmpty(struct Queue q)
{
 return q.front==q.rear;
}




struct Node *root=NULL;
void Treecreate()
{
 struct Node *p,*t;
 int x;
 struct Queue q;
 create(&q,100);

 printf("Enter root value ");
 scanf("%d",&x);
 root=(struct Node *)malloc(sizeof(struct Node));
 root->data=x;
 root->lchild=root->rchild=NULL;
 enqueue(&q,root);

 while(!isEmpty(q))
 {
 p=dequeue(&q);
 printf("enter left child of %d ",p->data);
 scanf("%d",&x);
 if(x!=-1)
 {
 t=(struct Node *)malloc(sizeof(struct
Node));
 t->data=x;
 t->lchild=t->rchild=NULL;
 p->lchild=t;
 enqueue(&q,t);
 }
 printf("enter right child of %d ",p->data);
 scanf("%d",&x);
 if(x!=-1)
 {
 t=(struct Node *)malloc(sizeof(struct
Node));
 t->data=x;
 t->lchild=t->rchild=NULL;
 p->rchild=t;
 enqueue(&q,t);
 }
 }
}
void Preorder(struct Node *p)
{
 if(p)
 {
 printf("%d ",p->data);
 Preorder(p->lchild);
 Preorder(p->rchild);
 }
}
void Inorder(struct Node *p)
{
 if(p)
 {
 Inorder(p->lchild);
 printf("%d ",p->data);
 Inorder(p->rchild);
 }
}
void Postorder(struct Node *p)
{
 if(p)
 {
 Postorder(p->lchild);
 Postorder(p->rchild);
 printf("%d ",p->data);
 }
}

struct Node* search(struct Node *p,int key)
{

    if(p==NULL)
        return NULL;
    if(p->data==key)
        return p;
    else if(key<p->data)
    {
         search(p->lchild,key);
    }
   else
    search(p->rchild,key);

}

int search1(struct Node *p,int key){
    if(p==NULL)
    return -1;
    if(p->data==key)
    return 1;
    else if(key<p->data){
        search1(p->lchild,key);
    }
    else{
        search1(p->rchild,key);
    }
   return -1;
}


void insert(struct Node *p,int key)
{
    struct Node *r=NULL,*e;

    while(p!=NULL)
    {
        r=p;
        if(p->data==key)
            return ;
        else if(key<p->data)
        {
            p=p->lchild;
        }
        else
            p=p->rchild;
    }
    e=(struct Node*)malloc(sizeof(struct Node));
    e->lchild=r->rchild=NULL;
    e->data=key;

    if(key<r->data)
        r->lchild=e;
    else
        r->rchild=e;

}

void delete1(struct Node *p,int val){
    struct Node *q=search(p,val);
    if(q==NULL)
    printf("No such node present\n");
    
    else{
        while(p){
            if(p->data==val && p->lchild==NULL && p->rchild==NULL){
                        free(p);
            }
        }
    }

}
int main()
{
 Treecreate();
 Preorder(root);
 printf("\nPost Order ");
 Postorder(root);

 /*struct Node *q=search(root,100);

 if(q==NULL)
    printf("\nElement not found");
 else
    printf("\nElement found");*/

    //insert(root,10);
    //Preorder(root);
    //delete(root,10);
    //Preorder(root);

    if(search1(root,10)==-1)
    printf("No such node present");
    else
    printf("Found");
   
   stack<Node *>stk1,stk2;

   if(root->lchild==NULL && root->rchild==NULL)
   cout<<"Palindrome"<<endl;

   stk1.push(root->lchild);
   stk2.push(root->rchild);
   int flag=0;

    while(!stk1.empty() && !stk2.empty()){

        struct Node* left=stk1.top();
        stk1.pop();
        struct Node* right=stk2.top();
        stk2.pop();

        if(left->data!=right->data)
        {
           cout<<"Not palindormic";
           flag=1;
           break;
        }
        if(!left && !right)
        continue;

        else if(!left || !right){
        cout<<"Not Palindromic";
        flag=1;
        break;
        }
    }
  if(flag==0)
  cout<<"Palidrmoic";

 return 0;
}