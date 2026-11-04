// name: FUN_1004f423d
// address: 1004f423d

void FUN_1004f423d(undefined4 *param_1)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_1004de449(*param_1);
  if (lVar3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "handlerData != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0x45f;
  }
  else {
    uVar2 = FUN_1004f3c62(lVar3,param_1[1],param_1[2],param_1[3],*(undefined1 *)(param_1 + 4));
  }
  param_1[5] = uVar2;
  if (*(char *)(param_1 + 6) == '\x01') {
    FUN_1001e9809(param_1 + 7);
  }
  else {
    FUN_1001e8f15(param_1 + 0xc);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

