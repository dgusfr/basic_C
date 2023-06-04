//Matriz transposta

#include <stdio.h>
#define N 4
int main() {
 int m[N][N] = { { 0, 1, 13, 8 }, { 14, -3, 17, -6 }, { 15, -1, 2, 0 }, { -7, 10, 12, -5 } };
 int i, j, aux;
 for ( i=0; i<N; i++ )
 for ( j=i; j<N; j++ )
 if ( i != j ) {
 aux = m[i][j];
 m[i][j] = m[j][i];
 m[j][i] = aux;
 }
 for ( i=0; i<N; i++ ) {
 for ( j=0; j<N; j++ )
 printf( "%3d", m[ i ][ j ] );
 printf( "\n" );
 }
 return 0;
}

