// name: fetchBackupPasswordFromKeychainForDevice:withReply:
// address: 100653e93

/* Function Stack Size: 0x20 bytes */

void AMPDevicesClientConnection::fetchBackupPasswordFromKeychainForDevice_withReply_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  undefined4 uVar1;
  undefined *puVar2;
  char cVar3;
  pid_t pVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
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
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
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
  local_a0 = param_1;
  uVar5 = (*(code *)PTR__objc_retain_10082c7b8)(param_3);
  uVar6 = (*(code *)puVar2)(param_4);
  uVar7 = FUN_100642e20();
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  cVar3 = _os_log_type_enabled(uVar7,1);
  local_98 = uVar6;
  local_80 = uVar5;
  if (cVar3 != '\0') {
    local_a8 = *(undefined8 *)(local_a0 + 0x18);
    uVar1 = *(undefined4 *)(local_a0 + 0xc);
    local_88 = *(undefined4 *)(local_a0 + 0x10);
    uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSProcessInfo_10082c6a0,PTR_s_processInfo_10088bad8);
    local_90 = _objc_retainAutoreleasedReturnValue(uVar5);
    local_84 = uVar1;
    uVar5 = (*(code *)PTR__objc_msgSend_10082c770)(local_90,PTR_s_processName_10088daf8);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    uVar5 = (*(code *)PTR__objc_retain_10082c7b8)(uVar5);
    pVar4 = _getpid();
    uVar6 = _sel_getName(param_2);
    uVar8 = (*(code *)PTR__objc_msgSend_10082c770)(local_80,PTR_s_deviceIdentifier_10088ca18);
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
    local_78 = 0x8420702;
    local_74 = local_a8;
    local_6c = 0x400;
    local_6a = local_88;
    local_66 = 0x400;
    local_64 = local_84;
    local_60 = 0x842;
    local_56 = 0x400;
    local_50 = 0x822;
    local_46 = 0x842;
    local_5e = uVar5;
    local_54 = pVar4;
    local_4e = uVar6;
    local_44 = uVar8;
    __os_log_impl(0x100000000,uVar7,1,
                  "%{public}@ [%d:%u] -> %{public}@ [%d]: { sel = %{public}s, id = %{public}@ }",
                  &local_78,0x3c);
    (*(code *)PTR__objc_release_10082c7b0)(uVar8);
    (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    (*(code *)PTR__objc_release_10082c7b0)(local_90);
    (*(code *)PTR__objc_release_10082c7b0)(uVar5);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar7);
  puVar2 = PTR__objc_retain_10082c7b8;
  local_d8 = PTR___NSConcreteStackBlock_10082caf0;
  local_d0 = 0xc2000000;
  local_c8 = FUN_1006541f6;
  local_c0 = &DAT_1008716c0;
  uVar5 = (*(code *)PTR__objc_retain_10082c7b8)(local_98);
  local_b0 = uVar5;
  uVar6 = (*(code *)puVar2)(local_80);
  local_100 = PTR___NSConcreteStackBlock_10082caf0;
  local_f8 = 0xc2000000;
  local_f0 = FUN_100654345;
  local_e8 = &DAT_10083f548;
  local_b8 = uVar6;
  uVar5 = (*(code *)puVar2)(uVar5);
  local_e0 = uVar5;
  (*(code *)PTR__objc_msgSend_10082c770)
            (local_a0,PTR_s_processRequestBlockOnMainThread__10088db38,&local_d8,uVar6,1,1,
             &local_100);
  (*(code *)PTR__objc_release_10082c7b0)(local_e0);
  (*(code *)PTR__objc_release_10082c7b0)(local_b8);
  (*(code *)PTR__objc_release_10082c7b0)(local_b0);
  (*(code *)PTR__objc_release_10082c7b0)(uVar5);
  (*(code *)PTR__objc_release_10082c7b0)(uVar6);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

