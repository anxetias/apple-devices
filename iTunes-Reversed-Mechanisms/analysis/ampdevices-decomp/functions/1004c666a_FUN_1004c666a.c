// name: FUN_1004c666a
// address: 1004c666a

bool FUN_1004c666a(long *param_1)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (long *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "pState != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_38,0x16);
    }
    bVar4 = false;
    FUN_1001782e9(0,0);
  }
  else {
    lVar1 = *param_1;
    bVar4 = 0 < (short)((short)((uint)(*(int *)(lVar1 + 0x28) - *(int *)(lVar1 + 0x20)) >> 4) *
                        -0x5555 +
                       (short)((uint)(*(int *)(lVar1 + 0x10) - *(int *)(lVar1 + 8)) >> 4) * -0x5555)
    ;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

