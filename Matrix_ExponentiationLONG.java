
	static int N = 101;
	static long[][] arr = new long[N][N]; // Matrix N X N
	static long[][] I = new long[N][N]; // Identity Matrix
  
	private static void power(long[][] A, int dim, int n) {
		
		for(int i=1; i<=dim; i++) {
			for(int j=1;j<=dim; j++) {
				if(i==j)
					I[i][j]=1;
				else
					I[i][j]=0;
			}
		}
		
//		for(int i=1; i<=n; i++)
//			multiply(I,A,dim);
		
		while(n != 0) {
			if(n%2 == 1) {
				multiply(I, A, dim);
				n--;
			}
			else {
				multiply(A, A, dim);
				n/=2;
			}
		}
		
		for(int i=1; i<=dim; i++)
			for(int j = 1; j<=dim; j++)
				A[i][j]=I[i][j];
		
	}

	private static void multiply(long[][] A, long[][] B, int dim) {
		
		long res[][] = new long[dim+1][dim+1];
		for(int i=1; i<=dim; i++) {
			for(int j=1;j<=dim; j++) {
				
				res[i][j]=0;
				for(int k=1; k<=dim; k++)
					res[i][j] += A[i][k] * B[k][j];
				
			}
		}
		
		// copy in  A Matrix
		for(int i=1; i<=dim; i++)
			for(int j = 1; j<=dim; j++)
				A[i][j]=res[i][j];
	}
  
  
	private static void printMatrix(long[][] A, int dim) {
		
		for(int i =1; i<=dim; i++) {
			for(int j=1; j<=dim; j++)
				System.out.print(A[i][j]+" ");
			System.out.println();
		}
	}
  
  public static void main(String[] args) {
		
		
		Scanner sc = new Scanner(System.in);
	
		int dim = sc.nextInt();
		int n = sc.nextInt();
		for(int i=1; i<=dim; i++)
			for(int j = 1; j<=dim; j++)
				arr[i][j]=sc.nextInt();
		power(arr,dim,n);
		printMatrix(arr,dim);

	}
