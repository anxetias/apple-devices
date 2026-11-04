// name: FUN_100609d02
// address: 100609d02

void FUN_100609d02(long param_1)

{
  long lVar1;
  void *pvVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  int local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar1 = *(long *)(param_1 + 0x10);
  pvVar2 = *(void **)(param_1 + 0x20);
  if (pvVar2 != (void *)0x0) {
    FUN_10022ad5e(pvVar2);
    operator_delete(pvVar2);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  iVar4 = FUN_100432267(*(undefined4 *)(lVar1 + 0x28),(undefined8 *)(param_1 + 0x20));
  if ((iVar4 != -0x80) && (iVar4 != 0)) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x400;
      local_3a = iVar4;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x12);
    }
  }
  *(undefined1 *)(param_1 + 0x4d8) = 1;
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

