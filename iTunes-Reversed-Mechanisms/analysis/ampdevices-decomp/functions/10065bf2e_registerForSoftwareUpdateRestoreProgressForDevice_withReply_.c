// name: registerForSoftwareUpdateRestoreProgressForDevice:withReply:
// address: 10065bf2e

/* Function Stack Size: 0x20 bytes */

ID AMPDevicesClientConnection::registerForSoftwareUpdateRestoreProgressForDevice_withReply_
             (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  pid_t pVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ID IVar11;
  undefined *local_100;
  undefined8 local_f8;
  code *local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  code *local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  ID local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 local_80;
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
  
  puVar3 = PTR__objc_retain_10082c7b8;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_a0 = param_1;
  local_88 = (*(code *)PTR__objc_retain_10082c7b8)(param_3);
  uVar7 = (*(code *)puVar3)(param_4);
  uVar8 = FUN_100642e20();
  uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
  cVar5 = _os_log_type_enabled(uVar8,1);
  local_98 = uVar7;
  if (cVar5 != '\0') {
    local_a8 = *(undefined8 *)(local_a0 + 0x18);
    uVar1 = *(undefined4 *)(local_a0 + 0xc);
    uVar2 = *(undefined4 *)(local_a0 + 0x10);
    uVar7 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSProcessInfo_10082c6a0,PTR_s_processInfo_10088bad8);
    local_80 = _objc_retainAutoreleasedReturnValue(uVar7);
    local_90 = uVar1;
    local_8c = uVar2;
    uVar7 = (*(code *)PTR__objc_msgSend_10082c770)(local_80,PTR_s_processName_10088daf8);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    uVar9 = (*(code *)PTR__objc_retain_10082c7b8)(uVar7);
    pVar6 = _getpid();
    uVar7 = _sel_getName(param_2);
    uVar10 = (*(code *)PTR__objc_msgSend_10082c770)(local_88,PTR_s_deviceIdentifier_10088ca18);
    uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
    local_78 = 0x8420702;
    local_74 = local_a8;
    local_6c = 0x400;
    local_6a = local_8c;
    local_66 = 0x400;
    local_64 = local_90;
    local_60 = 0x842;
    local_56 = 0x400;
    local_50 = 0x822;
    local_46 = 0x842;
    local_5e = uVar9;
    local_54 = pVar6;
    local_4e = uVar7;
    local_44 = uVar10;
    __os_log_impl(0x100000000,uVar8,1,
                  "%{public}@ [%d:%u] -> %{public}@ [%d]: { sel = %{public}s, id = %{public}@ }",
                  &local_78,0x3c);
    (*(code *)PTR__objc_release_10082c7b0)(uVar10);
    uVar7 = local_98;
    (*(code *)PTR__objc_release_10082c7b0)(uVar9);
    (*(code *)PTR__objc_release_10082c7b0)(local_80);
    (*(code *)PTR__objc_release_10082c7b0)(uVar9);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar8);
  uVar8 = (*(code *)PTR__objc_msgSend_10082c770)
                    (PTR__OBJC_CLASS___NSProgress_10082c6a8,
                     PTR_s_progressWithTotalUnitCount__10088dc00,0xffffffffffffffff);
  uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
  puVar4 = PTR___NSConcreteStackBlock_10082caf0;
  puVar3 = PTR__objc_retain_10082c7b8;
  local_d8 = PTR___NSConcreteStackBlock_10082caf0;
  local_d0 = 0xc2000000;
  local_c8 = FUN_10065c2bc;
  local_c0 = &DAT_1008716c0;
  local_b8 = (*(code *)PTR__objc_retain_10082c7b8)(uVar8);
  local_80 = local_b8;
  local_b0 = (*(code *)puVar3)(uVar7);
  local_100 = puVar4;
  local_f8 = 0xc2000000;
  local_f0 = FUN_10065c335;
  local_e8 = &DAT_10083f548;
  uVar7 = (*(code *)puVar3)(local_b0);
  local_e0 = uVar7;
  (*(code *)PTR__objc_msgSend_10082c770)
            (local_a0,PTR_s_processRequestBlockOnMainThread__10088db38,&local_d8,local_88,0,1,
             &local_100);
  (*(code *)PTR__objc_release_10082c7b0)(local_e0);
  (*(code *)PTR__objc_release_10082c7b0)(local_b0);
  (*(code *)PTR__objc_release_10082c7b0)(local_b8);
  (*(code *)PTR__objc_release_10082c7b0)(uVar7);
  (*(code *)PTR__objc_release_10082c7b0)(local_88);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    IVar11 = _objc_autoreleaseReturnValue(local_80);
    return IVar11;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

