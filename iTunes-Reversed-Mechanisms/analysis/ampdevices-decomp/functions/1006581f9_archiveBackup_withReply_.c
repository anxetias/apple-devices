// name: archiveBackup:withReply:
// address: 1006581f9

/* Function Stack Size: 0x20 bytes */

void AMPDevicesClientConnection::archiveBackup_withReply_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  undefined4 uVar1;
  undefined *puVar2;
  char cVar3;
  pid_t pVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *local_d0;
  undefined8 local_c8;
  code *local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
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
  long local_38;
  
  puVar2 = PTR__objc_retain_10082c7b8;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar5 = (*(code *)PTR__objc_retain_10082c7b8)(param_3);
  local_98 = (*(code *)puVar2)(param_4);
  uVar6 = FUN_100642e20();
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  cVar3 = _os_log_type_enabled(uVar6,1);
  if (cVar3 != '\0') {
    local_a0 = *(undefined8 *)(param_1 + 0x18);
    uVar1 = *(undefined4 *)(param_1 + 0xc);
    local_88 = *(undefined4 *)(param_1 + 0x10);
    local_80 = uVar5;
    uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSProcessInfo_10082c6a0,PTR_s_processInfo_10088bad8);
    local_90 = _objc_retainAutoreleasedReturnValue(uVar5);
    local_84 = uVar1;
    uVar5 = (*(code *)PTR__objc_msgSend_10082c770)(local_90,PTR_s_processName_10088daf8);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    uVar7 = (*(code *)PTR__objc_retain_10082c7b8)(uVar5);
    pVar4 = _getpid();
    local_4e = _sel_getName(param_2);
    local_78 = 0x8420602;
    local_74 = local_a0;
    local_6c = 0x400;
    local_6a = local_88;
    local_66 = 0x400;
    local_64 = local_84;
    local_60 = 0x842;
    local_56 = 0x400;
    local_50 = 0x822;
    local_5e = uVar7;
    local_54 = pVar4;
    __os_log_impl(0x100000000,uVar6,1,"%{public}@ [%d:%u] -> %{public}@ [%d]: { sel = %{public}s }",
                  &local_78,0x32);
    (*(code *)PTR__objc_release_10082c7b0)(uVar7);
    uVar5 = local_80;
    (*(code *)PTR__objc_release_10082c7b0)(local_90);
    (*(code *)PTR__objc_release_10082c7b0)(uVar7);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar6);
  (*(code *)PTR__objc_msgSend_10082c770)
            (&objc::class_t::AMPDevicesClientConnection,PTR_s_ensureFullService_10088dad8);
  puVar2 = PTR__objc_retain_10082c7b8;
  local_d0 = PTR___NSConcreteStackBlock_10082caf0;
  local_c8 = 0xc2000000;
  local_c0 = FUN_1006584d2;
  local_b8 = &DAT_10083f518;
  uVar5 = (*(code *)PTR__objc_retain_10082c7b8)(uVar5);
  local_b0 = uVar5;
  uVar6 = (*(code *)puVar2)(local_98);
  local_a8 = uVar6;
  (*(code *)PTR__objc_msgSend_10082c770)
            (param_1,PTR_s_performBlockOnMainThreadAsync__10088daf0,&local_d0);
  (*(code *)PTR__objc_release_10082c7b0)(local_a8);
  (*(code *)PTR__objc_release_10082c7b0)(local_b0);
  (*(code *)PTR__objc_release_10082c7b0)(uVar6);
  (*(code *)PTR__objc_release_10082c7b0)(uVar5);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

