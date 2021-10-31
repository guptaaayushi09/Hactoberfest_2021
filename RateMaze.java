package backtracking;

public class RateMaze {

	public static boolean ratInMaze(int[][] maze ) {
		int n=maze.length;
		int[][] path=new int[n][n];
		return solveMaze(maze,0,0,path);
		
		}
		
		public static boolean solveMaze(int[][] maze,int i,int j,int path[][]) {
			int n=maze.length;
//			check if i,j not cell is not valid
			if(i<0 || i>=n || j<0 || j>=n || maze[i][j]==0 || path[i][j]==1 ) { //(maze[i][j]==0 is blocked path) (path[i][j]==1 is visited path)
				return false;
			}
			path[i][j]= 1;
			
			if(i == n-1 && j==n-1 ) {
				for(int r=0; r<n; r++) {
					for(int c=0; c<n; c++) {
						System.out.print(path[r][c]+" ");
					}
					System.out.println();
					
				}
				return true;
			}
			
//			for top direction
			if(solveMaze(maze, i-1, j, path)) {
				return true;
			}
			
//			for right direction
			if(solveMaze(maze, i, j+1, path)) {
				return true;
			}

//			down direction
			if(solveMaze(maze, i + 1, j, path)) {
				return true;
			}
			
			
//			left direction
			if(solveMaze(maze, i, j-1, path)){
				return true;
			}
			
			return false;
			
		}
	public static void main(String[] args) {
		int[][] maze = {{1,1,0},{1,1,0},{1,1,1}};
		boolean pathPossible = ratInMaze(maze);
		System.out.println(pathPossible);

	}

}
