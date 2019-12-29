bool isValid(char * s){
    int top=0;
    if(s[0]==']' || s[0]=='}' ||s[0]==')')
        return false;
    if(s==NULL || s[0]=='\0')
        return true;
    char* stack=(char*)malloc(strlen(s)+1);
    for(int i=0;s[i];i++){
        if(s[i]=='[' || s[i]=='{' || s[i]=='(')
            stack[top++]=s[i];
        else{
            --top;
            if(top<0) return false;//there is no entry in the stack(that can be matched)
            if(s[i]=='}' && stack[top]!='{') return false;
            if(s[i]==']' && stack[top]!='[') return false;
            if(s[i]==')' && stack[top]!='(') return false;
        }
    }
    return (!top);
}
