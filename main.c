#include<stdio.h>
#include<stdlib.h>
#include<string.h>

double get_double(){
    return 13.1;
}

int main(int argc, char *argv[])
{
    double x = get_double();
    double y = get_double();
    
    if(x==y){
      printf("X eqqual Y");
    }else{
      printf("X not eqqual Y");
    }
    return 0;
}
