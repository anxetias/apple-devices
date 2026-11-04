// name: completeActivationForDevice:withInfo:withData:withHeaders:withReply:
// address: 1006594c3

/* Function Stack Size: 0x38 bytes */

void AMPDevicesClientConnection::
     completeActivationForDevice_withInfo_withData_withHeaders_withReply_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,ID param_7,
               undefined4 param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  ID IVar4;
  char cVar5;
  pid_t pVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *local_118;
  undefined8 local_110;
  code *local_108;
  undefined *local_100;
  ID local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  ID local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  SEL local_88;
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
  local_c0 = param_1;
  local_88 = param_2;
  local_90 = (*(code *)PTR__objc_retain_10082c7b8)(param_3);
  local_a0 = (*(code *)puVar3)(param_4);
  uVar7 = (*(code *)puVar3)(param_5);
  local_b0 = (*(code *)puVar3)(param_6);
  local_b8 = (*(code *)puVar3)(param_7);
  uVar8 = FUN_100642e20();
  uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
  cVar5 = _os_log_type_enabled(uVar8,1);
  local_a8 = uVar7;
  if (cVar5 != '\0') {
    uVar7 = *(undefined8 *)(local_c0 + 0x18);
    uVar1 = *(undefined4 *)(local_c0 + 0xc);
    uVar2 = *(undefined4 *)(local_c0 + 0x10);
    uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSProcessInfo_10082c6a0,PTR_s_processInfo_10088bad8);
    local_80 = _objc_retainAutoreleasedReturnValue(uVar9);
    local_c8 = uVar7;
    local_98 = uVar1;
    local_94 = uVar2;
    uVar7 = (*(code *)PTR__objc_msgSend_10082c770)(local_80,PTR_s_processName_10088daf8);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    uVar7 = (*(code *)PTR__objc_retain_10082c7b8)(uVar7);
    pVar6 = _getpid();
    uVar9 = _sel_getName(local_88);
    uVar10 = (*(code *)PTR__objc_msgSend_10082c770)(local_90,PTR_s_deviceIdentifier_10088ca18);
    uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
    local_78 = 0x8420702;
    local_74 = local_c8;
    local_6c = 0x400;
    local_6a = local_94;
    local_66 = 0x400;
    local_64 = local_98;
    local_60 = 0x842;
    local_56 = 0x400;
    local_50 = 0x822;
    local_46 = 0x842;
    local_5e = uVar7;
    local_54 = pVar6;
    local_4e = uVar9;
    local_44 = uVar10;
    __os_log_impl(0x100000000,uVar8,1,
                  "%{public}@ [%d:%u] -> %{public}@ [%d]: { sel = %{public}s, id = %{public}@ }",
                  &local_78,0x3c);
    (*(code *)PTR__objc_release_10082c7b0)(uVar10);
    (*(code *)PTR__objc_release_10082c7b0)(uVar7);
    (*(code *)PTR__objc_release_10082c7b0)(local_80);
    (*(code *)PTR__objc_release_10082c7b0)(uVar7);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar8);
  IVar4 = local_c0;
  puVar3 = PTR__objc_retain_10082c7b8;
  local_118 = PTR___NSConcreteStackBlock_10082caf0;
  local_110 = 0xc2000000;
  local_108 = FUN_1006598be;
  local_100 = &DAT_1008718f0;
  local_f8 = local_c0;
  local_f0 = (*(code *)PTR__objc_retain_10082c7b8)(local_90);
  local_80 = local_f0;
  local_e8 = (*(code *)puVar3)(local_a0);
  local_88 = (SEL)local_e8;
  uVar7 = (*(code *)puVar3)(local_a8);
  local_e0 = uVar7;
  uVar8 = (*(code *)puVar3)(local_b0);
  local_d8 = uVar8;
  uVar9 = (*(code *)puVar3)(local_b8);
  local_d0 = uVar9;
  (*(code *)PTR__objc_msgSend_10082c770)
            (IVar4,PTR_s_performBlockOnMainThreadAsync__10088daf0,&local_118);
  (*(code *)PTR__objc_release_10082c7b0)(local_d0);
  (*(code *)PTR__objc_release_10082c7b0)(local_d8);
  (*(code *)PTR__objc_release_10082c7b0)(local_e0);
  (*(code *)PTR__objc_release_10082c7b0)(local_e8);
  (*(code *)PTR__objc_release_10082c7b0)(local_f0);
  (*(code *)PTR__objc_release_10082c7b0)(uVar9);
  (*(code *)PTR__objc_release_10082c7b0)(uVar8);
  (*(code *)PTR__objc_release_10082c7b0)(uVar7);
  (*(code *)PTR__objc_release_10082c7b0)(local_88);
  (*(code *)PTR__objc_release_10082c7b0)(local_80);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

