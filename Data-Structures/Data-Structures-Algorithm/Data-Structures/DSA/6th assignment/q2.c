#include<stdio.h>
int n=3;
struct data{
    int registrationNo;
    char name[50];
    char  branch[20];
    float cgpa;
}student[3];
int lsearch(struct data p[],int k){
    int i;
    for(i=0;i<n;i++){
        if(p[i].registrationNo==k){
            return i;
        }
    }
    return -1;
}

void bubbleSort(struct data p[]){
    int i,j;
    struct data temp;
    for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(p[i].registrationNo>p[j].registrationNo){
                    // int temp;
                   temp=p[i];
                   p[i]=p[j];
                   p[j]=temp;
                }
            }
    }
}

int binarySearch(struct data p[],int k){
    int l=0;
    int h=n-1;
    while(l<=h){
        int mid=(l+h)/2;
        if(k==p[mid].registrationNo){
            return mid;
        }
        else if(k<p[mid].registrationNo){
            h=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return -1;
}

void decInsertion(struct data p[]){
    int i,j;
    float x;
    struct data temp;
    for(i=1;i<n;i++){
        j=i-1;
        temp=p[i];
        x=p[i].cgpa;
        while(j>-1 && p[j].cgpa<x){
            p[j+1]=p[j];
            j--;
        }
        p[j+1]=temp;

    }

}

int main(){
    int i;
        printf("Enter the details:\n");
    for(i=0;i<n;i++){
        printf("Enter registration number ");
        scanf("%d",&student[i].registrationNo);
        printf("Enter name ");
        scanf("%s",student[i].name);
        printf("Enter branch ");
        scanf("%s",student[i].branch);
        printf("Enter CGPA ");
        scanf("%f",&student[i].cgpa);
    }

     bubbleSort(student);
     printf("Enter the registration number to be searched:\n");
     int k;
     scanf("%d",&k);
     int result=binarySearch(student,k);
     // printf("%d",result);
     if(result!=-1){
         printf("STUDENT DATA:\n");
         printf("Registration Number:%d\n",student[result].registrationNo);
         printf("Name:%s\n",student[result].name);
         printf("Branch:%s\n",student[result].branch);
         printf("CGPA:%f\n",student[result].cgpa);
     }
     else{
         printf("Sorry the registration number is not found!");
     }
    decInsertion(student);
    for(i=0;i<n;i++){
        printf("%s\n",student[i].name);
    }
    return 0;
}
