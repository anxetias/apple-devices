// name: FUN_1003a4fac
// address: 1003a4fac

int FUN_1003a4fac(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  long *local_30;
  
  if (*(long **)(*param_2 + 0x68) != (long *)0x0) {
    local_30 = *(long **)(*param_2 + 0x68);
    do {
      plVar1 = (long *)local_30[10];
      if ((*(long *)(param_1 + 0x10) == 0) || (*(long *)(param_1 + 0x10) == *local_30)) {
        plVar2 = *(long **)(param_1 + 0x40);
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_10016bf14();
        }
        iVar3 = (**(code **)(*plVar2 + 0x30))(plVar2,&local_30);
        if (iVar3 != 0) {
          return iVar3;
        }
      }
      local_30 = plVar1;
    } while (plVar1 != (long *)0x0);
  }
  return 0;
}

