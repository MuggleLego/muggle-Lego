//given two jugs with capacities x and y litres.
//determine whether it is possible to measure exactly z litres using these two jugs.

int gcdIter(int a,int b){
        if(a==0 || b==0)
            return 0;
        while(a%b){
                int m=a%b;
                a=b;
                b=m;
        }
        return b;
}

bool canMeasureWater(int x, int y, int z){
    int tmp=gcdIter(x,y);
    if(tmp==0){
        if(z!=x && z!=y)
            return false;
        else
            return true;
    }
    return z==0 || (z<=x+y && z%tmp==0) ;
}
