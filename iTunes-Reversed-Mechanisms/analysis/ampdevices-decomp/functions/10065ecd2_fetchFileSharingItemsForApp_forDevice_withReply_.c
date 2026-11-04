// name: fetchFileSharingItemsForApp:forDevice:withReply:
// address: 10065ecd2

/* Function Stack Size: 0x28 bytes */

void AMPDevicesClientConnection::fetchFileSharingItemsForApp_forDevice_withReply_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined *puVar4;
  char cVar5;
  pid_t pVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined4 local_478;
  char *local_474;
  undefined2 local_46c;
  int local_46a;
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  undefined4 local_44a;
  undefined2 uStack_446;
  undefined2 uStack_444;
  undefined2 uStack_442;
  undefined2 local_440;
  undefined8 local_43e;
  undefined2 local_436;
  pid_t local_434;
  undefined2 local_430;
  undefined8 local_42e;
  undefined2 local_426;
  undefined8 local_424;
  long local_38;
  
  puVar4 = PTR__objc_retain_10082c7b8;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar8 = (*(code *)PTR__objc_retain_10082c7b8)(param_3);
  uVar9 = (*(code *)puVar4)(param_4);
  lVar10 = (*(code *)puVar4)(param_5);
  uVar11 = FUN_100642e20();
  uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
  cVar5 = _os_log_type_enabled(uVar11,1);
  if (cVar5 != '\0') {
    pcVar3 = *(char **)(param_1 + 0x18);
    uVar1 = *(undefined4 *)(param_1 + 0xc);
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    uVar12 = (*(code *)PTR__objc_msgSend_10082c770)
                       (PTR__OBJC_CLASS___NSProcessInfo_10082c6a0,PTR_s_processInfo_10088bad8);
    uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
    uVar13 = (*(code *)PTR__objc_msgSend_10082c770)(uVar12,PTR_s_processName_10088daf8);
    uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
    uVar13 = (*(code *)PTR__objc_retain_10082c7b8)(uVar13);
    pVar6 = _getpid();
    uVar14 = _sel_getName(param_2);
    uVar15 = (*(code *)PTR__objc_msgSend_10082c770)(uVar9,PTR_s_deviceIdentifier_10088ca18);
    uVar15 = _objc_retainAutoreleasedReturnValue(uVar15);
    local_458 = 0x8420702;
    local_44c = 0x400;
    uStack_446 = 0x400;
    uStack_444 = (undefined2)uVar1;
    uStack_442 = (undefined2)((uint)uVar1 >> 0x10);
    local_440 = 0x842;
    local_436 = 0x400;
    local_430 = 0x822;
    local_426 = 0x842;
    local_454 = pcVar3;
    local_44a = uVar2;
    local_43e = uVar13;
    local_434 = pVar6;
    local_42e = uVar14;
    local_424 = uVar15;
    __os_log_impl(0x100000000,uVar11,1,
                  "%{public}@ [%d:%u] -> %{public}@ [%d]: { sel = %{public}s, id = %{public}@ }",
                  &local_458,0x3c);
    (*(code *)PTR__objc_release_10082c7b0)(uVar15);
    (*(code *)PTR__objc_release_10082c7b0)(uVar13);
    (*(code *)PTR__objc_release_10082c7b0)(uVar12);
    (*(code *)PTR__objc_release_10082c7b0)(uVar13);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar11);
  (*(code *)PTR__objc_msgSend_10082c770)
            (&objc::class_t::AMPDevicesClientConnection,PTR_s_ensureFullService_10088dad8);
  uVar11 = (*(code *)PTR__objc_msgSend_10082c770)(uVar9,PTR_s_deviceIdentifier_10088ca18);
  uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
  lVar16 = FUN_1005b8e71(uVar11);
  (*(code *)PTR__objc_release_10082c7b0)(uVar11);
  if (lVar16 == 0) {
    uVar11 = FUN_1001cc310();
    uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
    cVar5 = _os_log_type_enabled(uVar11,0x10);
    if (cVar5 != '\0') {
      local_458 = 0x8220202;
      local_454 = "Assertion failure";
      local_44c = 0x822;
      local_44a = 0x7e79a7;
      uStack_446 = 1;
      uStack_444 = 0;
      __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar11);
    FUN_1001782e9(0,0);
    uVar11 = (*(code *)PTR__objc_msgSend_10082c770)
                       (PTR__OBJC_CLASS___NSError_10082c660,PTR_s_errorWithOSStatus__10088d958,
                        0x2365);
    uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
    (**(code **)(lVar10 + 0x10))(lVar10,0,uVar11);
    (*(code *)PTR__objc_release_10082c7b0)(uVar11);
    goto LAB_10065f057;
  }
  iVar7 = FUN_10036c8bb(lVar16,uVar8,&local_458);
  if (iVar7 == -0x80) {
LAB_10065f016:
    uVar11 = (*(code *)PTR__objc_msgSend_10082c770)
                       (PTR__OBJC_CLASS___NSError_10082c660,PTR_s_errorWithOSStatus__10088d958,iVar7
                       );
    uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
    (**(code **)(lVar10 + 0x10))(lVar10,0,uVar11);
  }
  else {
    if (iVar7 != 0) {
      uVar11 = FUN_1001cc310();
      uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
      cVar5 = _os_log_type_enabled(uVar11,0x10);
      if (cVar5 != '\0') {
        local_478 = 0x8220202;
        local_474 = "Assertion failure";
        local_46c = 0x400;
        local_46a = iVar7;
        __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_478,0x12);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar11);
      goto LAB_10065f016;
    }
    uVar11 = (*(code *)PTR__objc_msgSend_10082c770)
                       (param_1,PTR_s_fetchFileSharingItemsForApp_forD_10088dd90,uVar8,uVar9,
                        &local_458);
    uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
    FUN_10036d5c0(lVar16,uVar8);
    (**(code **)(lVar10 + 0x10))(lVar10,uVar11,0);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar11);
  FUN_10017060f(lVar16);
LAB_10065f057:
  (*(code *)PTR__objc_release_10082c7b0)(lVar10);
  (*(code *)PTR__objc_release_10082c7b0)(uVar9);
  (*(code *)PTR__objc_release_10082c7b0)(uVar8);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

