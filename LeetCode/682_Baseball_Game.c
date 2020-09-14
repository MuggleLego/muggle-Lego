int calPoints(char ** ops, int opsSize){
    int top=0;
    int stack[opsSize];
    for(int j=0;j<opsSize;j++){
        stack[j]=0;//initialize
    }
    for(int i=0;i<opsSize;i++){
        if(ops[i][0]=='C'){
            stack[--top]=0;
        }
        else if(ops[i][0]=='D'){
            stack[top]=2*stack[top-1];
            top++;
        }
        else if(ops[i][0]=='+'){
            stack[top]=stack[top-1]+stack[top-2];
            top++;
        }
        else{
            stack[top++]=atoi(ops[i]);
        }
    }
    int ret=0;
    for(int j=0;j<opsSize;j++){
        ret+=stack[j];
    }
    return ret;
}
