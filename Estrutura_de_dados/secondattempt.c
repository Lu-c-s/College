
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 50
struct express_tree
{
    char ch;
    struct express_tree *left,*right;
};
struct stack
{
    struct express_tree **array;
    int top;
};
/*...................................................................*/
struct stack* create_stack()
{
    struct stack *st=(struct stack *)malloc(sizeof(struct stack));
    st->array=malloc(sizeof(struct express_tree)*SIZE);
    return st;
}
/*...................................................................*/
int is_empty_stack(struct stack *s)
{
    return(s->top==-1);
}
/*...................................................................*/
int is_full_stack(struct stack *s)
{
    return(s->top==SIZE-1);
}
/*...................................................................*/
void push(struct stack *s,struct express_tree *new)
{
    if(is_full_stack(s))
        return;
    s->array[++s->top]=new;
}
/*...................................................................*/
struct express_tree* pop(struct stack *s)
{
    if(is_empty_stack(s))
        return NULL;
    return s->array[s->top--];
}
/*......................................................................*/
void delete_stack(struct stack *s)
{
    if(s)
    {
        if(s->array)
            free(s->array);
        free(s);
    }
}
/*......................................................................*/
void delete_express_tree(struct express_tree *expression)
{
    if(expression)
    {
        delete_express_tree(expression->left);
        delete_express_tree(expression->right);
        free(expression);
    }
}
/*......................................................................*/
void display_tree(struct express_tree *root)
{
    if(root)
    {
        display_tree(root->left);
        display_tree(root->right);
        printf("%c\n",root->ch);
    }
}
/*......................................................................*/
struct stack* tree_making(char str[])
{
    struct stack *s=create_stack();
    struct express_tree *new_node,*t2,*t1,*new;
    int i;
    for(i=0; i<strlen(str); i++)
    {
        if(isalpha(str[i]))
        {
            new_node=malloc(sizeof(struct express_tree));
            new_node->ch=str[i];
            new_node->left=new_node->right=NULL;
            push(s,new_node);
        }
        else
        {
            t2=pop(s);
            t1=pop(s);
            new=malloc(sizeof(struct express_tree));
            new->ch=str[i];
            new->left=t1;
            new->right=t2;
            push(s,new);
        }
    }
    return s;
}
/*......................................................................*/
int main()
{
    struct express_tree *temp;
    struct stack *s;
    char str[SIZE];
    printf("\nenter any postfix expression ");
    fgets(str,SIZE,stdin);
    s=tree_making(str);
    temp=pop(s);
    printf("expression tree\n");
    display_tree(temp);
    delete_express_tree(temp);
    delete_stack(s);
    return 0;
}
