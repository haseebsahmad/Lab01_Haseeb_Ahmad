//#include<iostream>
//using namespace std;
//int multiply(int mat1[][100],int mat2[][100],int result[][100]){
//	int r1, c1, r2, c2, i, j, k;
//	/* Takins size as input from user for both matrices*/
//	cout << "Enter rows and columns of first matrix:" << endl;
//	cin >> r1 >> c1;
//	cout << "Enter rows and columns of second matrix:" << endl;
//	cin >> r2 >> c2;
//
//	if (c1 == r2) /* If number of columns of matrix1 is equal to
//				  number of rows of matrix 2 the multiplication works*/
//	{
//		/* Filling up the 1st matrix */
//		for (i = 0; i < r1; ++i)
//		for (j = 0; j < c1; ++j)
//			mat1[i][j] = rand() % 100;
//		/* Filling up the 2nd matrix */
//		for (i = 0; i < c1; ++i)
//		for (j = 0; j < c2; ++j)
//			mat2[i][j] = rand() % 100;
//		/* Displaying the 1st matrix */
//		cout << "1st Matrix: " << endl;
//		for (i = 0; i < r1; ++i)
//		{
//			for (j = 0; j < c2; ++j)
//			{
//				cout << mat1[i][j] << " ";
//			}
//			cout << endl;
//		}
//		/* Displaying the 1st matrix */
//		cout << "2nd Matrix:" << endl;
//		for (i = 0; i < r1; ++i)
//		{
//			for (j = 0; j < c2; ++j)
//			{
//				cout << mat2[i][j] << " ";
//			}
//			cout << endl;
//		}
//
//		/* Multiplication and storing into result matrix*/
//		cout << "Required Matrix:" << endl;
//		for (i = 0; i < r1; ++i)
//		{
//			for (j = 0; j < c2; ++j)
//			{
//				result[i][j] = 0;
//				for (k = 0; k < c1; ++k)
//					result[i][j] = result[i][j] + (mat1[i][k] * mat2[k][j]);
//				cout << result[i][j] << " ";
//			}
//			cout << endl;
//		}
//	}
//	/* If the matrices are not squared*/
//	else{
//		cout << "Order is not valid !! " << endl;
//	}
//	return 0;
//}
//int main()
//{
//	/* Decleration of Matrices*/
//	int mat1[100][100], mat2[100][100], result[100][100];
//	multiply(mat1,mat2,result);
//	
//	getchar();
//	getchar();
//	return 0;
//}