// name: setSyncPrefs:forDevice:withReply:
// address: 10064aa06

/* Function Stack Size: 0x28 bytes */

void AMPDevicesClientConnection::setSyncPrefs_forDevice_withReply_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  char cVar4;
  pid_t pVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *local_110;
  undefined8 local_108;
  code *local_100;
  undefined *local_f8;
  undefined8 local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  code *local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  ID local_a8;
  undefined8 local_a0;
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
  local_a8 = param_1;
  local_a0 = (*(code *)PTR__objc_retain_10082c7b8)(param_3);
  local_88 = (*(code *)puVar3)(param_4);
  uVar6 = (*(code *)puVar3)(param_5);
  uVar7 = FUN_100642e20();
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  cVar4 = _os_log_type_enabled(uVar7,1);
  local_98 = uVar6;
  if (cVar4 != '\0') {
    local_b0 = *(undefined8 *)(local_a8 + 0x18);
    uVar1 = *(undefined4 *)(local_a8 + 0xc);
    uVar2 = *(undefined4 *)(local_a8 + 0x10);
    uVar6 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSProcessInfo_10082c6a0,PTR_s_processInfo_10088bad8);
    local_80 = _objc_retainAutoreleasedReturnValue(uVar6);
    local_90 = uVar1;
    local_8c = uVar2;
    uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(local_80,PTR_s_processName_10088daf8);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    uVar8 = (*(code *)PTR__objc_retain_10082c7b8)(uVar6);
    pVar5 = _getpid();
    uVar6 = _sel_getName(param_2);
    uVar9 = (*(code *)PTR__objc_msgSend_10082c770)(local_88,PTR_s_deviceIdentifier_10088ca18);
    uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
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
    local_5e = uVar8;
    local_54 = pVar5;
    local_4e = uVar6;
    local_44 = uVar9;
    __os_log_impl(0x100000000,uVar7,1,
                  "%{public}@ [%d:%u] -> %{public}@ [%d]: { sel = %{public}s, id = %{public}@ }",
                  &local_78,0x3c);
    (*(code *)PTR__objc_release_10082c7b0)(uVar9);
    uVar6 = local_98;
    (*(code *)PTR__objc_release_10082c7b0)(uVar8);
    (*(code *)PTR__objc_release_10082c7b0)(local_80);
    (*(code *)PTR__objc_release_10082c7b0)(uVar8);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar7);
  puVar3 = PTR__objc_retain_10082c7b8;
  local_e8 = PTR___NSConcreteStackBlock_10082caf0;
  local_e0 = 0xc2000000;
  local_d8 = FUN_10064adb4;
  local_d0 = &DAT_100871720;
  local_c8 = (*(code *)PTR__objc_retain_10082c7b8)(local_a0);
  local_80 = local_c8;
  uVar7 = (*(code *)puVar3)(local_88);
  local_c0 = uVar7;
  local_b8 = (*(code *)puVar3)(uVar6);
  local_110 = PTR___NSConcreteStackBlock_10082caf0;
  local_108 = 0xc2000000;
  local_100 = FUN_10064af30;
  local_f8 = &DAT_10083f548;
  uVar6 = (*(code *)puVar3)(local_b8);
  local_f0 = uVar6;
  (*(code *)PTR__objc_msgSend_10082c770)
            (local_a8,PTR_s_processRequestBlockOnMainThread__10088db38,&local_e8,uVar7,1,1,
             &local_110);
  (*(code *)PTR__objc_release_10082c7b0)(local_f0);
  (*(code *)PTR__objc_release_10082c7b0)(local_b8);
  (*(code *)PTR__objc_release_10082c7b0)(local_c0);
  (*(code *)PTR__objc_release_10082c7b0)(local_c8);
  (*(code *)PTR__objc_release_10082c7b0)(uVar6);
  (*(code *)PTR__objc_release_10082c7b0)(uVar7);
  (*(code *)PTR__objc_release_10082c7b0)(local_80);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

