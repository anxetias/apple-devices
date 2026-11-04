// name: FUN_100602456
// address: 100602456

undefined4 FUN_100602456(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined **local_58;
  long local_50;
  undefined ***local_38;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_58 = &PTR_FUN_100870f40;
  local_50 = param_1;
  local_38 = &local_58;
  uVar1 = FUN_10060227b(*(undefined8 *)(param_1 + 0x10),&local_58);
  if (local_38 == &local_58) {
    lVar2 = 0x20;
  }
  else {
    lVar2 = 0x28;
    if (local_38 == (undefined ***)0x0) goto LAB_1006024b6;
  }
  (**(code **)((long)*local_38 + lVar2))();
LAB_1006024b6:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar1;
}

