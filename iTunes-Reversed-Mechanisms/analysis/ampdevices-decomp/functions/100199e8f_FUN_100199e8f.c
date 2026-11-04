// name: FUN_100199e8f
// address: 100199e8f

undefined8 FUN_100199e8f(int *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_28 [4];
  undefined4 local_24;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == (int *)0x0) || (*param_1 != 0x6874646c)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006981a4(uVar2);
    }
  }
  else if (param_2 == (undefined4 *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10069812e(uVar2);
    }
  }
  else if (param_1[1] < 1) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_100698042(uVar2);
    }
  }
  else {
    if (*(long *)(param_1 + 0x1a) != 0) {
      cVar1 = FUN_10016af5a(*(long *)(param_1 + 0x1a),local_28);
      if (cVar1 == '\0') {
        uVar2 = 0xffffffff;
      }
      else {
        *param_2 = local_24;
        uVar2 = 0;
      }
      goto LAB_100199f17;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006980b8(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  uVar2 = 0xffffffce;
LAB_100199f17:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

