// name: FUN_100474f55
// address: 100474f55

bool FUN_100474f55(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  bool bVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure (expected to be not NULL)";
      local_2c = 0x822;
      local_2a = "inTrackInfo";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    bVar4 = false;
    cVar1 = FUN_1001782e9(0,0);
    if (cVar1 == '\0') goto LAB_100474fc0;
  }
  if ((*(byte *)(param_1 + 0xc5) & 2) == 0) {
    uVar3 = FUN_100474dd0(param_1,0);
    bVar4 = (uVar3 & 0x200004) != 0;
  }
  else {
    bVar4 = false;
  }
LAB_100474fc0:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

