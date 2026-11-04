// name: FUN_10018d627
// address: 10018d627

void FUN_10018d627(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 local_48 [16];
  undefined4 local_38;
  undefined8 local_34;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001b7eb0(local_48,param_3);
  uVar2 = FUN_100181913();
  lVar3 = FUN_100181b5d(param_1,uVar2,0,1,local_48);
  if (lVar3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8420102;
      local_34 = param_2;
      __os_log_impl(0x100000000,uVar4,0x10,"failed to get volume info for newly-added %{public}@",
                    &local_38,0xc);
    }
  }
  else {
    uVar4 = FUN_1001705fc(param_2);
    *(undefined8 *)(lVar3 + 0x688) = uVar4;
  }
  FUN_1001b7a50(local_48);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

