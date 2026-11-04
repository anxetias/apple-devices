// name: FUN_10046a0b6
// address: 10046a0b6

void FUN_10046a0b6(long param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  undefined1 local_48 [16];
  undefined4 local_38;
  undefined8 local_34;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_100238ca8(local_48,param_1 + 0x18);
  lVar2 = *(long *)(param_1 + 0x60);
  if (lVar2 != 0) {
    cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
    if (cVar1 != '\0') {
      local_38 = 0x8220102;
      local_34 = param_2;
      __os_log_impl(0x100000000,PTR___os_log_default_10082cb88,1,
                    "Service shutdown canceled; reason: %{public}s",&local_38,0xc);
      lVar2 = *(long *)(param_1 + 0x60);
    }
    FUN_1001bdf6c(lVar2);
    FUN_1002188e4((long *)(param_1 + 0x60));
  }
  FUN_10015a142(local_48);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

