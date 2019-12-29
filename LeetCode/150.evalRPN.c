typedef struct _stack{
    int top;
    int capacity;
    int* array;
}stack;

stack* create_stack(int capacity){
    stack* s=(stack*)malloc(sizeof(stack));
    s->top=-1;
    s->capacity=capacity;
    s->array=(int*)malloc(sizeof(int)*capacity);
    return s;
}

void push(stack* s,int item){
    if(s->top == s->capacity-1)
        return;
    s->array[++s->top]=item;
}

int pop(stack* s){
    if(!s)
        return;
    return s->array[s->top--];
}

int evalRPN(char ** tokens, int tokensSize){
    stack* s=create_stack(tokensSize);
    int a,b;
    for(int i=0;i<tokensSize;i++){
        if(tokens[i][0] == '+'){
            a=pop(s);
            b=pop(s);
            push(s,a+b);
        }
        else if(tokens[i][0] =='-' && tokens[i][1] == 0){
            a=pop(s);
            b=pop(s);
            push(s,b-a);}
        else if(tokens[i][0] == '*'){
            a=pop(s);
            b=pop(s);
            push(s,a*b);}
        else if(tokens[i][0] == '/'){
            a=pop(s);
            b=pop(s);
            push(s,b/a);}
        else
            push(s,atoi(tokens[i]));
    }
    return s->array[0];
}
