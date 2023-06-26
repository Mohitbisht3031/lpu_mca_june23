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

Lnode* middle(Lnode*h){
    if(!h)return h;
    Lnode*s = h;
    Lnode*f = h->next;

    while(f){
        if(!f->next)return s->next;
        s = s->next;
        f = f->next->next;
    }
    return s;
}

Lnode* rotate(Lnode*h,int k){
    if(!h)return h;
    int l = 1;
    Lnode*t = h;
    while(t->next){
        l++;
        t= t->next;
    }

    t->next = h;

    t = h;
    for(int i = 0;i< l - (k%l) - 1 ;i++){
        t = t->next;
    }

    h = t->next;
    t->next = NULL;
    
    return h;
}

Lnode* merge(Lnode*l1,Lnode*l2){
    if(!l1 || !l2){
        return (l1 == NULL ? l2 : l1);
    }
    Lnode*fh = new Lnode(0);
    Lnode*t = fh;
    while(l1 && l2){
        if(l1->data <= l2->data){
            t->next = l1;
            t = l1;
            l1 = l1->next;
        }else{
            t->next = l2;
            t = l2;
            l2 = l2->next;
        }
    }

    while(l1){
        t->next = l1;
        t = l1;
        l1 = l1->next;
    }

    while(l2){
        t->next = l2;
        t = l2;
        l2 = l2->next;
    }
    t->next = NULL;
    return fh->next;
}

Lnode* swap(Lnode* l,int i,int j){
    if(!l || i == j)return l;
    Lnode*t1 = NULL;
    Lnode*t2 = NULL;
    Lnode*t = l;
    while(t){
        if(i == 1){
            t1 = t;
        }
        if(j == 1){
            t2 = t;
        }
        if(t1 && t2)break;
        t = t->next;
        i--;
        j--;
    }
    int d = t1->data;
    t1->data = t2->data;
    t2->data = d;
    return l;
}

Lnode* cycleNode(Lnode*h){
    if(!h)return h;
    Lnode*t = h;
    unordered_map<Lnode*,int>mp;
    while(t){
        if(mp.count(t)){
            return t;
        }
        mp[t]++;
        t = t->next;
    }

    return NULL;
}


Lnode* cycleNode(Lnode*h){
    if(!h)return h;
    Lnode*f =  h;
    Lnode*s = h;
    while(f){
        if(!f->next)return NULL;

        s = s->next;
        f = f->next->next;

        if(s == f)break;    
    }

    if(f == s){
        s = h;
        while(s != f){
            s = s->next;
            f = f->next;
        }
        return s;
    }

    return NULL;
}


int main(){

    return 0;
}