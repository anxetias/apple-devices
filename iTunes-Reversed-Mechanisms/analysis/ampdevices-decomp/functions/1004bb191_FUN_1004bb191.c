// name: FUN_1004bb191
// address: 1004bb191

void FUN_1004bb191(long param_1,long param_2,char param_3)

{
  char cVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_1004aa626();
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
    FUN_1001782e9(0,0);
  }
  else {
    lVar3 = param_1 + 0xc0;
    if (param_2 != 0) {
      lVar3 = param_2;
    }
    lVar3 = FUN_1004add25(lVar3);
    if (lVar3 != 0) {
      uVar4 = *(undefined8 *)(lVar3 + 8);
      *(char *)(lVar3 + 0x45) = param_3;
      if (param_3 == '\0') {
        FUN_1002b48e9(lVar3);
        if (*(char *)(param_1 + 0x1cf) == '\0') goto LAB_1004bb219;
        uVar2 = 0;
      }
      else {
        if (*(char *)(param_1 + 0x1cf) != '\0') goto LAB_1004bb219;
        uVar2 = 1;
      }
      *(undefined1 *)(param_1 + 0x1cf) = uVar2;
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
        FUN_10047659f(uVar4,uVar2);
        return;
      }
      goto LAB_1004bb2c7;
    }
  }
LAB_1004bb219:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
LAB_1004bb2c7:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

