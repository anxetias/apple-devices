// name: FUN_100488fed
// address: 100488fed

void FUN_100488fed(undefined8 param_1,undefined4 param_2,undefined1 param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = FUN_100314a6c();
  if (lVar2 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_3a = "trackData != nullptr";
LAB_10048910a:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else {
    lVar3 = FUN_10048b3c0(lVar2,param_2);
    if (lVar3 != 0) {
      FUN_100313e0b(lVar2);
      FUN_100488d27(lVar3,param_3,0);
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
        FUN_1002fbbfc(lVar2);
        return;
      }
      goto LAB_100489131;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_3a = "playlist != nullptr";
      goto LAB_10048910a;
    }
  }
  FUN_1001782e9(0,0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
LAB_100489131:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

