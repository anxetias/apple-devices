// name: fetchFileSharingItemsForApp:forDevice:fromFolder:
// address: 10065f848

/* Function Stack Size: 0x28 bytes */

ID AMPDevicesClientConnection::fetchFileSharingItemsForApp_forDevice_fromFolder_
             (ID param_1,SEL param_2,ID param_3,ID param_4,const_JRFileSpec__ param_5)

{
  undefined4 uVar1;
  undefined *puVar2;
  char cVar3;
  pid_t pVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ID IVar10;
  undefined1 local_6e8 [84];
  int local_694;
  undefined8 local_690;
  undefined8 local_688;
  char *local_680;
  const_JRFileSpec__ local_678;
  undefined *local_670;
  undefined8 local_668;
  undefined8 local_660;
  undefined1 local_658 [512];
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  int local_44a;
  undefined2 local_446;
  undefined4 local_444;
  undefined2 local_440;
  undefined8 local_43e;
  undefined2 local_436;
  pid_t local_434;
  undefined2 local_430;
  undefined8 local_42e;
  undefined2 local_426;
  undefined8 local_424;
  long local_38;
  
  puVar2 = PTR__objc_retain_10082c7b8;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_688 = (*(code *)PTR__objc_retain_10082c7b8)(param_3);
  local_668 = (*(code *)puVar2)(param_4);
  uVar6 = FUN_100642e20();
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  cVar3 = _os_log_type_enabled(uVar6,1);
  if (cVar3 != '\0') {
    local_680 = *(char **)(param_1 + 0x18);
    uVar1 = *(undefined4 *)(param_1 + 0xc);
    iVar5 = *(int *)(param_1 + 0x10);
    uVar7 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSProcessInfo_10082c6a0,PTR_s_processInfo_10088bad8);
    local_660 = _objc_retainAutoreleasedReturnValue(uVar7);
    local_670 = (undefined *)CONCAT44(local_670._4_4_,uVar1);
    local_694 = iVar5;
    local_678 = param_5;
    uVar7 = (*(code *)PTR__objc_msgSend_10082c770)(local_660,PTR_s_processName_10088daf8);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    uVar7 = (*(code *)PTR__objc_retain_10082c7b8)(uVar7);
    pVar4 = _getpid();
    uVar8 = _sel_getName(param_2);
    uVar9 = (*(code *)PTR__objc_msgSend_10082c770)(local_668,PTR_s_deviceIdentifier_10088ca18);
    uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
    local_458 = 0x8420702;
    local_454 = local_680;
    local_44c = 0x400;
    local_44a = local_694;
    local_446 = 0x400;
    local_444 = local_670._0_4_;
    local_440 = 0x842;
    local_436 = 0x400;
    local_430 = 0x822;
    local_426 = 0x842;
    local_43e = uVar7;
    local_434 = pVar4;
    local_42e = uVar8;
    local_424 = uVar9;
    __os_log_impl(0x100000000,uVar6,1,
                  "%{public}@ [%d:%u] -> %{public}@ [%d]: { sel = %{public}s, id = %{public}@ }",
                  &local_458,0x3c);
    (*(code *)PTR__objc_release_10082c7b0)(uVar9);
    param_5 = local_678;
    (*(code *)PTR__objc_release_10082c7b0)(uVar7);
    (*(code *)PTR__objc_release_10082c7b0)(local_660);
    (*(code *)PTR__objc_release_10082c7b0)(uVar7);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar6);
  local_690 = 0;
  iVar5 = FUN_1001879bd(param_5,0);
  if (iVar5 != -0x80) {
    if (iVar5 == 0) {
      uVar6 = (*(code *)PTR__objc_msgSend_10082c770)
                        (PTR__OBJC_CLASS___NSMutableArray_10082dfa0,PTR_s_array_10088c210);
      local_660 = _objc_retainAutoreleasedReturnValue(uVar6);
      puVar2 = PTR__objc_release_10082c7b0;
      local_680 = PTR_s_deviceIdentifier_10088ca18;
      local_678 = (const_JRFileSpec__)PTR_s_attributesForFileSharingItem_wit_10088ddc8;
      local_670 = PTR_s_addObject__10088c218;
      while( true ) {
        iVar5 = FUN_100187bea(local_690,&local_458,local_6e8,local_658);
        if (iVar5 != 0) break;
        cVar3 = FUN_100182503(local_6e8,local_658);
        if (cVar3 == '\0') {
          uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(local_668,local_680);
          uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
          uVar7 = (*(code *)PTR__objc_msgSend_10082c770)
                            (&objc::class_t::AMPDevicesClientConnection,local_678,&local_458,
                             local_658,local_6e8,uVar6,local_688);
          uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
          (*(code *)puVar2)(uVar6);
          (*(code *)PTR__objc_msgSend_10082c770)(local_660,local_670,uVar7);
          (*(code *)puVar2)(uVar7);
        }
      }
      FUN_100187c42(local_690);
      goto LAB_10065fba1;
    }
    uVar6 = FUN_1001cc310();
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_458 = 0x8220202;
      local_454 = "Assertion failure";
      local_44c = 0x400;
      local_44a = iVar5;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_458,0x12);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar6);
  }
  local_660 = 0;
LAB_10065fba1:
  (*(code *)PTR__objc_release_10082c7b0)(local_668);
  (*(code *)PTR__objc_release_10082c7b0)(local_688);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    IVar10 = _objc_autoreleaseReturnValue(local_660);
    return IVar10;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

