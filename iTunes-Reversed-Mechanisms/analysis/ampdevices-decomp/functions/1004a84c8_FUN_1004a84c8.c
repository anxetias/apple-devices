// name: FUN_1004a84c8
// address: 1004a84c8

void FUN_1004a84c8(long param_1,long param_2)

{
  char cVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 local_58 [16];
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "inItem != __null";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    FUN_1001c62d9(local_58,0x10);
    FUN_1001e9de0(param_1 + 0x38);
    lVar5 = param_1 + 8;
    uVar2 = FUN_10015a59c(lVar5,local_58);
    plVar3 = (long *)FUN_10015b12c(lVar5,uVar2);
    *plVar3 = param_2;
    cVar1 = FUN_1004aa626(param_2);
    if (cVar1 == '\0') {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "DownloadItem_IsValid(inItem)";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      uVar2 = 0;
      FUN_1001782e9(0,0);
    }
    else {
      uVar2 = *(undefined4 *)(param_2 + 0x18);
    }
    *(undefined4 *)(plVar3 + 1) = uVar2;
    FUN_10015a861(lVar5);
    FUN_1001e9eb9(param_1 + 0x38);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

