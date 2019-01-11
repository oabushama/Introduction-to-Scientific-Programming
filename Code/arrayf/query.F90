!****************************************************************
!***
!*** This file belongs with the course
!*** Introduction to Scientific Programming in C++/Fortran2003
!*** copyright 2018 Victor Eijkhout eijkhout@tacc.utexas.edu
!***
!*** query.F90 : array query functions
!***
!****************************************************************

Program Query
  implicit none

  !!codesnippet farrayquery
  integer :: x(8), y(5,4)
  print *,size(x)
  print *,size(y)
  print *,size(y,2)
  print *,ubound(y)
  !!codesnippet end

End Program Query
