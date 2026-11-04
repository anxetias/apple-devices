// name: FUN_100601f45
// address: 100601f45

undefined4 FUN_100601f45(long param_1)

{
  long lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar1 = *(long *)(param_1 + 0x10);
  cVar2 = FUN_100601c1f();
  if (cVar2 == '\0') {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "IPodSyncContextIsValid(context)";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (*(char *)(param_1 + 0x4de) != '\0') {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "context->estimatingTotals == false";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (((lVar1 == 0) || (*(int *)(lVar1 + 0x169f8) == 9)) ||
     ((((uVar3 = 0x489, *(char *)(lVar1 + 0x1684a) == '\0' &&
        ((uVar3 = 0xffffff80, *(char *)(lVar1 + 0x6acc) == '\0' &&
         (*(char *)(lVar1 + 0x6acb) == '\0')))) &&
       ((*(long *)(lVar1 + 0x30) == 0 || ((*(byte *)(*(long *)(lVar1 + 0x30) + 0x2be0) & 0x40) == 0)
        ))) && (*(char *)(lVar1 + 0x6acd) == '\0')))) {
    uVar3 = *(undefined4 *)(param_1 + 0x30);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

