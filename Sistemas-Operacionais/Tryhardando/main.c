#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
struct no{
    char en[5];
    struct no *next;
};
typedef struct no No;
struct pilha{
    No *top;
};
typedef struct pilha Pilha;
Pilha *criaPilha(){
    Pilha *p = (Pilha*) malloc(sizeof(Pilha));
    p->top = NULL;
    return p;
}
void pilha_push(Pilha *t,char *em){
    No *p = (No*) malloc(sizeof(No));
    strcpy(p->en,em);
    p->next = t->top;
    t->top = p;
}
char *pilha_pop(Pilha *t){
    char *tempNa = malloc(8 * sizeof(char));
    strcpy(tempNa,t->top->en);
    No *temp = t->top->next;
    free(t->top);
    t->top = temp;
    return tempNa;
}
int check_pilha(Pilha *p){
    return(p->top == NULL);
}
void read_con(char ep[]){

    char *i = &ep[0];
    Pilha *p = criaPilha();

    while(*i != '\0' || *i != NULL){

        if(*i = ' ' ){ /* pula os espaços */
            i++;
        }
        /*
        if(*i == '('){ // deal with parentesis
            pilha_push(p,*i);
            i++;
           }
        if(*i == ')'){
            strcat(n1,pilha_pop(t));
                while(n1 != '('){
                        *p = &n1;
                        p++;
                        n1 = &pilha_pop(t);
                        i++;
                      }
            }
        }
        */
        if(isOp(*i)){
            if(check_pilha(t)){
                push_pilha(t,*i);
            }
        else{
            strcat(n1,pilha_pop(t));
                while(Prioridade((n1)) >= Prioridade(*i)){
                    *p = n1;
                    p++;
                    strcat(n1,pop(t));
                }
                push(t,n1);
                push(t,*i);
            }
            i++;
        }
        while(!check_pilha(t)){
            strcat(n1,pilha_pop(t));
            *p = n1;
            p++;
        }
}
int isOp(char i){
    if(i == '+' || i == '-' || i == '*' || i == '/'){
        return 1;
    }
    return 0;
}
int Prioridade(char i){
    int pri=0;
    switch(i){
        case '+': pri = 1; break;
        case '-': pri = 1; break;
        case '*': pri = 2; break;
        case '/': pri = 2; break;
    }
    return pri;
}
void print_to_zero_end(char *equ){
    char blacklist[50];
    int flag;
    char *i = &equ[0];

    while(*i != NULL || *i != '\0'){
        if(isOp(*i) != 1){
            flag = 0;
            printf("PUSH %s",*i);
        }
        flag++;
            if(flag == 1){

            }

    }

}
void print_op(char *i){
    switch(i){
    case '+' : printf("ADD"); break;
    case '-' : printf("SUB"); break;
    case '*' : printf("MUL"); break;
    case '/' : printf("DIV"); break;
    }
}
int main()
{
   // char ep[] = "1A + 2B * 3C";
    Pilha *p = criaPilha();
    pilha_push(p,"1A");
    pilha_push(p,"+");
    pilha_push(p,"2B");
    pilha_push(p,"*");
    pilha_push(p,"3C");

    printf("%s",p->top->en);

   // printf("-%s-",pilha_pop(p));
    return 0;
}



