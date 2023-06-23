#include<bits/stdc++.h>
using namespace std;

class Lnode{
    public:
    int data;
    Lnode*next;

    Lnode(int data = 0){
        this->data = data;
        this->next = NULL;
    }

};

// recursive approach
// Lnode* make(){
//     int v;
//     cin>>v;
//     if(v == -1)return NULL;
//     Lnode*h = new Lnode(v);
//     h->next = make();
//     return h;
// }

// iterative approach
Lnode* make(){
    int v;
    cin>>v;
    Lnode*h = NULL;
    Lnode*cp = NULL;

    while(v != -1){
        if(h == NULL){
            h = new Lnode(v);
            cp = h;
        }else{
            cp->next = new Lnode(v);
            cp = cp->next;
        }
        cin>>v;
    }

    return h;
}

// recursive
void print(Lnode*h){
    if(!h)return ;
    cout<<h->data;
    if(h->next)cout<<"->";
    print(h->next);
}

// iterative approach
// void print(Lnode*h){
//     if(!h)return ;

//     Lnode*t = h;
//     while(t){
//         cout<<t->data;
//         if(t->next){
//             cout<<"->";
//         }
//         t = t->next;
//     }
//     return ;
// }

// recursive approach
int size(Lnode*h){
    if(!h)return 0;
    return size(h->next)+1;
}

// iterative approach
// int size(Lnode*h){
//     if(!h)return 0;
//     int c = 0;
//     Lnode*t = h;
//     while(t){
//         c++;
//         t = t->next;
//     }
//     return c;
// }
// recursive approach
Lnode* insert(Lnode*h,int i,int d){
    if(i == 1){
        Lnode* nh = new Lnode(d);
        nh->next = h;
        return nh;
    }
    h->next = insert(h->next,i-1,d);
    return h;
}

// iterative appraoch
// Lnode* insert(Lnode*h,int i,int d){
//     if(!h)return h;
//     if(i == 1){
//         Lnode* nh = new Lnode(d);
//         nh->next = h;
//         return nh;
//     }
//     Lnode*t = h;
//     int c = 0;
//     while(t && c < i-2){
//         t = t->next;
//         c++;
//     }

//     if(t){
//         Lnode*n = new Lnode(d);
//         n->next = t->next;
//         t->next = n; 
//     }
//     return h;
// }

Lnode* Delete(Lnode*h,int i){
    if(!h)return h;
    if(i == 1)return h->next;

    int c = 0;
    Lnode*t = h;
    while(t && c <i-2){
        t = t->next;
        c++;
    }

    if(t && t->next){
        t->next = t->next->next;
    }

    return h;
}

int main(){
    Lnode*head = make();
    cout<<endl;
    print(head);
    cout<<endl;
    // cout<<"size of the given linked list is "<<size(head)<<endl;
    cout<<endl;
    head = insert(head,2,6);
    print(head);
    cout<<endl;
    // Delete(head,2);
    // print(head);
    return 0;
}