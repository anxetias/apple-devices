// name: FUN_10032136c
// address: 10032136c

void FUN_10032136c(undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined8 local_18;
  
  local_18 = FUN_100308295(param_1,4);
  plVar1 = *(long **)(param_2 + 0x20);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,&local_18);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10016bf14();
}

