// name: FUN_1002440a0
// address: 1002440a0

int FUN_1002440a0(undefined8 param_1,undefined1 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  char local_98 [80];
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = FUN_10017d477(param_1,local_98,0);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      if (local_98[0] == '\0') {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "folderInfo.isDirectory";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
        iVar2 = -0x78;
      }
      else {
        FUN_100186d13(param_1,param_2);
        FUN_100189139(param_1,0x70707);
        iVar2 = 0;
      }
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x400;
        local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

