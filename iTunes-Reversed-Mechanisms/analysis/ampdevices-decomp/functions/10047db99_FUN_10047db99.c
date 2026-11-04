// name: FUN_10047db99
// address: 10047db99

undefined8 FUN_10047db99(undefined8 param_1,short *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (short *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "seriesNameOrArtistStr != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0xffffffce;
  }
  else {
    iVar2 = FUN_10047dc87();
    if ((iVar2 != 0) || (uVar3 = 0, *param_2 == 0)) {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
        uVar3 = FUN_1004779ac(param_1,param_2);
        return uVar3;
      }
      goto LAB_10047dc82;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar3;
  }
LAB_10047dc82:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

