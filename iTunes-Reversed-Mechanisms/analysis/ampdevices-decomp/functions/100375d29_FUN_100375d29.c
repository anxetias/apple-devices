// name: FUN_100375d29
// address: 100375d29

undefined8 FUN_100375d29(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = FUN_10036f8fa(*(undefined4 *)(param_1 + 0x20));
  if (lVar2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "afcVolumeInfo != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0xffffffdd;
  }
  else {
    FUN_10017060f(*(undefined8 *)(param_1 + 0x438));
    *(undefined8 *)(param_1 + 0x438) = 0;
    FUN_10017060f(*(undefined8 *)(param_1 + 0x440));
    *(undefined8 *)(param_1 + 0x440) = 0;
    *(undefined8 *)(param_1 + 0x448) = 0;
    FUN_10036d4d2(lVar2);
    uVar3 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

