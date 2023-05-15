#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
typedef struct node NODE;
typedef NODE *TREE;
void newtree(TREE &t)
{
    t = NULL;
}
void add_to_tree(TREE &t, int x)
{
    if (t == NULL)
    {
        NODE *p = new NODE;
        p->data = x;
        p->left = NULL;
        p->right = NULL;
        t = p;
    }
    else
    {
        if (x < t->data)
        {
            add_to_tree(t->left, x);
        }
        else if (x > t->data)
        {
            add_to_tree(t->right, x);
        }
    }
}
void input(TREE &t)
{
    int n;
    cin >> n;
    // vector<int> v;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        // v.push_back(x);
        add_to_tree(t, x);
    }
}
void NRL(TREE &t)
{
    if (t != NULL)
    {
        cout << t->data << " ";
        NRL(t->right);
        NRL(t->left);
    }
}

int main()
{
    // freopen("TREE.INP", "r", stdin);
    // freopen("TREE.OUT", "w", stdout);
    TREE t;
    newtree(t);
    input(t);
    NRL(t);
    return 0;
}