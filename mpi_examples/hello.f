       program hello
       include 'mpif.h'
       integer rank, size, ierror
       
       call MPI_INIT( ierror )
       call MPI_COMM_RANK( MPI_COMM_WORLD, rank, ierror )
       call MPI_COMM_SIZE( MPI_COMM_WORLD, size, ierror )
       print *, 'Hello world! This is process ', rank, ' out of ' , size
       call MPI_FINALIZE( ierror )
       end
