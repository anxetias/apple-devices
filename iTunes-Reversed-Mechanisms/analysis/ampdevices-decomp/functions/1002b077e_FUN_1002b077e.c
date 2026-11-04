// name: FUN_1002b077e
// address: 1002b077e

void FUN_1002b077e(long param_1,long param_2)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "trackInstance != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    FUN_1002b0e52(param_2);
    FUN_1002b0ea5(param_2);
    if ((**(byte **)(param_2 + 0x10) & 1) != 0) {
      FUN_100175848(*(undefined8 *)(*(byte **)(param_2 + 0x10) + 0xb0));
      lVar1 = *(long *)(param_2 + 0x10);
      *(undefined8 *)(lVar1 + 0xb0) = 0;
      FUN_10017060f(*(undefined8 *)(lVar1 + 0x98));
      *(undefined8 *)(lVar1 + 0x98) = 0;
      uVar3 = (uint)*(undefined8 *)(param_1 + 0x1bb0);
      if ((uVar3 >> 0x1d & 1) == 0) {
        FUN_1001dcff5(param_1 + 0x2250,*(undefined4 *)(*(long *)(param_2 + 0x10) + 0x68));
        FUN_1001dcff5(param_1 + 0x22a0,*(undefined4 *)(*(long *)(param_2 + 0x10) + 0x6c));
        FUN_1001dcff5(param_1 + 0x2390,*(undefined4 *)(*(long *)(param_2 + 0x10) + 0x74));
        FUN_1001dcff5(param_1 + 0x23e0,*(undefined4 *)(*(long *)(param_2 + 0x10) + 0x78));
        FUN_1001dcff5(param_1 + 0x2390,*(undefined4 *)(*(long *)(param_2 + 0x10) + 0x7c));
        FUN_1001dcff5(param_1 + 0x23e0,*(undefined4 *)(*(long *)(param_2 + 0x10) + 0x80));
        uVar3 = (uint)*(undefined8 *)(param_1 + 0x1bb0);
      }
      if ((uVar3 >> 0x1d & 1) == 0) {
        FUN_1001c5aec(*(undefined8 *)(param_1 + 0x1bd8),*(undefined8 *)(param_2 + 0x10));
      }
    }
    if (((**(byte **)(param_2 + 0x18) & 1) != 0) && ((*(byte *)(param_1 + 0x1bb3) & 0x20) == 0)) {
      FUN_1001c5aec(*(undefined8 *)(param_1 + 0x1be8));
    }
    if (((**(byte **)(param_2 + 0x20) & 1) != 0) && ((*(byte *)(param_1 + 0x1bb3) & 0x20) == 0)) {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
        FUN_1001c5aec(*(undefined8 *)(param_1 + 0x1bf0));
        return;
      }
      goto LAB_1002b0977;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
LAB_1002b0977:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

