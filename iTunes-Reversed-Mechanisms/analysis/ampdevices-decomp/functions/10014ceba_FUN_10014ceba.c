// name: FUN_10014ceba
// address: 10014ceba

void FUN_10014ceba(long *param_1,long param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  ID IVar6;
  ID IVar7;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined2 local_48 [8];
  uint local_38;
  undefined8 local_34;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*param_1 == 0) goto LAB_10014d28d;
  uVar3 = FUN_1001cc310();
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  cVar1 = _os_log_type_enabled(uVar3,0x10);
  if (cVar1 != '\0') {
    FUN_10014d8e0(uVar3);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  cVar1 = FUN_1001782e9(0,1);
  if (cVar1 == '\0') goto LAB_10014d28d;
  FUN_1001aaf3c(&local_38,PTR_s_X_Apple_TID_Action_10088f4f8);
  FUN_1001b7a44(local_68);
  FUN_100129b70(local_58,param_1,&local_38,local_68);
  FUN_1001b7a50(local_68);
  FUN_1001ab006(&local_38);
  cVar1 = FUN_1001b8428(local_58);
  if (cVar1 == '\0') {
    uVar3 = FUN_10014c4fc();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    cVar1 = _os_log_type_enabled(uVar3,0);
    if (cVar1 != '\0') {
      local_34 = FUN_1001b83ae(local_58);
      local_38 = 0x8220102;
      __os_log_impl(0x100000000,uVar3,0,"Store response headers include TouchID action: %{public}s",
                    &local_38,0xc);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    FUN_10015095e(&local_38);
    lVar4 = FUN_100150dd2(&local_38);
    FUN_100150de8(&local_38);
    if (lVar4 == 0) {
      uVar3 = FUN_10014c4fc();
      uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_38 = local_38 & 0xffff0000;
        __os_log_impl(0x100000000,uVar3,0x10,"Ignoring TouchID action because no user is signed in."
                      ,&local_38,2);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    }
    else {
      FUN_100151a22(&local_38);
      iVar2 = FUN_1001ba026(local_58,PTR_s_RP_10088f530);
      if (iVar2 == 0) {
LAB_10014d159:
        uVar3 = FUN_10014c4fc();
        uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
        cVar1 = _os_log_type_enabled(uVar3,0);
        if (cVar1 != '\0') {
          local_48[0] = 0;
          __os_log_impl(0x100000000,uVar3,0,"Enabling TouchID for user.",local_48,2);
        }
        (*(code *)PTR__objc_release_10082c7b0)(uVar3);
        IVar6 = _objc_alloc(PTR__OBJC_CLASS___AMSBiometricsTokenUpdateTask_10082b718);
        uVar3 = FUN_100152dee(&local_38);
        uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
        IVar6 = AMSBiometricsTokenUpdateTask::initWithAccount_
                          (IVar6,PTR_s_initWithAccount__10088bb90,uVar3);
        (*(code *)PTR__objc_release_10082c7b0)(uVar3);
        AMSBiometricsTokenUpdateTask::setShouldRequestConfirmation_
                  (IVar6,PTR_s_setShouldRequestConfirmation__10088bbd0,0);
        IVar7 = AMSProcessInfo::currentProcess
                          ((ID)PTR__OBJC_CLASS___AMSProcessInfo_10082b720,
                           PTR_s_currentProcess_10088bb50);
        uVar3 = _objc_retainAutoreleasedReturnValue(IVar7);
        AMSBiometricsTokenUpdateTask::setClientInfo_(IVar6,PTR_s_setClientInfo__10088bbc8,uVar3);
        (*(code *)PTR__objc_release_10082c7b0)(uVar3);
        IVar7 = AMSBiometricsTokenUpdateTask::performUpdate(IVar6,PTR_s_performUpdate_10088bbb0);
        uVar3 = _objc_retainAutoreleasedReturnValue(IVar7);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (uVar3,PTR_s_addFinishBlock__10088bb30,&PTR___NSConcreteGlobalBlock_10083b108);
      }
      else {
        iVar2 = FUN_1001ba026(local_58,PTR_s_EP_10088f538);
        if ((iVar2 == 0) && (*(long **)(param_2 + 0x20) != (long *)0x0)) {
          cVar1 = (**(code **)(**(long **)(param_2 + 0x20) + 0x30))();
          if (cVar1 != '\0') goto LAB_10014d159;
        }
        uVar3 = FUN_10014c4fc();
        uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
        cVar1 = _os_log_type_enabled(uVar3,0);
        if (cVar1 != '\0') {
          local_48[0] = 0;
          __os_log_impl(0x100000000,uVar3,0,"Disabling TouchID for user.",local_48,2);
        }
        (*(code *)PTR__objc_release_10082c7b0)(uVar3);
        uVar3 = _NSClassFromString(&cf_AMSBiometrics);
        uVar5 = FUN_100152dee(&local_38);
        IVar6 = _objc_retainAutoreleasedReturnValue(uVar5);
        uVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                          (uVar3,PTR_s_disableForAccount__10088bb70,IVar6);
        uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (uVar3,PTR_s_addFinishBlock__10088bb30,&PTR___NSConcreteGlobalBlock_10083b128);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar3);
      (*(code *)PTR__objc_release_10082c7b0)(IVar6);
      FUN_100151a16(&local_38);
    }
  }
  FUN_1001b7a50(local_58);
LAB_10014d28d:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

