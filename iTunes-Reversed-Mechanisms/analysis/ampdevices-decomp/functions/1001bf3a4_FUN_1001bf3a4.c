// name: FUN_1001bf3a4
// address: 1001bf3a4

undefined8
FUN_1001bf3a4(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
             undefined8 *param_6)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  void *pvVar4;
  long lVar5;
  long local_68 [4];
  long *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  bVar1 = param_4 == 0;
  if (*(long *)(param_3 + 0x20) != 0) {
    bVar1 = param_4 != 0 || param_5 != 0;
  }
  if (bVar1) {
    uVar3 = FUN_1001cc310();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006a3964(uVar3);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    FUN_1001782e9(0,0);
  }
  else {
    if (param_6 != (undefined8 *)0x0) {
      *param_6 = 0;
      pvVar4 = operator_new(0x50,(nothrow_t *)PTR_nothrow_10082c970);
      if (pvVar4 == (void *)0x0) {
        uVar3 = FUN_1001cc310();
        uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
        cVar2 = _os_log_type_enabled(uVar3,0x10);
        if (cVar2 != '\0') {
          FUN_1006a3878(uVar3);
        }
        (*(code *)PTR__objc_release_10082c7b0)(uVar3);
        FUN_1001782e9(0,0);
        uVar3 = 0xffffff94;
        goto LAB_1001bf52c;
      }
      FUN_10028593a(local_68,param_3);
      FUN_1001be0bc(pvVar4,local_68,param_4,param_5);
      if (local_48 == local_68) {
        lVar5 = 0x20;
LAB_1001bf521:
        (**(code **)(*local_48 + lVar5))();
      }
      else {
        lVar5 = 0x28;
        if (local_48 != (long *)0x0) goto LAB_1001bf521;
      }
      *param_6 = pvVar4;
      uVar3 = 0;
      goto LAB_1001bf52c;
    }
    uVar3 = FUN_1001cc310();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006a38ee(uVar3);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    FUN_1001782e9(0,0);
  }
  uVar3 = 0xffffffce;
LAB_1001bf52c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}

