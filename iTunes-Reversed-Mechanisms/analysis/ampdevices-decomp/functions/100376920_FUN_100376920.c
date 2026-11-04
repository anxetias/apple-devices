// name: FUN_100376920
// address: 100376920

undefined8 FUN_100376920(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_10036f8fa(*(undefined4 *)(param_1 + 0x30));
  if (lVar3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "afcVolumeInfo != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
      return 0xffffffdd;
    }
  }
  else {
    uVar4 = _AFCFileDescriptorCreateUnlockOperation(*(undefined8 *)(param_1 + 0x4e8),0);
    uVar2 = FUN_10036ed41(*(undefined8 *)(param_1 + 0x4e0),uVar4);
    FUN_10017060f(uVar4);
    FUN_10036d4d2(lVar3);
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
      uVar4 = FUN_10036db97(uVar2);
      return uVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

