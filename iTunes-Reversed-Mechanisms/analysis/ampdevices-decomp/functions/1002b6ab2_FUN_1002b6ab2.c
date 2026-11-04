// name: FUN_1002b6ab2
// address: 1002b6ab2

int FUN_1002b6ab2(long param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ulong local_50;
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (long *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "playerHandler != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else {
    iVar2 = (**(code **)(*param_2 + 0xa8))(param_2,local_48);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        FUN_1001c631b(local_48,&local_50,8);
        if (local_50 == 0) {
          FUN_1001c631b(local_40,&local_50,8);
          if (local_50 == 0) {
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 != '\0') {
              local_38 = 0x8220202;
              local_34 = "Assertion failure";
              local_2c = 0x822;
              local_2a = "fingerprint != 0";
              __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
            }
            FUN_1001782e9(0,0);
          }
        }
        *(ulong *)(param_1 + 200) =
             local_50 >> 0x38 | (local_50 & 0xff000000000000) >> 0x28 |
             (local_50 & 0xff0000000000) >> 0x18 | (local_50 & 0xff00000000) >> 8 |
             (local_50 & 0xff000000) << 8 | (local_50 & 0xff0000) << 0x18 |
             (local_50 & 0xff00) << 0x28 | local_50 << 0x38;
        iVar2 = 0;
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
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

