// name: FUN_1003b783d
// address: 1003b783d

long FUN_1003b783d(void)

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
  lVar2 = FUN_1001c629e(0x1aa8,&DAT_100711c6e);
  if (lVar2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "appContext != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    *(undefined8 *)(lVar2 + 0x15d8) = 0;
    *(undefined8 *)(lVar2 + 0x15e0) = 0;
    *(undefined1 *)(lVar2 + 1) = 1;
    DAT_1008c76a0 = lVar2;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

