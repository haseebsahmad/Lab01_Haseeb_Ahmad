
/////* Strassen's Mulitiplication */
//#include <iostream>
//using namespace std;
//int main(){
//	/* Matrix size decleration for square matrix */
//	int mat1[2][2], mat2[2][2], res[2][2],i,j,k;
//	/* Taking matrix 1 from user */
//	cout << "Enter the elements of matrix 1" << endl;
//	for (i = 0; i < 2; i++){
//		for (j = 0; j < 2; j++){
//			cout << "Enter element: " << i <<j << endl;
//			cin >> mat1[i][j];
//		}
//		}
//	/* Taking matrix 2 from user*/
//	cout << "Enter the elements of matrix 2" << endl;
//	for (i = 0; i < 2; i++){
//		for (j = 0; j < 2; j++){
//			cout << "Enter element: " << i << j << endl;
//			cin >> mat2[i][j];
//		}
//	}
//	int p1,p2,p3,p4,p5,p6,p7;
//	/* Computaion formula according to Strassen's Algorithm */
//	p1 = (mat1[0][0] + mat1[1][1]) * (mat2[0][0] + mat2[1][1]);
//	p2 = (mat1[1][0] + mat1[1][1]) * mat2[0][0];
//	p3 = mat1[0][0] * (mat2[0][1] - mat2[1][1]);
//	p4 = mat1[1][1] * (mat2[1][0] - mat2[0][0]);
//	p5 = (mat1[0][0] + mat1[0][1]) * mat2[1][1];
//	p6 = (mat1[1][0] - mat1[0][0]) * (mat2[0][0] + mat2[0][1]);
//	p7 = (mat1[0][1] - mat1[1][1]) * (mat2[1][0] + mat2[1][1]);
//	/* Storing Elements to respective indices in result matrix*/
//	res[0][0] = p1 + p4 - p5 + p7;
//	res[0][1] = p3 + p5;
//	res[1][0] = p2 + p4;
//	res[1][1] = p1 - p2 + p3 + p6;
//	cout << "\nThe result is:\n";
//	cout << res[0][0]<< "\t";
//	cout << res[0][1] << endl;
//	cout << res[1][0] << "\t";
//	cout << res[1][1] << endl;
//	getchar();
//	getchar();
//	return 0;
//	}


