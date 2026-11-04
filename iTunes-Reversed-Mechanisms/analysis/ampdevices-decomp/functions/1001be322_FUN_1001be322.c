// name: FUN_1001be322
// address: 1001be322

void FUN_1001be322(long param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  plVar1 = *(long **)(param_1 + 0x20);
  local_20 = param_4;
  local_18 = param_5;
  local_10 = param_2;
  local_c = param_3;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,&local_10,&local_c,&local_20,&local_18);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10016bf14();
}

