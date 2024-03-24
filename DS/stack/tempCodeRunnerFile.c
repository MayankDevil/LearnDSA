nt strlen(char *arr){
    int i;
    for(i=0; arr[i]='\0'; i++);
    return i;
}