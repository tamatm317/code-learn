#include <iostream>
#include <cstdio>
using namespace std;
struct node
{
    int data;
    struct node *left = NULL;
    struct node *right = NULL;
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
        NODE *p = (NODE *)malloc(sizeof(NODE));
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
    int n, x;
    cin >> n;
    while (n--)
    {
        cin >> x;
        add_to_tree(t, x);
    }
}
void LNR(TREE t)
{
    if (t == NULL)
        return;
    LNR(t->left);
    cout << t->data << " ";
    LNR(t->right);
}
int main()
{
    freopen("TREE.INP", "r", stdin);
    freopen("TREE.OUT", "w", stdout);
    TREE t;
    newtree(t);
    input(t);
    LNR(t);
    return 0;
}
