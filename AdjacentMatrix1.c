#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define MAX 5
struct Vertex{
    char label;
    bool visited;
};

//stack veriable
int stack[MAX];
int top=-1;

//array variable
struct Vertex* lstVertices[MAX];

//adjacent matrix
int adjMatrix[MAX][MAX];

//vertex count
int vertexCount=0;

//stack funtions
void push(int item){
    stack[++top]=item;
}

int pop(){
    return stack[top--];
}
bool isStackEmpty(){
    return top== -1;
}

// graph funtions
//add vertex tothe vertex list

void addVertex(char label){
    struct Vertex* vertex=(struct Vertex*)malloc(sizeof(struct Vertex));
    vertex->label=label;
    vertex->visited=false;
    lstVertices[vertexCount++]=vertex;
}

//add edge to edge array
void addEdge(int start,int end){
    adjMatrix[start][end]=1;
    adjMatrix[end][start]=1;

}

// display the vertex
void displayVertex(int vertexIndex){
    printf("%c",lstVertices[vertexIndex]->label);
}

//get the adjacent unvisited vertex
int getAdjUnvisitedVertex(int vertexIndex){
    int i;
    for(i=0; i< vertexCount; i++)
    {
     if(adjMatrix[vertexIndex][i]==1 && lstVertices[i]->visited==false)
     {
        return i;
     }   
    }
    return -1;
}

void depthFirstsearch(){
    int i;

    //mark first node as visited
    lstVertices[0]->visited=true;

    //display the vertex
    displayVertex(0);

    //push vertex in the stack
    push(0);

    while(!isStackEmpty()){
        //getthe unvisited vertex of vertex which is at top of the stack
        int unvisitedVertex=getAdjUnvisitedVertex(peek());

        // no adjacent vertex found
        if(unvisitedVertex==-1)
        {
            pop();
        }
        else
        {
            lstVertices[unvisitedVertex]->visited=true;
            displayVertex(unvisitedVertex);
            push(unvisitedVertex);

        }
    }
    //stack is empty search is complete,reset the visited flag
    for(i=0; i<vertexCount; i++)
    {
        lstVertices[i]->visited= false;
    }
}
int main()
{
    int i,j;
    for(i=0; i< MAX; i++){
        for(j=0;j<MAX; j++){
            adjMatrix[i][j]=0;
        }
    }
    addVertex('S');  
    addVertex('A');
    addVertex('B');
    addVertex('C');
    addVertex('D');

    addEdge(0, 1);  // S - A
    addEdge(0, 2);  // S - B
    addEdge(0, 3);  // S - C
    addEdge(1, 4);  // S - D
    addEdge(2, 4);  // S - D
    addEdge(3, 4);  // S - D

    printf("Depth first search:");
    depthFirstsearch();

    return 0;
}