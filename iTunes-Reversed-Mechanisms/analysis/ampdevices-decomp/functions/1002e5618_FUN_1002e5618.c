// name: FUN_1002e5618
// address: 1002e5618

undefined4 FUN_1002e5618(long param_1,char param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  undefined8 local_4a;
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  undefined1 local_30 [16];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "TrackInfoIsValid( inTrackInfo )";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,1);
  }
  else if (*(int *)(param_1 + 0x170) == 0x65) {
    FUN_1002e42fe(&local_58,param_1);
    uVar2 = 200;
    if (param_2 == '\0') {
      uVar2 = 0;
    }
    local_4a._0_6_ = CONCAT42(uVar2,(undefined2)local_4a);
    uVar2 = FUN_1002e4439(param_1,&local_58,0,0);
    FUN_1001ab006(local_30);
    FUN_1001ab006(local_38);
    FUN_1001ab006(local_40);
    goto LAB_1002e56be;
  }
  uVar2 = 0;
LAB_1002e56be:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

