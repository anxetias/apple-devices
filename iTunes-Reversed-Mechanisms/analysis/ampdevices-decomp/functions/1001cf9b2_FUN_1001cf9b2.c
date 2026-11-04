// name: FUN_1001cf9b2
// address: 1001cf9b2

void FUN_1001cf9b2(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long *plVar1;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_c;
  
  plVar1 = *(long **)(param_1 + 0x20);
  local_20 = param_2;
  local_18 = param_3;
  local_c = param_4;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,&local_20,&local_18,&local_c);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10016bf14();
}

