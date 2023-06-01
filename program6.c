#include<stdio.h>
#include<stdlib.h>
#include<ctime>

#define ll long int

void transmission(ll & i, ll & N, ll & tf, ll & tt) {
  while (i <= tf) {
    int z = 0;
    for (int k = i; k < i + N && k <= tf; k++) {
      printf("Sending Frame %d ...\n",k);
      tt++;
    }
    for (int k = i; k < i + N && k <= tf; k++) {
      int f = rand() % 2;
      if (!f) {
	printf("Acknowledgment for Frame   %d ...  \n",k);
        z++;
      } else {
	printf("Timeout!! Frame Number : %d Not Received \n",k);
	printf("Retransmitting Window... \n");        
        break;
      }
    }
    printf("\n");
    i = i + z;
  }
}
int main() {
  ll tf, N, tt = 0;
  srand(time(NULL));
  printf("Enter the Total number of frames : ");
  scanf("%li",&tf);	  
  printf("Enter the Window Size : ");
  scanf("%li",&N);
  ll i = 1;
  transmission(i, N, tf, tt);
  printf("Total number of frames which were sent and resent are : %li  \n",tt);
  return 0;
}
