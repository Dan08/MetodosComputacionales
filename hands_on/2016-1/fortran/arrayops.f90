! RJ LeVeque - UWHPSC
! /codes/fortran/arrayops.f90

program arrayops

    implicit none
    real(kind=8), dimension(3,2) :: a
    real(kind=8), dimension(2,3) :: b
    real(kind=8), dimension(3,3) :: c
    real(kind=8) :: x(0:1)
    real(kind=8), dimension(3) :: y
    integer i
	integer j

    a = reshape((/1,2,3,4,5,6/), (/3,2/))
	b=transpose(a)
    print *, "b = "
    do i=1,2
		do j =1,3
        print *, i,j, b(i,j)   ! i'th row
		enddo
	    enddo

  
end program arrayops
