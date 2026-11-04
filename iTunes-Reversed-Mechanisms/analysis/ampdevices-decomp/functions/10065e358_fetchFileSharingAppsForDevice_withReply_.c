// name: fetchFileSharingAppsForDevice:withReply:
// address: 10065e358

/* Function Stack Size: 0x20 bytes */

void AMPDevicesClientConnection::fetchFileSharingAppsForDevice_withReply_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  char cVar5;
  pid_t pVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 local_78;
  undefined8 local_74;
  undefined2 local_6c;
  undefined4 local_6a;
  undefined2 local_66;
  undefined4 local_64;
  undefined2 local_60;
  undefined8 local_5e;
  undefined2 local_56;
  pid_t local_54;
  undefined2 local_50;
  undefined8 local_4e;
  undefined2 local_46;
  undefined8 local_44;
  long local_38;
  
  puVar4 = PTR__objc_retain_10082c7b8;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar7 = (*(code *)PTR__objc_retain_10082c7b8)(param_3);
  uVar8 = (*(code *)puVar4)(param_4);
  uVar9 = FUN_100642e20();
  uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
  cVar5 = _os_log_type_enabled(uVar9,1);
  if (cVar5 != '\0') {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    uVar1 = *(undefined4 *)(param_1 + 0xc);
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    uVar10 = (*(code *)PTR__objc_msgSend_10082c770)
                       (PTR__OBJC_CLASS___NSProcessInfo_10082c6a0,PTR_s_processInfo_10088bad8);
    uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
    uVar11 = (*(code *)PTR__objc_msgSend_10082c770)(uVar10,PTR_s_processName_10088daf8);
    uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
    uVar11 = (*(code *)PTR__objc_retain_10082c7b8)(uVar11);
    pVar6 = _getpid();
    uVar12 = _sel_getName(param_2);
    uVar13 = (*(code *)PTR__objc_msgSend_10082c770)(uVar7,PTR_s_deviceIdentifier_10088ca18);
    uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
    local_78 = 0x8420702;
    local_6c = 0x400;
    local_66 = 0x400;
    local_60 = 0x842;
    local_56 = 0x400;
    local_50 = 0x822;
    local_46 = 0x842;
    local_74 = uVar3;
    local_6a = uVar2;
    local_64 = uVar1;
    local_5e = uVar11;
    local_54 = pVar6;
    local_4e = uVar12;
    local_44 = uVar13;
    __os_log_impl(0x100000000,uVar9,1,
                  "%{public}@ [%d:%u] -> %{public}@ [%d]: { sel = %{public}s, id = %{public}@ }",
                  &local_78,0x3c);
    (*(code *)PTR__objc_release_10082c7b0)(uVar13);
    (*(code *)PTR__objc_release_10082c7b0)(uVar11);
    (*(code *)PTR__objc_release_10082c7b0)(uVar10);
    (*(code *)PTR__objc_release_10082c7b0)(uVar11);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar9);
  (*(code *)PTR__objc_msgSend_10082c770)
            (&objc::class_t::AMPDevicesClientConnection,PTR_s_ensureFullService_10088dad8);
  uVar9 = (*(code *)PTR__objc_msgSend_10082c770)(uVar7,PTR_s_deviceIdentifier_10088ca18);
  uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
  (*(code *)PTR__objc_msgSend_10082c770)
            (&objc::class_t::AMPDevicesClientConnection,
             PTR_s_fetchFileSharingAppsForDeviceWit_10088dd78,uVar9,uVar8);
  (*(code *)PTR__objc_release_10082c7b0)(uVar9);
  (*(code *)PTR__objc_release_10082c7b0)(uVar8);
  (*(code *)PTR__objc_release_10082c7b0)(uVar7);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

