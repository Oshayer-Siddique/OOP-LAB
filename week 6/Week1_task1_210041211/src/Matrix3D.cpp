#include "Matrix3D.h"




double Matrix3D::det() const
{


            return (m[0][0]*(m[1][1]*m[2][2]-m[2][1]*m[1][2]))-m[0][1]*(m[1][0]*m[2][2]-m[1][2]*m[2][0])+m[0][2]*(m[1][0]*m[2][1]-m[1][1]*m[2][0]);

}
void Matrix3D::display()
{
    cout<<m[0][0]<<" "<<m[0][1]<<" "<<m[0][2]<<endl;
    cout<<m[1][0]<<" "<<m[1][1]<<" "<<m[1][2]<<endl;
    cout<<m[2][0]<<" "<<m[2][1]<<" "<<m[2][2]<<endl;
}

vector<vector<double>> Matrix3D::inverse()
{
    double d=det();
    vector<vector<double>> temp(3,vector<double>(3));
    temp[0][0]=((m[1][1]*m[2][2]-m[2][1]*m[1][2]))/d;

    temp[0][1]=((m[0][2]*m[2][1]-m[0][1]*m[2][2]))/d;

    temp[0][2]=((m[0][1]*m[1][2]-m[0][2]*m[1][1]))/d;
    temp[1][0]=((m[1][2]*m[2][0]-m[1][0]*m[2][2]))/d;

    temp[1][1]=((m[0][0]*m[2][2]-m[0][2]*m[2][0]))/d;

    temp[1][2]=((m[1][0]*m[0][2]-m[0][0]*m[1][2]))/d;

    temp[2][0]=((m[1][0]*m[2][1]-m[2][0]*m[1][1]))/d;

    temp[2][1]=((m[2][0]*m[0][1]-m[0][0]*m[2][1]))/d;

    temp[2][2]=((m[0][0]*m[1][1]-m[1][0]*m[0][1]))/d;





    return temp;
}

Matrix3D Matrix3D::operator+(const Matrix3D& mat2) const
{

            vector<vector<double>>temp(3,vector<double>(3));
             for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                temp[i][j] = m[i][j] + mat2.m[i][j];
            }
        }
        return Matrix3D(temp);


}


Matrix3D Matrix3D::operator-(const Matrix3D& mat2) const
{

            vector<vector<double>>temp(3,vector<double>(3));
             for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                temp[i][j] = m[i][j] - mat2.m[i][j];
            }
        }
        return Matrix3D(temp);


}


Matrix3D Matrix3D::operator*(const Matrix3D& mat2) const
{

            vector<vector<double>>temp(3,vector<double>(3));
             for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                for (int k = 0; k < 3; ++k) {
                    temp[i][j] += m[i][k] * mat2.m[k][j];
                }
            }
        }
        return Matrix3D(temp);


}



