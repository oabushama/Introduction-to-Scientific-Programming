!****************************************************************
!***
!*** This file belongs with the course
!*** Introduction to Scientific Programming in C++/Fortran2003
!*** copyright 2017 Victor Eijkhout eijkhout@tacc.utexas.edu
!***
!*** complex.F90 : basic complex stuff
!***
!****************************************************************

Program Complex
  implicit none

  !!codesnippet fcomplex
  Complex :: &
       fourtyfivedegrees = (1.,1.), &
       other
  print *,fourtyfivedegrees
  other = 2*fourtyfivedegrees
  print *,other
  !!codesnippet end
  
End Program Complex

