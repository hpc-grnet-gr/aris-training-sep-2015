# Documentation

You may find detailed documentation regarding the `ARIS` SuperComputer [here][l1]. 

# Login

Login using ssh. For a Linux or Mac client open a terminal session and use the following command:

```
$ ssh username@login.aris.grnet.gr
```

Replace username with the username that was given to you when your account was created. 

For Windows clients please consider using PuTTY. 

# Partitions

Partitions divide logically the compute resources. The default partition (which includes all nodes) and we will be using is `compute`

# Accounting

Accounting is performed per project. The project name we will be using is `sept2015`. Hence within our example submission scripts the following line must be included in the SLURM directives:

```
#SBATCH -A sept2015
```

# Editors

The available editors are `vi`, `vim` and `nano`. If you are not comfortable using `vim` please use `nano`. 

[l1]: http://doc.aris.grnet.gr/
