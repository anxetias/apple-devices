// name: FUN_1004fbce0
// address: 1004fbce0

void FUN_1004fbce0(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long local_4a0;
  undefined1 local_498 [44];
  undefined1 local_46c [1076];
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = FUN_1002b3b9a(param_1,local_498);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      local_4a0 = 0;
      if (*(int *)(param_1 + 0x3c) == 0x46494c45) {
        iVar2 = FUN_1001d58b4(&local_4a0,local_46c,3,0);
        if (iVar2 != -0x80) {
          if (iVar2 == 0) {
            FUN_1005d8c33(local_4a0);
          }
          else {
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 != '\0') {
              local_38 = 0x8220202;
              local_34 = "Assertion failure";
              local_2c = 0x400;
              local_2a = (char *)CONCAT44(local_2a._4_4_,iVar2);
              __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_38,0x12);
            }
          }
        }
      }
      else {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_38 = 0x8220202;
          local_34 = "Assertion failure";
          local_2c = 0x822;
          local_2a = "trackKind == kITFileKind";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
        }
        FUN_1001782e9(0,0);
      }
      if (local_4a0 != 0) {
        FUN_1001d5da8();
      }
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure";
        local_2c = 0x400;
        local_2a = (char *)CONCAT44(local_2a._4_4_,iVar2);
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_38,0x12);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

