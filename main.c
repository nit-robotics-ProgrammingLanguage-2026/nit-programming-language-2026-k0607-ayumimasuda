count = 0;
for(i = 0; i <= 50; i++){
    for(j = 0; j <= 50; j++){
        if(i != j && i + j == n){
            count++;
        }
    }
}