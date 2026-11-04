// name: FUN_1002b772e
// address: 1002b772e

void FUN_1002b772e(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined6 uStack_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_1 == 0) || (*(long *)(param_1 + 8) == 0)) ||
     (lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar1 == 0)) {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      local_40 = 1;
      uStack_3c = 0x822;
      uStack_3a = 0x2d08;
      uStack_38 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_1002b77cc;
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x38);
  if (lVar2 == param_2) goto LAB_1002b77cc;
  if (*(long *)(lVar1 + 0x2638) == 0) {
    if (param_2 != 0) goto LAB_1002b77ec;
  }
  else {
    if (lVar2 != 0) {
      FUN_1002adb1d(*(long *)(lVar1 + 0x2638),param_1);
    }
    if (param_2 != 0) {
      local_48 = (undefined4)param_2;
      uStack_44 = (undefined4)((ulong)param_2 >> 0x20);
      local_40 = (undefined4)param_1;
      uStack_3c = (undefined2)((ulong)param_1 >> 0x20);
      uStack_3a = (undefined2)((ulong)param_1 >> 0x30);
      FUN_1002b7dfc(*(undefined8 *)(lVar1 + 0x2638));
LAB_1002b77ec:
      FUN_1002af0ff(param_1);
    }
  }
  *(long *)(*(long *)(param_1 + 0x10) + 0x38) = param_2;
LAB_1002b77cc:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

