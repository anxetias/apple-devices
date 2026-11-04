// name: FUN_10023e278
// address: 10023e278

/* WARNING: Removing unreachable block (ram,0x00010023e3ba) */

undefined8 * FUN_10023e278(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  int local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_1 = 0;
  param_1[1] = 0;
  iVar3 = _PasteboardCreate(PTR_cf_com_apple_AMPDevicesAgent_10085c0f8);
  if (iVar3 == -0x80) goto LAB_10023e3bf;
  if (iVar3 == 0) {
    iVar3 = _PasteboardClear(0);
    if (iVar3 == -0x80) goto LAB_10023e3bf;
    if (iVar3 == 0) {
      _PasteboardSynchronize(0);
      pvVar4 = operator_new(0xb0,(nothrow_t *)PTR_nothrow_10082c970);
      if (pvVar4 != (void *)0x0) {
        FUN_10023e55a(pvVar4,0);
      }
      FUN_10023e45a(param_1,pvVar4);
      goto LAB_10023e3bf;
    }
    uVar5 = FUN_1001cc310();
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    iVar1 = local_3a;
  }
  else {
    uVar5 = FUN_1001cc310();
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    iVar1 = local_3a;
  }
  local_3a = iVar3;
  if (cVar2 != '\0') {
    local_3c = 0x400;
    local_44 = "Assertion failure";
    local_48 = 0x8220202;
    __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x12);
    iVar1 = local_3a;
  }
  local_3a = iVar1;
  (*(code *)PTR__objc_release_10082c7b0)(uVar5);
LAB_10023e3bf:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

