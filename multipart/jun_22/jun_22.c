#include <stdio.h>

/* struct thething{
    int x=0;    Here, I was looking up various things and most of them say that you were right to use this setup, so I changed it back...for now.
};

Because I genuinely don't see why I would use a structure here. The final, since it's about a card game then yes, but I don't see it on this one.

*/

int main(){
/*  Node top;
    top.left=malloc(sizeof(Node));
    top.right=malloc(sizeof(Node));
    top.left->x;
    top.left->left=malloc(sizeof(Node));
    top.left->right=malloc(sizeof(Node));
    top.left->left->x;
  */  
//    struct thething node; Pretty much any code I don't want to use or don't have time to remove gets turned into a comment.
    int a;
    scanf("%d", &a);
    int* p= &a;
    int *q= p;
    int *r= p;
    int *s= q;
    int *t= q;
    int *u= r;
    int *v= r;
    printf("p = %d\n", *p);
    printf("q = %d\n", *q);
    printf("r = %d\n", *r); 
    printf("s = %d\n", *s);
    printf("t = %d\n", *t);
    printf("u = %d\n", *u);
    printf("v = %d\n", *v);
    //Since it said that each one should print them individually
    return 0;
}
