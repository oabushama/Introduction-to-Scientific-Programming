!****************************************************************
!***
!*** This file belongs with the course
!*** Introduction to Scientific Programming in C++/Fortran2003
!*** copyright 2017 Victor Eijkhout eijkhout@tacc.utexas.edu
!***
!*** typemod.F90 : modules containing types and such
!***
!****************************************************************

!!codesnippet pointmod
Module definitions
  type point
     real :: x,y
  end type point
contains
  real(4) function length(p)
    implicit none
    type(point),intent(in) :: p
    length = sqrt( p%x**2 + p%y )
  end function length
end Module definitions
!!codesnippet end

!!codesnippet pointmodprog
Program size
  use definitions
  implicit none

  type(point) :: p1,p2
  p1 = point(2.5, 3.7)

  p2 = p1
  print *,p2%x,p2%y

end Program size
!!codesnippet end
