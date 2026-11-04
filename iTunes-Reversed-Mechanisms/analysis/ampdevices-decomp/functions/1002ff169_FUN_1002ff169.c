// name: FUN_1002ff169
// address: 1002ff169

void FUN_1002ff169(long param_1,char param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_3a = "trackInstance != nullptr";
LAB_1002ff2d9:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else if ((*(long *)(param_1 + 8) == 0) ||
          (lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar1 == 0)) {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_3a = "trackData != nullptr";
      goto LAB_1002ff2d9;
    }
  }
  else {
    lVar2 = *(long *)(param_1 + 0x10);
    if (lVar2 != 0) {
      if ((*(int *)(lVar2 + 0x88) != 0) && (*(long *)(lVar2 + 0x38) != 0)) {
        uVar5 = FUN_1002b1255(param_1,0);
        if (((uVar5 & 0xfe38a204) == 0) && ((param_2 != '\0' || (*(int *)(param_1 + 0x34) != 0)))) {
          uVar4 = FUN_1002ff308(lVar1);
          *(undefined4 *)(param_1 + 0x34) = uVar4;
        }
      }
      goto LAB_1002ff257;
    }
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_3a = "trackInstance->extendedInfo != nullptr";
      goto LAB_1002ff2d9;
    }
  }
  FUN_1001782e9(0,0);
LAB_1002ff257:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

