// name: FUN_1003a55b2
// address: 1003a55b2

undefined8 FUN_1003a55b2(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar1 = *param_2;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1005389ba(&local_48,0x9c);
  FUN_1004755ef(uVar1,0,&local_48);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

