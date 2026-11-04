// name: FUN_1002acaee
// address: 1002acaee

undefined8 FUN_1002acaee(ushort *param_1)

{
  undefined8 uVar1;
  undefined1 local_40 [4];
  undefined4 local_3c;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_40[0] = 0;
  local_3c = 0;
  if (*param_1 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_1001798b8(1,param_1 + 1,(uint)*param_1 * 2,local_40);
    uVar1 = FUN_100179c47(local_40);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

