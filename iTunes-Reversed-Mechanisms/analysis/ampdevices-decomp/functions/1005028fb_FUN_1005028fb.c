// name: FUN_1005028fb
// address: 1005028fb

undefined8 FUN_1005028fb(undefined8 param_1,undefined1 *param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (undefined1 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_2a = "autoFillPrefs != nullptr";
LAB_100502a1a:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else {
    lVar2 = FUN_1004de449();
    if (lVar2 != 0) {
      cVar1 = *(char *)(lVar2 + 0x35c);
      *param_2 = *(undefined1 *)(lVar2 + 0x14d1a);
      param_2[1] = *(undefined1 *)(lVar2 + 0x14d1b);
      param_2[2] = ((cVar1 == '\0') + 1U & *(byte *)(lVar2 + 0x14d1c)) != 0;
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(lVar2 + 0x14d20);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(lVar2 + 0x14d10);
      *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(lVar2 + 0x153a0);
      uVar3 = 0;
      goto LAB_1005029df;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_2a = "handlerData != nullptr";
      goto LAB_100502a1a;
    }
  }
  FUN_1001782e9(0,0);
  uVar3 = 0xffffffce;
LAB_1005029df:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

