// name: FUN_1006020dd
// address: 1006020dd

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1006020dd(long param_1)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  double dVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar1 = *(long *)(param_1 + 0x10);
  cVar2 = FUN_100601c1f();
  if (cVar2 == '\0') {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "IPodSyncContextIsValid(context)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (*(char *)(param_1 + 0x4de) != '\0') {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "context->estimatingTotals == false";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  dVar4 = (double)FUN_1001ebd46();
  if (*(double *)(param_1 + 0x4e8) + _DAT_100749530 <= dVar4) {
    FUN_1001b1464();
    uVar3 = FUN_1001ebd46();
    *(undefined8 *)(param_1 + 0x4e8) = uVar3;
    uVar3 = 0xffffff80;
    if (((*(char *)(lVar1 + 0x6acc) != '\0') || (*(char *)(lVar1 + 0x6acb) != '\0')) ||
       ((*(long *)(lVar1 + 0x30) != 0 && ((*(byte *)(*(long *)(lVar1 + 0x30) + 0x2be0) & 0x40) != 0)
        ))) goto LAB_1006021a7;
  }
  uVar3 = 0;
LAB_1006021a7:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}

