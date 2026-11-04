// name: FUN_1001348e8
// address: 1001348e8

void FUN_1001348e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  plVar1 = *(long **)(param_1 + 0x20);
  local_18 = param_3;
  local_10 = param_4;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,param_2,&local_18,&local_10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10016bf14();
}

