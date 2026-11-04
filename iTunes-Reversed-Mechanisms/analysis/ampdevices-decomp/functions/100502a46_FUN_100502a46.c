// name: FUN_100502a46
// address: 100502a46

undefined8 FUN_100502a46(undefined8 param_1,undefined1 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (undefined1 *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar2,0x10);
    if (cVar3 != '\0') {
      local_2a = "autoFillPrefs != nullptr";
LAB_100502b63:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else {
    lVar1 = FUN_1004de449();
    if (lVar1 != 0) {
      *(undefined1 *)(lVar1 + 0x14d1a) = *param_2;
      *(undefined1 *)(lVar1 + 0x14d1b) = param_2[1];
      uVar2 = 0;
      cVar3 = (*(char *)(lVar1 + 0x35c) == '\0') + '\x01';
      if (param_2[2] == '\0') {
        cVar3 = '\0';
      }
      *(char *)(lVar1 + 0x14d1c) = cVar3;
      *(undefined8 *)(lVar1 + 0x14d20) = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(lVar1 + 0x14d10) = *(undefined8 *)(param_2 + 0x10);
      goto LAB_100502b28;
    }
    uVar2 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar2,0x10);
    if (cVar3 != '\0') {
      local_2a = "handlerData != nullptr";
      goto LAB_100502b63;
    }
  }
  FUN_1001782e9(0,0);
  uVar2 = 0xffffffce;
LAB_100502b28:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

