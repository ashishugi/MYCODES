
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
struct trip{
    float x;
    float y;
    double points;
};
double distance(struct trip ar[], int n){
    double *output = new double[n+1];
    output[0] = ar[0].points;
    int row=0;
    int col=0;
    int i;
    for( i=1;i<n;i++){
        double ans  =INT_MIN;
        for(int j=i-1;j>=0;--j){
        double dist= sqrt(pow((ar[i].x - ar[j].x), 2) + pow((ar[i].y - ar[j].y) ,2));
        double sol= output[j]+ar[i].points - dist;
        if(ans  < sol){
            ans = sol;
        }
      } //  end of inner loop{}
        output[i] = ans;
        
    }
    return output[n-1];
}
int main(void){
    struct trip ar[3001];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>ar[i].x>>ar[i].y>>ar[i].points;
    }   
    double max_sum = distance(ar , n);
    cout<<fixed;  
   cout<<setprecision(6)<<max_sum<<endl;
}



// #include<bits/stdc++.h>
// #include<iomanip>
// using namespace std;
// struct trip{
//     float x;
//     float y;
//     double points;
// };
// double distance(struct trip ar[], int n){
//     double *output = new double[n+1];
//     output[0] = ar[0].points;
//     int row=0;
//     int col=0;
//     int i;
//     for( i=1;i<n-1;i++){
//         double dist= sqrt(pow((ar[i].x - row), 2) + pow((ar[i].y - col) ,2));
        
//         double sol= output[i-1]+ar[i].points - dist;
//         cout<<" - > "<<dist<< " "<<sol<<endl;
//         //output[i] = max(sol , output[i-1]);
//         if(sol > output[i-1]){
//             row = ar[i].x;
//             col = ar[i].y;
//             output[i] = sol;
//         }
//         else{
//             output[i] =output[i-1];
//         }
        
//     }
//      double dist=sqrt(pow((ar[i].x - row), 2) + pow((ar[i].y - col) ,2));
//      double sol= output[i-1]+ar[i].points - dist;
//        output[i] = sol;
//     for(int i=0;i<n;i++){
//         cout<<output[i]<<endl;
//     }

//     return output[n-1];
// }
// int main(void){
//     struct trip ar[3001];
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>ar[i].x>>ar[i].y>>ar[i].points;
//     }   
//     double max_sum = distance(ar , n);
//     cout<<fixed;  
//    cout<<setprecision(6)<<max_sum<<endl;
//    //cout<<sqrt()
// }