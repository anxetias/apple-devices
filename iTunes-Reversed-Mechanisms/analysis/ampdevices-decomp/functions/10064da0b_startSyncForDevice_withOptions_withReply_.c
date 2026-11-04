// name: startSyncForDevice:withOptions:withReply:
// address: 10064da0b

/* Function Stack Size: 0x28 bytes */

ID AMPDevicesClientConnection::startSyncForDevice_withOptions_withReply_
             (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4,ID param_5,
             undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  pid_t pVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ID IVar9;
  code *pcVar10;
  undefined *local_118;
  undefined8 local_110;
  code *local_108;
  undefined *local_100;
  undefined8 local_f8;
  undefined *local_f0;
  undefined8 local_e8;
  code *local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  unsigned_long_long local_b8;
  undefined8 local_b0;
  ID local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  unsigned_long_long local_80;
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
  
  pcVar10 = (code *)PTR__objc_retain_10082c7b8;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_a8 = param_1;
  local_80 = param_4;
  uVar5 = (*(code *)PTR__objc_retain_10082c7b8)(param_3);
  local_a0 = (*pcVar10)(param_5);
  uVar6 = FUN_100642e20();
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  cVar3 = _os_log_type_enabled(uVar6,1);
  local_88 = uVar5;
  if (cVar3 != '\0') {
    local_b0 = *(undefined8 *)(local_a8 + 0x18);
    uVar1 = *(undefined4 *)(local_a8 + 0xc);
    uVar2 = *(undefined4 *)(local_a8 + 0x10);
    uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSProcessInfo_10082c6a0,PTR_s_processInfo_10088bad8);
    local_98 = _objc_retainAutoreleasedReturnValue(uVar5);
    local_90 = uVar1;
    local_8c = uVar2;
    uVar5 = (*(code *)PTR__objc_msgSend_10082c770)(local_98,PTR_s_processName_10088daf8);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    uVar5 = (*(code *)PTR__objc_retain_10082c7b8)(uVar5);
    pVar4 = _getpid();
    uVar7 = _sel_getName(param_2);
    uVar8 = (*(code *)PTR__objc_msgSend_10082c770)(local_88,PTR_s_deviceIdentifier_10088ca18);
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
    local_78 = 0x8420702;
    local_74 = local_b0;
    local_6c = 0x400;
    local_6a = local_8c;
    local_66 = 0x400;
    local_64 = local_90;
    local_60 = 0x842;
    local_56 = 0x400;
    local_50 = 0x822;
    local_46 = 0x842;
    local_5e = uVar5;
    local_54 = pVar4;
    local_4e = uVar7;
    local_44 = uVar8;
    __os_log_impl(0x100000000,uVar6,1,
                  "%{public}@ [%d:%u] -> %{public}@ [%d]: { sel = %{public}s, id = %{public}@ }",
                  &local_78,0x3c);
    (*(code *)PTR__objc_release_10082c7b0)(uVar8);
    pcVar10 = (code *)PTR__objc_retain_10082c7b8;
    (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    (*(code *)PTR__objc_release_10082c7b0)(local_98);
    (*(code *)PTR__objc_release_10082c7b0)(uVar5);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar6);
  uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                    (PTR__OBJC_CLASS___NSProgress_10082c6a8,
                     PTR_s_progressWithTotalUnitCount__10088dc00,0xffffffffffffffff);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  local_f0 = PTR___NSConcreteStackBlock_10082caf0;
  local_e8 = 0xc2000000;
  local_e0 = FUN_10064dde0;
  local_d8 = &DAT_100871780;
  local_b8 = local_80;
  uVar6 = (*pcVar10)(local_88);
  local_d0 = uVar6;
  local_c8 = (*pcVar10)(uVar5);
  local_80 = local_c8;
  local_c0 = (*pcVar10)(local_a0);
  local_118 = PTR___NSConcreteStackBlock_10082caf0;
  local_110 = 0xc2000000;
  local_108 = FUN_10064dfe3;
  local_100 = &DAT_10083f548;
  uVar5 = (*pcVar10)(local_c0);
  local_f8 = uVar5;
  (*(code *)PTR__objc_msgSend_10082c770)
            (local_a8,PTR_s_processRequestBlockOnMainThread__10088db38,&local_f0,uVar6,1,1,
             &local_118);
  (*(code *)PTR__objc_release_10082c7b0)(local_f8);
  (*(code *)PTR__objc_release_10082c7b0)(local_c0);
  (*(code *)PTR__objc_release_10082c7b0)(local_c8);
  (*(code *)PTR__objc_release_10082c7b0)(local_d0);
  (*(code *)PTR__objc_release_10082c7b0)(uVar5);
  (*(code *)PTR__objc_release_10082c7b0)(uVar6);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    IVar9 = _objc_autoreleaseReturnValue(local_80);
    return IVar9;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

