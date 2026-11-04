// name: FUN_1005f6d4d
// address: 1005f6d4d

undefined8 FUN_1005f6d4d(undefined8 param_1,undefined8 param_2,long *param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  byte local_138;
  undefined1 local_137 [255];
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_100166fc8(param_1,param_2,&local_138);
  uVar2 = 0x4b1;
  if (cVar1 == '\0') goto LAB_1005f6ebc;
  if (local_138 < 0x11) {
    cVar1 = FUN_1001e0f7d(local_137);
    if (cVar1 == '\0') {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_2a = "IsHexText(&guidString[1], guidString[0])";
        goto LAB_1005f6e89;
      }
    }
    else {
      lVar3 = FUN_1001e1030(&local_138);
      *param_3 = lVar3;
      uVar2 = 0;
      if (lVar3 != 0) goto LAB_1005f6ebc;
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_2a = "*guid != 0";
        goto LAB_1005f6e89;
      }
    }
  }
  else {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_2a = "guidString[0] <= 16";
LAB_1005f6e89:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  FUN_1001782e9(0,0);
  uVar2 = 0x4b1;
LAB_1005f6ebc:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

