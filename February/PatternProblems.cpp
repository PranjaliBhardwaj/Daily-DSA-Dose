/*     * * * *
       * * * *
       * * * *
       * * * *       */
for(int i=0; i<n; i++) {
for(int j=0; j<n; j++) {
cout<<"* ";
}
cout<<endl;
}


/*     * 
       * *
       * * * 
       * * * *
       * * * * *      */
for(int i=0; i<n; i++) {
for(int j=0; j<=i; j++) {
cout<<"* ";
}
cout<<endl;
}



/*   1
     0 1
     1 0 1  */
void nBinaryTriangle(int n) {
    int star=1;
    for(int i=0; i<n; i++){
        if(i%2 == 0){
                star = 1;
            } else {
                star=0;
            }
        for(int j=0; j<=i; j++){
            
            cout<<star<<" ";
        star= 1-star;
        }
        cout<<endl;
    }
}




/*    1
      1 2
      1 2 3
      1 2 3 4     */
for(int i=1; i<=n; i++) {
for(int j=1; j<=i; j++) {
cout<<j<<" ";
}
cout<<endl;
}

/*    1
      2 2
      3 3 3
      4 4 4 4     */
void triangle(int n) {
	for(int i=1; i<=n; i++) {
for(int j=1; j<=i; j++) {
cout<<i<<" ";
}
cout<<endl;
}

}

/*    * * * *
      * *
      *
          */
void seeding(int n) {
	for(int i=1; i<=n; i++) {
for(int j=1; j<=n-i+1; j++) {
cout<<"* ";
}
cout<<endl;
}
}

/*
1         1
1 2     2 1
1 2 3 3 2 1 */
void numberCrown(int n) {
    int space = 2*(n-1);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        for(int j=1; j<=space; j++){
            cout<<" ";
        }
        for(int j=i; j>=1; j--){
            cout<<j;
        }
        cout<<endl;
        space -= 2;
    }
}






