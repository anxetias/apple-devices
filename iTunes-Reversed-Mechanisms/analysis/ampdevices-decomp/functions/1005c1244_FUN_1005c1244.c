// name: FUN_1005c1244
// address: 1005c1244

undefined8 FUN_1005c1244(undefined8 param_1,undefined4 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_438;
  undefined4 uStack_434;
  undefined4 local_430;
  undefined2 uStack_42c;
  undefined2 uStack_42a;
  undefined6 uStack_428;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == (undefined8 *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_438 = 0x8220202;
      uStack_434 = 0x7a0a90;
      local_430 = 1;
      uStack_42c = 0x822;
      uStack_42a = 0xf291;
      uStack_428 = 0x1007e;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_438,0x16);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    *param_3 = 0;
    cVar1 = FUN_1001ee068();
    if (cVar1 == '\0') {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
        uVar2 = FUN_1005c136e(param_1,param_2,param_3);
        return uVar2;
      }
      goto LAB_1005c1369;
    }
    local_430 = 0;
    uStack_42c = 0;
    uStack_42a = 0;
    local_438 = param_2;
    uVar2 = FUN_1005ba4e2(param_1,0x11,&local_438,param_3);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar2;
  }
LAB_1005c1369:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

