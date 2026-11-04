// name: FUN_1002d1ccd
// address: 1002d1ccd

void FUN_1002d1ccd(long param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  char cVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined1 local_58 [16];
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "TrackInfoIsValid(inTrackInfo)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    plVar2 = *(long **)(param_1 + 0x58);
    if (plVar2 != (long *)0x0) {
      if (*plVar2 != 0) {
        plVar2 = (long *)FUN_100597a61(param_1);
        if (plVar2 == (long *)0x0) {
          plVar2 = (long *)FUN_1005977c1(param_1,0);
        }
      }
      goto LAB_1002d1d53;
    }
  }
  plVar2 = (long *)0x0;
LAB_1002d1d53:
  FUN_1002cf17c(local_58,plVar2,param_2,param_3);
  FUN_1001bb41a(local_58,param_4);
  FUN_1001b7a50(local_58);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

