// name: FUN_10052783c
// address: 10052783c

undefined4 FUN_10052783c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined4 uVar2;
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  
  FUN_1001ab042(local_28);
  FUN_1001ab042(local_20,param_3);
  plVar1 = *(long **)(param_1 + 0x30);
  if (plVar1 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,local_28,local_20);
    FUN_1001ab006(local_20);
    FUN_1001ab006(local_28);
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10016bf14();
}

