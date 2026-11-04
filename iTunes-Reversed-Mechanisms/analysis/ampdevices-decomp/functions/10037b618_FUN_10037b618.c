// name: FUN_10037b618
// address: 10037b618

void FUN_10037b618(long param_1,ulong param_2)

{
  void *pvVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  void *pvVar5;
  size_t sVar6;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  param_2 = param_2 & 0xffffffff;
  lVar2 = *(long *)(param_1 + 0x10);
  if (param_2 < (ulong)(*(long *)(param_1 + 0x18) - lVar2 >> 3)) {
    pvVar1 = (void *)(lVar2 + param_2 * 8);
    pvVar5 = (void *)(lVar2 + param_2 * 8 + 8);
    sVar6 = *(long *)(param_1 + 0x18) - (long)pvVar5;
    if (sVar6 != 0) {
      _memmove(pvVar1,pvVar5,sVar6);
    }
    *(size_t *)(param_1 + 0x18) = (long)pvVar1 + sVar6;
  }
  else {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "inIndex < mItems.size()";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

