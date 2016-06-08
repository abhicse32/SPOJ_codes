#include<iostream>
#include<string>
#include<vector>
using namespace std;
typedef struct Stack_ {
          char data;
          struct Stack_* link;

} Stack;

Stack* stack_push( Stack* st, char val );
Stack* stack_pop( Stack* st );
void RPN(const string *str,int n);

int main(){
          int n;
          cin >> n;
          string *str=new string[n];
          int i=0;
          cin.get();
          while(i<n ) 
          getline(cin,str[i++]);
          RPN(str,n);
          
}

void RPN(const string*str,int n){
        int i,j;
        vector<char>* str2;
        char ch;
        Stack *st=NULL;
        str2=new vector<char>[n];
         for(i=0;i<n;i++){
                  for( j=0;j<str[i].length();j++){
                 if(isalpha(str[i][j])) 
                 str2[i].push_back(str[i][j]);
                 else if(str[i][j]=='*' || str[i][j]=='+'|| 
                 str[i][j]=='-' || str[i][j]=='/' || str[i][j]=='^' || str[i][j]=='(')
                    st=stack_push(st,str[i][j]);
                else {
                     while((ch=st->data )!='('){
                        if(ch=='+' || ch=='*' || ch=='-'|| ch=='/'  || ch=='^')
                        str2[i].push_back(ch);
                         st=stack_pop(st);    
                       }
                       st=stack_pop(st);
                }
             }
             while(st!=NULL) {
                 ch=st->data;
                    if(ch=='+' || ch=='*' || ch=='-'|| ch=='/'  || ch=='^')
                    str2[i].push_back(ch);
                    st=stack_pop(st);
             }
               
        }
        cout <<endl;
        for(i=0;i<n;i++)
        {
            for(j=0;j<str2[i].size();j++)
            cout << str2[i][j];
            
        cout <<endl;
        }
        return;
}
// Inserts @val to the top of the stack
Stack* stack_push( Stack* st, char val )
{
      Stack*p=st;
    Stack*q= new Stack;
      q->data=val;
      q->link=NULL;
      if(p==NULL)
         st=q;
    else{
         q->link=st;
         st=q;
      }
      return st;
}

// Remove the element at the top of the stack - also frees memory
Stack* stack_pop( Stack* st )
{
    Stack*p=st;
    st=p->link;
    delete p;
    return st;
}
