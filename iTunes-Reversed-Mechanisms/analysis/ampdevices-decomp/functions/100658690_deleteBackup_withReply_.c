// name: deleteBackup:withReply:
// address: 100658690

/* Function Stack Size: 0x20 bytes */

void AMPDevicesClientConnection::deleteBackup_withReply_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  char cVar4;
  pid_t pVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  dispatch_queue_t pdVar9;
  undefined8 uVar10;
  undefined *local_d0;
  undefined8 local_c8;
  code *local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  SEL local_a0;
  undefined8 local_98;
  undefined8 local_90;
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
  
  puVar3 = PTR__objc_retain_10082c7b8;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_98 = (*(code *)PTR__objc_retain_10082c7b8)(param_3);
  uVar6 = (*(code *)puVar3)(param_4);
  uVar7 = FUN_100642e20();
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  cVar4 = _os_log_type_enabled(uVar7,1);
  if (cVar4 != '\0') {
    uVar10 = *(undefined8 *)(param_1 + 0x18);
    uVar1 = *(undefined4 *)(param_1 + 0xc);
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    local_80 = uVar6;
    uVar6 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSProcessInfo_10082c6a0,PTR_s_processInfo_10088bad8);
    local_90 = _objc_retainAutoreleasedReturnValue(uVar6);
    local_a0 = param_2;
    local_84 = uVar2;
    uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(local_90,PTR_s_processName_10088daf8);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    uVar8 = (*(code *)PTR__objc_retain_10082c7b8)(uVar6);
    pVar5 = _getpid();
    local_4e = _sel_getName(local_a0);
    local_78 = 0x8420602;
    local_6c = 0x400;
    local_6a = local_84;
    local_66 = 0x400;
    local_60 = 0x842;
    local_56 = 0x400;
    local_50 = 0x822;
    local_74 = uVar10;
    local_64 = uVar1;
    local_5e = uVar8;
    local_54 = pVar5;
    __os_log_impl(0x100000000,uVar7,1,"%{public}@ [%d:%u] -> %{public}@ [%d]: { sel = %{public}s }",
                  &local_78,0x32);
    (*(code *)PTR__objc_release_10082c7b0)(uVar8);
    uVar6 = local_80;
    (*(code *)PTR__objc_release_10082c7b0)(local_90);
    (*(code *)PTR__objc_release_10082c7b0)(uVar8);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar7);
  (*(code *)PTR__objc_msgSend_10082c770)(&objc::class_t::AMPDevicesClientConnection);
  pdVar9 = _dispatch_get_global_queue(-0x8000,0);
  uVar10 = _objc_retainAutoreleasedReturnValue(pdVar9);
  uVar7 = local_98;
  puVar3 = PTR__objc_retain_10082c7b8;
  local_d0 = PTR___NSConcreteStackBlock_10082caf0;
  local_c8 = 0xc2000000;
  local_c0 = FUN_100658960;
  local_b8 = &DAT_10083f518;
  local_b0 = local_98;
  local_a8 = uVar6;
  uVar6 = (*(code *)PTR__objc_retain_10082c7b8)(uVar6);
  uVar7 = (*(code *)puVar3)(uVar7);
  _dispatch_async(uVar10,&local_d0);
  (*(code *)PTR__objc_release_10082c7b0)(uVar10);
  (*(code *)PTR__objc_release_10082c7b0)(local_a8);
  (*(code *)PTR__objc_release_10082c7b0)(local_b0);
  (*(code *)PTR__objc_release_10082c7b0)(uVar6);
  (*(code *)PTR__objc_release_10082c7b0)(uVar7);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

