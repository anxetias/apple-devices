// name: registerForSyncProgressForDevice:withReply:
// address: 10064dff2

/* Function Stack Size: 0x20 bytes */

ID AMPDevicesClientConnection::registerForSyncProgressForDevice_withReply_
             (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  undefined4 uVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ID IVar8;
  undefined *local_e8;
  undefined8 local_e0;
  code *local_d8;
  undefined *local_d0;
  ID local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_94;
  undefined4 local_90;
  pid_t local_8c;
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
  
  puVar2 = PTR__objc_retain_10082c7b8;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar4 = (*(code *)PTR__objc_retain_10082c7b8)(param_3);
  local_a0 = (*(code *)puVar2)(param_4);
  uVar5 = FUN_100642e20();
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  cVar3 = _os_log_type_enabled(uVar5,1);
  local_88 = uVar4;
  if (cVar3 != '\0') {
    local_a8 = *(undefined8 *)(param_1 + 0x18);
    uVar1 = *(undefined4 *)(param_1 + 0xc);
    local_94 = *(undefined4 *)(param_1 + 0x10);
    uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSProcessInfo_10082c6a0,PTR_s_processInfo_10088bad8);
    local_80 = _objc_retainAutoreleasedReturnValue(uVar4);
    local_90 = uVar1;
    uVar4 = (*(code *)PTR__objc_msgSend_10082c770)(local_80,PTR_s_processName_10088daf8);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar4 = (*(code *)PTR__objc_retain_10082c7b8)(uVar4);
    local_8c = _getpid();
    uVar6 = _sel_getName(param_2);
    uVar7 = (*(code *)PTR__objc_msgSend_10082c770)(local_88,PTR_s_deviceIdentifier_10088ca18);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    local_78 = 0x8420702;
    local_74 = local_a8;
    local_6c = 0x400;
    local_6a = local_94;
    local_66 = 0x400;
    local_64 = local_90;
    local_60 = 0x842;
    local_56 = 0x400;
    local_54 = local_8c;
    local_50 = 0x822;
    local_46 = 0x842;
    local_5e = uVar4;
    local_4e = uVar6;
    local_44 = uVar7;
    __os_log_impl(0x100000000,uVar5,1,
                  "%{public}@ [%d:%u] -> %{public}@ [%d]: { sel = %{public}s, id = %{public}@ }",
                  &local_78,0x3c);
    (*(code *)PTR__objc_release_10082c7b0)(uVar7);
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
    (*(code *)PTR__objc_release_10082c7b0)(local_80);
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar5);
  uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                    (PTR__OBJC_CLASS___NSProgress_10082c6a8,
                     PTR_s_progressWithTotalUnitCount__10088dc00,0xffffffffffffffff);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  puVar2 = PTR__objc_retain_10082c7b8;
  local_e8 = PTR___NSConcreteStackBlock_10082caf0;
  local_e0 = 0xc2000000;
  local_d8 = FUN_10064e34f;
  local_d0 = &DAT_1008717b0;
  local_c8 = param_1;
  uVar5 = (*(code *)PTR__objc_retain_10082c7b8)(local_88);
  local_c0 = uVar5;
  local_b8 = (*(code *)puVar2)(uVar4);
  local_80 = local_b8;
  uVar4 = (*(code *)puVar2)(local_a0);
  local_b0 = uVar4;
  (*(code *)PTR__objc_msgSend_10082c770)
            (param_1,PTR_s_performBlockOnMainThreadAsync__10088daf0,&local_e8);
  (*(code *)PTR__objc_release_10082c7b0)(local_b0);
  (*(code *)PTR__objc_release_10082c7b0)(local_b8);
  (*(code *)PTR__objc_release_10082c7b0)(local_c0);
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  (*(code *)PTR__objc_release_10082c7b0)(uVar5);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    IVar8 = _objc_autoreleaseReturnValue(local_80);
    return IVar8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

