// name: FUN_100669126
// address: 100669126

void FUN_100669126(long param_1)

{
  undefined *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *local_f0;
  undefined8 local_e8;
  code *local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  code *local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  pid_t local_94;
  undefined8 local_90;
  long local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined2 local_6c;
  pid_t local_6a;
  undefined2 local_66;
  undefined8 local_64;
  undefined2 local_5c;
  undefined4 local_5a;
  undefined2 local_56;
  undefined4 local_54;
  undefined2 local_50;
  undefined8 local_4e;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                    (*(undefined8 *)(param_1 + 0x28),PTR_s_objectForKeyedSubscript__10088be30,
                     *(undefined8 *)PTR__AMPDeviceReportUUIDKey_10082b960);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar6 = (*(code *)PTR__objc_msgSend_10082c770)
                    (uVar6,PTR_s_connectionForUserInteractionWith_10088df40,
                     PTR_s_showReportWithParameters_withRep_10088d6b8,uVar5);
  lVar7 = _objc_retainAutoreleasedReturnValue(uVar6);
  (*(code *)PTR__objc_release_10082c7b0)(uVar5);
  if (lVar7 == 0) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0);
  }
  else {
    local_88 = lVar7;
    uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(lVar7,PTR_s_exportedObject_10088da98);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar6);
    uVar6 = FUN_100642e20();
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    cVar2 = _os_log_type_enabled(uVar6,1);
    if (cVar2 != '\0') {
      local_90 = uVar6;
      uVar6 = (*(code *)PTR__objc_msgSend_10082c770)
                        (PTR__OBJC_CLASS___NSProcessInfo_10082c6a0,PTR_s_processInfo_10088bad8);
      local_a0 = _objc_retainAutoreleasedReturnValue(uVar6);
      puVar1 = PTR_s_processName_10088daf8;
      uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(local_a0,PTR_s_processName_10088daf8);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      local_80 = (*(code *)PTR__objc_retain_10082c7b8)(uVar6);
      local_94 = _getpid();
      uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(uVar5,puVar1);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      uVar3 = (*(code *)PTR__objc_msgSend_10082c770)(uVar5,PTR_s_processID_10088de18);
      uVar4 = (*(code *)PTR__objc_msgSend_10082c770)(uVar5,PTR_s_clientID_10088d1b8);
      local_4e = _sel_getName(*(undefined8 *)(param_1 + 0x38));
      local_78 = 0x8420602;
      local_74 = local_80;
      local_6c = 0x400;
      local_6a = local_94;
      local_66 = 0x842;
      local_5c = 0x400;
      local_56 = 0x400;
      local_50 = 0x822;
      local_64 = uVar6;
      local_5a = uVar3;
      local_54 = uVar4;
      __os_log_impl(0x100000000,local_90,1,
                    "%{public}@ [%d] -> %{public}@ [%d:%u]: { sel = %{public}s }",&local_78,0x32);
      (*(code *)PTR__objc_release_10082c7b0)(uVar6);
      lVar7 = local_88;
      (*(code *)PTR__objc_release_10082c7b0)(local_80);
      (*(code *)PTR__objc_release_10082c7b0)(local_a0);
      (*(code *)PTR__objc_release_10082c7b0)(local_80);
      uVar6 = local_90;
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar6);
    (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    local_f0 = PTR___NSConcreteStackBlock_10082caf0;
    local_e8 = 0xc2000000;
    local_e0 = FUN_10066951a;
    local_d8 = &DAT_10083f548;
    local_d0 = (*(code *)PTR__objc_retain_10082c7b8)(*(undefined8 *)(param_1 + 0x30));
    uVar6 = (*(code *)PTR__objc_msgSend_10082c770)
                      (lVar7,PTR_s_remoteObjectProxyWithErrorHandle_10088c558,&local_f0);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar6);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    local_c8 = PTR___NSConcreteStackBlock_10082caf0;
    local_c0 = 0xc2000000;
    local_b8 = FUN_10066952b;
    local_b0 = &DAT_100871b40;
    local_a8 = (*(code *)PTR__objc_retain_10082c7b8)(*(undefined8 *)(param_1 + 0x30));
    (*(code *)PTR__objc_msgSend_10082c770)
              (uVar5,PTR_s_showReportWithParameters_withRep_10088d6b8,uVar6,&local_c8);
    (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    lVar7 = local_88;
    (*(code *)PTR__objc_release_10082c7b0)(local_a8);
    (*(code *)PTR__objc_release_10082c7b0)(local_d0);
  }
  (*(code *)PTR__objc_release_10082c7b0)(lVar7);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

