// name: FUN_1004f0290
// address: 1004f0290

void FUN_1004f0290(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_888;
  char *local_884;
  undefined2 local_87c;
  int local_87a;
  undefined1 local_868 [1056];
  undefined4 local_448;
  char *local_444;
  undefined2 local_43c;
  char *local_43a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(char *)(param_1 + 0x6abf) == '\0') {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_448 = 0x8220202;
      local_444 = "Assertion failure";
      local_43c = 0x822;
      local_43a = "handlerData->isHomeMusicLibrary";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_448,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    cVar1 = FUN_100266a70(*(undefined8 *)(param_1 + 0x66d8));
    if ((cVar1 != '\0') && (*(char *)(param_1 + 0x6ad7) != '\0')) {
      cVar1 = FUN_10017cbd0(param_1 + 0x6b40);
      if (cVar1 != '\0') {
        iVar2 = FUN_1002441f8(*(undefined4 *)(param_1 + 0x66b0),param_1 + 0x6b40,0x64766365,0,
                              &local_448);
        if (iVar2 == 0) {
          iVar2 = FUN_1001888ba(&local_448,"_locked",local_868,0);
          if (iVar2 == 0) {
            iVar2 = FUN_1001894ce(local_868,"_unlocked",0);
            if ((iVar2 != -0x80) && (iVar2 != 0)) {
              uVar3 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar3,0x10);
              if (cVar1 != '\0') {
                local_888 = 0x8220202;
                local_884 = "Assertion failure";
                local_87c = 0x400;
                local_87a = iVar2;
                __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_888,0x12
                                   );
              }
            }
          }
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

