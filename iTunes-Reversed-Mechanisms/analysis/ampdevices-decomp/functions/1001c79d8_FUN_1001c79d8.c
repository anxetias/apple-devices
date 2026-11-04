// name: FUN_1001c79d8
// address: 1001c79d8

void FUN_1001c79d8(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_c;
  
  plVar1 = *(long **)(param_1 + 0x20);
  local_28 = param_3;
  local_20 = param_4;
  local_18 = param_5;
  local_c = param_2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,&local_c,&local_28,&local_20,&local_18);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10016bf14();
}

