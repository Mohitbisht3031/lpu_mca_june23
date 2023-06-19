#include<bits/stdc++.h>

using namespace std;

// single
class A{};
class B : public A{};

// Hierarchical
class A{};
class B:public A{};
class C:public A{};

//multiple
class A{};
class C{};
class B:public A , public C{};

// hybrid
class A{};
class B : public A{};
class C : public A{};
class D : public B, public C{};

int main(){
    return 0;
}