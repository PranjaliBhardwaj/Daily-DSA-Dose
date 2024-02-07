/* 
  1
  2 3
  4 5 6  */

void nNumberTriangle(int n) {
    int count = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}

/*
A
A B
A B C  */
void nLetterTriangle(int n) {
    for(int i=0; i<n; i++){
        for(char ch='A'; ch<='A'+i; ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void alphaRamp(int n) {
    
   for(int i=0; i<n; i++){
        char ch='A'+i;
           for(int j=0; j<=i; j++){
                cout<<ch<<" ";
           }
        
        cout<<endl;
    }
}


/* 
A B C
A B
A        */
void nLetterTriangle(int n) {
   for(int i=0; i<n; i++){
        for(char ch='A'; ch<='A'+n-i-1; ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}


/* A
   B B
   C C C  */
void alphaRamp(int n) {
    
   for(int i=0; i<n; i++){
        char ch='A'+i;
           for(int j=0; j<=i; j++){
                cout<<ch<<" ";
           }
        
        cout<<endl;
     
    }
}




