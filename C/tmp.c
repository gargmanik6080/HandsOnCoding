// a cust open a bank account    cust rep provides a choice to first create accout and then exit
// 1 crete   2 exit
// ask cust acc details, name age acc type n amt to deposit 
// he crate the acc 
////  if (amt<500) warn
////  else acc created
// he create it as a structure and pass pointer of obj as arg to func

#include<stdio.h>
/*
struct acc{
    char name[20];
	int age;
	int type;  // 0 for current 1 for saving
	int amt;
	char addr[30];
};

void read(struct acc *a){
		printf("Enter Your Name... ");
		scanf("%s", &(*a->name));
		printf("Enter Your Age... ");
		scanf("%d", &(a)->age);
		printf("Enter Your Address... ");
		scanf("%s", &(*a->addr));
		printf("Enter Your Acc Typ... ");
		scanf("%d", &(a->type));
		printf("Enter Your amount... ");
		int x;
		scanf("%d", &x);
		if(x<500) printf("warning!!! Amount low!!! \n");
		else {
			a->amt=x;
			printf("Account Created...\n");
		}
}
int main(){
	
	int n;
	printf("Enter 1 to create account or 2 to exit... ");
	scanf("%d", &n);
	if(n==2) return 0;
	struct acc a;
	read(&a);
	
}

*/
//// WAP to cmp 2 date, make date struct, func to cmp, return 1 or -1







/*
struct arr{
	int n;
	int a[5];
};

int s(int* arr, int n, int i){
	if(i==n) return 0;
	return *arr + s(arr+1, n, i+1);
}
int main(){
	int x;
	struct arr o;
	scanf("%d", &o.n);
	x=o.n;
	// int a[n];
	for(int i=0;i<o.n;i++){
		scanf("%d", &o.a[i]);
	}
	// for(int i=0;i< 10;i++){
	// 	printf("%d ", o.a[i]);
	// }
	printf("Sum= %d\n", s(&o.a, x, 0));
}*/

int main(){
	int n;
	scanf("%d", &n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}

	printf("Even : ");
	for(int i=0;i<n;i++) {
		if(arr[i]%2==0) printf("%d ", arr[i]);
	}
	
	printf("\nOdd : ");
	for(int i=0;i<n;i++) {
		if(arr[i]%2) printf("%d ", arr[i]);
	}
}