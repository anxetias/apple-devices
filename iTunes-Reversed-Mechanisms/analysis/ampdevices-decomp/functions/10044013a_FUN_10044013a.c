// name: FUN_10044013a
// address: 10044013a

undefined8 FUN_10044013a(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_50 [3];
  undefined4 local_38;
  char *pcStack_34;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined6 uStack_28;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 0x498) == 0) {
    FUN_10043e902(param_1);
    if (*(long *)(param_1 + 0x498) == 0) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x8220202;
        pcStack_34 = "Assertion failure";
        uStack_2c = 0x822;
        uStack_2a = 0xe877;
        uStack_28 = 0x1007c;
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      uVar2 = 0;
      FUN_1001782e9(0,0);
      goto LAB_1004401ca;
    }
  }
  if ((*(char *)(param_1 + 0x529) == '\x01') && (*(long *)(param_1 + 0x4a8) != 0)) {
    _AVCFPlayerItemGetDuration(&local_38,*(long *)(param_1 + 0x4a8));
  }
  else {
    _AVCFAssetGetDuration(&local_38);
  }
  _CMTimeConvertScale(local_50,1000,1);
  uVar2 = local_50[0];
LAB_1004401ca:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

