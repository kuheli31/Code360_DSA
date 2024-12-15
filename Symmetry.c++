void symmetry(int n) {

    // Write your code here.

    for(int i=0;i<n;i++){

        for(int j=0;j<i;j++){

            cout<<"* ";

        }

        for(int j=n;j>2*i;j--){

            cout<<" " ;

        }

        for(int j=n;j>2*i;j--){

            cout<<" " ;

        }

        for(int j=0;j<i;j++){

            cout<<"* ";

        }

        cout<<endl;

    }

    for(int i=0;i<n;i++){

        for(int j=n;j>i;j--){

            cout<<"* ";

        }

        for(int j=0;j<2*i;j++){

            cout<<" " ;

        }

        for(int j=0;j<2*i;j++){

            cout<<" " ;

        }

        for(int j=n;j>i;j--){

            cout<<"* ";

        }

        cout<<endl;

    }
}
