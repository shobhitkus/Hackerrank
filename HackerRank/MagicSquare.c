#include<stdio.h>
int main(){
	int i,j,k;
	int magic_mat[8][3][3] = {
    	{{8, 1, 6}, {3, 5, 7}, {4, 9, 2}},
    	{{6, 1, 8}, {7, 5, 3}, {2, 9, 4}},
    	{{4, 9, 2}, {3, 5, 7}, {8, 1, 6}},
    	{{2, 9, 4}, {7, 5, 3}, {6, 1, 8}}, 
    	{{8, 3, 4}, {1, 5, 9}, {6, 7, 2}}, 
    	{{4, 3, 8}, {9, 5, 1}, {2, 7, 6}}, 
    	{{6, 7, 2}, {1, 5, 9}, {8, 3, 4}}, 
    	{{2, 7, 6}, {9, 5, 1}, {4, 3, 8}},  
	};

	int a[3][3];
	for (i = 0; i < 3; i++) {
    	for (j = 0; j < 3; j++)
        	scanf("%d", &a[i][j]);
	}

	int min_cost;
	min_cost = 81;
	for (k = 0; k < 8; k++) {
    	int crt_cost = 0;
    	for (i = 0;i < 3;i++) {
        	for (j = 0;j < 3;j++)
            	crt_cost += abs( a[i][j] - magic_mat[k][i][j] );
    	}
    	if (crt_cost < min_cost)
        min_cost = crt_cost;
	}

	printf("%d", min_cost);
	return 0;		
}