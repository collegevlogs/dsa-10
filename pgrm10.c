#include <stdio.h>
#include<math.h>
void main(){
int n , m , a[100], loc, i, key;
printf(" Enter the number( < 05) of elements to store  \n");
scanf("%d", &n);
printf(" Enter the m value, h(k) = k mod m  \n");
scanf("%d", &m);

for(i=0; i<=10; i++)
a[i] = -999;
for(i=1; i<=n; i++){
printf(" Enter the key value to be stored \n");
scanf("%d", &key);
loc = key % m;
if(a[loc] == -999)
a[loc] = key;
else{
for(int j=loc+1;j<=10;j++)
if(a[j]==-999){
a[j] = key;
break;
}
}
}
printf(" The keys in Hashed location are \n");
for(i=0; i<=10; i++)
printf("a[%d] === >> %d\n", i, a[i]);
} 

