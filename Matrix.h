#ifndef __MATRIX__
#define __MATRIX__


class Matrix {
	
	public:
	
		double	m[4][4];								// elements
	
		
		Matrix(void);									// default constructor

		Matrix(const Matrix& mat);						// copy constructor
		
		~Matrix (void);									// destructor
			
		Matrix& 										// assignment operator
		operator= (const Matrix& rhs); 	
			
		Matrix 											// multiplication of two matrices
		operator* (const Matrix& mat) const;

		Matrix 											// divsion by a double
		operator/ (const double d);

		void											// set to the identity matrix
		set_identity(void);	
};

#endif



