#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
void BFS(int G[][7] , int start , int n){
int i = start;
Node q;
int visited[7] = {0};
printf("%d " , i);
visited[i] = 1;
enqueue(i);
while(!isEmpty()){
int u = dequeue(front);
for(int i = 1 ; i < n  ; i++){
    if(G[u][i] == 1 && visited[i] == 0){
        printf("%d " , i);
        visited[i] = 1;
        enqueue(i);
    }

}

}


}

void DFS(int G[][8] , int start , int n){
static int visited[8] = {0};
if(visited[start] == 0){
    printf("%d " , start);
    visited[start] = 1;
    for(int i = 1 ; i < n ; i++){
        if(G[start][i] == 1 && visited[i] == 0){
            DFS(G,i,n);
        }
    }
}

}
int supersource(int G[][7] , int n){
int i = 0;
int j = n-1;
while(i != j){
    if(G[i][j] == 1){
        j--;
    }
    else{
        i++;
    }
}
for(int k = 0 ; k < n ; k++){
    if(k != j && G[i][k] != 1 || G[k][i] != 0){
            printf("\n%d" , G[k][i]);
            printf("\n%d" ,  G[i][k]);
        return NULL;
    }
}
return i;


}
int main()
{
int G[8][8] = {
    {0,0,0,0,0,0,0,0},
    {1,0,1,0,0,1,0,0},
    {0,0,0,0,0,1,0,0},
    {0,0,0,0,0,1,0,0},
    {0,0,0,0,0,0,0,0},
    {0,0,0,1,0,0,1,0},
    {0,0,0,0,0,0,0,1},
    (0,0,0,0,0,1,1,0)
    };

    /*for(int i = 0 ; i < 7 ; i++){
        for(int j = 0 ; j < 7 ; j++){
            printf("%d " , G[i][j]);
        }
        printf("\n");
    }*/

//BFS(G , 1 , 7);
DFS(G , 6 , 8);
//int a = supersource(G , 7);
//printf("\n%d" , a);
    return 0;
}
