// name: processRequestBlockOnMainThread:forDevice:onlyBootedOSMode:waitForDevice:withTimeoutBlock:
// address: 100648cbd

/* Function Stack Size: 0x30 bytes */

void AMPDevicesClientConnection::
     processRequestBlockOnMainThread_forDevice_onlyBootedOSMode_waitForDevice_withTimeoutBlock_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4,ID param_5,char param_6,
               char param_7,ID param_8,undefined4 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 in_register_0000000c;
  undefined7 in_register_00000089;
  undefined7 in_stack_00000009;
  undefined *local_b0;
  undefined8 local_a8;
  code *local_a0;
  undefined *local_98;
  ID local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  char local_70;
  undefined1 local_6f;
  undefined4 local_6c;
  undefined8 local_68;
  long local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined2 local_4c;
  undefined4 local_4a;
  long local_38;
  
  puVar1 = PTR__objc_retain_10082c7b8;
  local_6c = (undefined4)CONCAT71(in_register_00000089,param_6);
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_68 = (*(code *)PTR__objc_retain_10082c7b8)(param_3);
  uVar4 = (*(code *)puVar1)(CONCAT44(in_register_0000000c,param_4));
  local_60 = (*(code *)puVar1)(CONCAT71(in_stack_00000009,param_7));
  puVar2 = PTR_s_deviceMode_10088daa0;
  lVar5 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,PTR_s_deviceMode_10088daa0);
  if (((char)param_5 == '\0') || (lVar5 == 1)) {
    local_b0 = PTR___NSConcreteStackBlock_10082caf0;
    local_a8 = 0xc2000000;
    local_a0 = FUN_100648f58;
    local_98 = &DAT_100871660;
    local_90 = param_1;
    local_88 = (*(code *)puVar1)(uVar4);
    local_70 = (char)param_5;
    local_80 = (*(code *)puVar1)(local_68);
    local_6f = (undefined1)local_6c;
    local_78 = (*(code *)puVar1)(local_60);
    (*(code *)PTR__objc_msgSend_10082c770)
              (param_1,PTR_s_performBlockOnMainThreadAsync__10088daf0,&local_b0);
    (*(code *)PTR__objc_release_10082c7b0)(local_78);
    (*(code *)PTR__objc_release_10082c7b0)(local_80);
    (*(code *)PTR__objc_release_10082c7b0)(local_88);
  }
  else {
    uVar6 = FUN_100642e20();
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      uVar7 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,PTR_s_deviceIdentifier_10088ca18);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      local_4a = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,puVar2);
      local_58 = 0x8420202;
      local_4c = 0x400;
      local_54 = uVar7;
      __os_log_impl(0x100000000,uVar6,0x10,"device %{public}@ not in booted OS mode (%d)",&local_58,
                    0x12);
      (*(code *)PTR__objc_release_10082c7b0)(uVar7);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar6);
    uVar6 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSError_10082c660,PTR_s_errorWithOSStatus__10088d958,0x45f)
    ;
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    (**(code **)(local_60 + 0x10))(local_60,uVar6);
    (*(code *)PTR__objc_release_10082c7b0)(uVar6);
  }
  (*(code *)PTR__objc_release_10082c7b0)(local_60);
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  (*(code *)PTR__objc_release_10082c7b0)(local_68);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

