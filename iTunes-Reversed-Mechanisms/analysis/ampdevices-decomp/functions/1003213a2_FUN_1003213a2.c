// name: FUN_1003213a2
// address: 1003213a2

void FUN_1003213a2(undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined8 local_18;
  
  local_18 = FUN_100308295(param_1,8);
  plVar1 = *(long **)(param_2 + 0x20);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,&local_18);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10016bf14();
}

