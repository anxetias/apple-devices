// name: FUN_1001a7c70
// address: 1001a7c70

void FUN_1001a7c70(undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined1 local_18 [8];
  
  FUN_1001a8bb0(local_18,param_1);
  plVar1 = *(long **)(param_2 + 0x20);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,local_18);
    FUN_1001ab240(local_18);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10016bf14();
}

