// name: fetchAllBackupsWithReply:
// address: 1006534f8

/* Function Stack Size: 0x18 bytes */

void AMPDevicesClientConnection::fetchAllBackupsWithReply_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  undefined4 uVar1;
  char cVar2;
  pid_t pVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *local_c0;
  undefined8 local_b8;
  code *local_b0;
  undefined *local_a8;
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
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar4 = (*(code *)PTR__objc_retain_10082c7b8)(param_3);
  uVar5 = FUN_100642e20();
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  cVar2 = _os_log_type_enabled(uVar5,1);
  if (cVar2 != '\0') {
    local_98 = *(undefined8 *)(param_1 + 0x18);
    uVar1 = *(undefined4 *)(param_1 + 0xc);
    local_88 = *(undefined4 *)(param_1 + 0x10);
    local_80 = uVar4;
    uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSProcessInfo_10082c6a0,PTR_s_processInfo_10088bad8);
    local_90 = _objc_retainAutoreleasedReturnValue(uVar4);
    local_84 = uVar1;
    uVar4 = (*(code *)PTR__objc_msgSend_10082c770)(local_90,PTR_s_processName_10088daf8);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar6 = (*(code *)PTR__objc_retain_10082c7b8)(uVar4);
    pVar3 = _getpid();
    local_4e = _sel_getName(param_2);
    local_78 = 0x8420602;
    local_74 = local_98;
    local_6c = 0x400;
    local_6a = local_88;
    local_66 = 0x400;
    local_64 = local_84;
    local_60 = 0x842;
    local_56 = 0x400;
    local_50 = 0x822;
    local_5e = uVar6;
    local_54 = pVar3;
    __os_log_impl(0x100000000,uVar5,1,"%{public}@ [%d:%u] -> %{public}@ [%d]: { sel = %{public}s }",
                  &local_78,0x32);
    (*(code *)PTR__objc_release_10082c7b0)(uVar6);
    uVar4 = local_80;
    (*(code *)PTR__objc_release_10082c7b0)(local_90);
    (*(code *)PTR__objc_release_10082c7b0)(uVar6);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar5);
  (*(code *)PTR__objc_msgSend_10082c770)
            (&objc::class_t::AMPDevicesClientConnection,PTR_s_ensureFullService_10088dad8);
  local_c0 = PTR___NSConcreteStackBlock_10082caf0;
  local_b8 = 0xc2000000;
  local_b0 = FUN_100653772;
  local_a8 = &DAT_100871840;
  uVar4 = (*(code *)PTR__objc_retain_10082c7b8)(uVar4);
  local_a0 = uVar4;
  (*(code *)PTR__objc_msgSend_10082c770)
            (param_1,PTR_s_performBlockOnMainThreadAsync__10088daf0,&local_c0);
  (*(code *)PTR__objc_release_10082c7b0)(local_a0);
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

