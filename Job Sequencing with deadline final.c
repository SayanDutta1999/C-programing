#include<stdio.h>
#include<stdlib.h>
struct job_details{
	int job_id;
	int deadline;
	int profit;
};

int minimum(int a, int b){
	if (a<b){
		return a;
	}
	else {
		return b;
	}
}

void profit_sort(struct job_details *job_arr, int n){

	int i, j ;
	
 	
	for(i = 1; i < n; i++){
		for(j = 0; j < n-i-1; j++ ){
			
			if(job_arr[j].profit < job_arr[j+1].profit){
				
		struct	job_details	temp = job_arr[j+1];
				job_arr[j+1]=job_arr[j];
				job_arr[j]=temp;
			}
		}
	}
}

void job_scheduling(struct job_details *job_arr, int n){
	
	int *time_slot, *job_seq, i, j, k=0;
	
    time_slot=(int *) malloc (n * sizeof (int));
	
	job_seq=(int *) malloc (n * sizeof (int));
	
	for(i = 0; i < n; i++){
		
		time_slot[i] = 0;
	}
	
		for(i = 0; i < n; i++){
			for(j=minimum(i, job_arr[i].deadline-1); j>=0; j--){
				
				if(time_slot[j] == 0){
					job_seq[j] = i;
					time_slot[j] = 1;
					break;
				}
			}
	
	}
	
	for(i = 0; i < n; i++){
		
		if(time_slot[i] == 1){
			printf("job id- %d\n",job_arr[job_seq[i]].job_id);
			k = k + job_arr[job_seq[i]].profit;
		}
	}
	 printf("Total sum of profit-%d",k);
}
	


int main(){
	
	int n, i;
	
	printf("Enter the number of jobs-");
	scanf("%d",&n);
	
 struct	job_details *job_set = (struct	job *) malloc (n * sizeof(struct job_details));
	
	for(i = 0; i < n ; i++){
	    scanf("%d%d%d",&job_set[i].job_id, &job_set[i].deadline, &job_set[i].profit);
	}
	
	profit_sort(job_set, n);
	job_scheduling(job_set, n);
}



