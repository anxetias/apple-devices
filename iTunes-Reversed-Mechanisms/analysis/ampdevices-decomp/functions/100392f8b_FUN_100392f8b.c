// name: FUN_100392f8b
// address: 100392f8b

void FUN_100392f8b(long param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = FUN_1004983e2(*(undefined8 *)(param_1 + 0x16860));
  if (lVar2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "imageInfo != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else if (param_3 == -0xd0) {
    if (*(char *)(lVar2 + 0xb2) == '\x01') {
      *(undefined1 *)(lVar2 + 200) = 2;
    }
  }
  else if (param_3 == -0x27) {
    *(undefined1 *)(lVar2 + 0x83) = 1;
  }
  else if (param_3 == 0) {
    if (*(int *)(lVar2 + 0xcc) == 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure";
        local_2c = 0x822;
        local_2a = "imageInfo->airTrafficRequestCount >= 1";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      FUN_1001782e9(0,0);
    }
    *(undefined4 *)(lVar2 + 0xcc) = 0;
    if (*(char *)(lVar2 + 0xb2) == '\x01') {
      *(undefined1 *)(lVar2 + 200) = 1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

