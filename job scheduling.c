#include <stdio.h>
#include <stdlib.h>
#define MAX 100

//Job sequencing with deadline using the greedy method:
typedef struct Job {
  int id;
  int deadline;
  int profit;
} Job;

int min(int a, int b) { return (a < b) ? a : b; }

void jobSequencingWithDeadline(Job jobs[], int n, int *ops) {

  int i, j, k, maxprofit;

  Job temp;
  //sort the jobs profit wise in descending order
  for(i = 1; i < n; i++) {
    for(j = 0; j < n - i; j++) {
      if(jobs[j+1].profit > jobs[j].profit) {
        temp = jobs[j+1];
        jobs[j+1] = jobs[j];
        jobs[j] = temp;
      }
    }
  }

  printf("%10s %10s %10s\n", "Job", "Deadline", "Profit");
  for(i = 0; i < n; i++) {
    printf("%10d %10d %10d\n", jobs[i].id, jobs[i].deadline, jobs[i].profit);
  }



  //free time slots
  int timeslot[MAX];

  //filled time slots
  int filledTimeSlot = 0;

  //find max deadline value
  int dmax = 0;
  for(i = 0; i < n; i++) {
    (*ops)+=1;
    if(jobs[i].deadline > dmax) {
      dmax = jobs[i].deadline;
    }
  }

  //free time slots initially set to -1
  for(i = 1; i <= dmax; i++) {
    timeslot[i] = -1;
  }

  printf("Max deadline: %d\n", dmax);

  for(i = 1; i <= n; i++) {
    (*ops)+=1;
    k = min(dmax, jobs[i - 1].deadline);
    while(k >= 1) {
      if(timeslot[k] == -1) {
        timeslot[k] = i-1;
        filledTimeSlot++;
        break;
      }
      k--;

    }

    //if all time slots are filled then stop
    if(filledTimeSlot == dmax) {

      break;
    }
  }

  //required jobs
  printf("\nRequired Jobs: ");
  for(i = 1; i <= dmax; i++) {
    printf("job %d", jobs[timeslot[i]].id);

    if(i < dmax) {
      printf("--> ");
    }

  }
  printf(" -->finish ");
  //required profit
  maxprofit = 0;
  for(i = 1; i <= dmax; i++) {
    maxprofit += jobs[timeslot[i]].profit;
  }
  printf("\nMax Profit: %d\n", maxprofit);
}

//Optimal sequence of mutually compatible jobs using the greedy method:
void scheduleActivities(int s[], int f[], int n, int *ops){
    int i,j,st=-1;

    for(i = 1; i < n; i++) {
    for(j = 0; j < n - i; j++) {

      if(f[j] >=f[j+1]) {
        int temp=f[j];
        f[j]=f[j+1];
        f[j+1]=temp;

        if(f[j]!=f[j+1] ||(f[j]==f[j+1] && s[j]>s[j+1])){

            int temp1=s[j];
            s[j]=s[j+1];
            s[j+1]=temp1;

        }

      }

    }
  }

  printf("---- Selected Activities ----\n");
  for ( i = 0; i < n;i++)
  {
      *ops+=1;
      if(s[i]>=st){
        printf("[a %d s-%d f-%d] ",(i+1),s[i],f[i]);
        st=f[i];
      }
  }
  *ops-=1;//as we have to select first start and finish point anyhow

}

void printAllActivities(int s[], int f[], int n){
    int i;
    printf("\n\n** all activities [idx start finish] **\n\n");
    for(i=0;i<n;i++){
        printf("[a %d s-%d f-%d] ",(i+1),s[i],f[i]);
    }
    printf("\n\n");
}


int main()
{
    printf("\n\n*********\nNAME: Baisakhi Mallick\nROLL NO.: 13000120144\nSEC: B\n*********\n\n");
    printf("\n\n\n ---------------Optimal sequence of mutually compatible jobs using the greedy method:--------------- \n\n\n");
    int start_time[] = {1, 3, 0, 5, 3, 5, 6, 8, 8, 2, 12};
    int finish_time[] = {4, 5, 6, 7, 9, 9, 10, 11, 12, 14, 16};
    int n = 11;
    int ops=0;
    printAllActivities(start_time,finish_time,n);
    scheduleActivities(start_time,finish_time,n,&ops);



    printf("\n\n** Total Ops: %d\n",ops);



    int start_time2[] = {2, 0, 5, 7, 7, 8, 10};
    int finish_time2[] = {4, 5, 7, 9, 10, 12, 14};
    int n2 = 7;
    int ops2=0;
    printAllActivities(start_time2,finish_time2,n2);
    scheduleActivities(start_time2,finish_time2,n2,&ops2);



    printf("\n\n** Total Ops: %d\n",ops2);



    int start_time3[] = {1, 1, 2, 2, 5, 5, 7, 8, 8, 10, 10, 10, 12};
    int finish_time3[] = {2, 3, 3, 3, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    int n3 = 13;
    int ops3=0;
    printAllActivities(start_time3,finish_time3,n3);
    scheduleActivities(start_time3,finish_time3,n3,&ops3);

    printf("\n\n** Total Ops: %d\n",ops3);
    printf("\n\n\n ---------------Job sequencing with deadline using the greedy method:--------------- \n\n\n");
    Job jobs[5] = {{1, 1, 80},{2, 3, 10},{3, 3, 40},{4, 2, 60},{5, 2, 20}};
    n = 5;
    ops=0;
    jobSequencingWithDeadline(jobs, n, &ops);



    printf("\n\n** Number of ops (not considering sorting): %d\n\n",ops);



    Job jobs2[5] = {{1, 2, 60},{2, 3, 20},{3, 3, 50},{4, 4, 60},{5, 4, 30}};
    n2 = 5;
    ops2=0;
    jobSequencingWithDeadline(jobs2, n2, &ops2);



    printf("\n\n** Number of ops (not considering sorting): %d\n\n",ops2);



    Job jobs3[4] = {{1, 1, 50},{2, 3, 20},{3, 3, 60},{4, 2, 40}};
    n3 = 4;
    ops3=0;
    jobSequencingWithDeadline(jobs3, n3, &ops3);



    printf("\n\n** Number of ops (not considering sorting): %d\n\n",ops3);



    return 0;
}
