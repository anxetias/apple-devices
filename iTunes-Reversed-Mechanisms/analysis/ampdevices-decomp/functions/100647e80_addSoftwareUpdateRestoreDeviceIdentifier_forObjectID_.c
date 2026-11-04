// name: addSoftwareUpdateRestoreDeviceIdentifier:forObjectID:
// address: 100647e80

/* Function Stack Size: 0x1c bytes */

void AMPDevicesClientConnection::addSoftwareUpdateRestoreDeviceIdentifier_forObjectID_
               (ID param_1,SEL param_2,ID param_3,unsigned_int param_4)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_38;
  unsigned_int local_34;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = (*(code *)PTR__objc_retain_10082c7b8)(param_3);
  uVar4 = DAT_1008c34a8;
  if (lVar2 == 0) {
    uVar4 = FUN_100642e20();
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x4000100;
      local_34 = param_4;
      __os_log_impl(0x100000000,uVar4,0x10,"missing device identifier for object id %u",&local_38,8)
      ;
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  }
  else {
    uVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSNumber_10082c690,
                       PTR_s_numberWithUnsignedInteger__10088c4a8,param_4);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    (*(code *)PTR__objc_msgSend_10082c770)(uVar4,PTR_s_setObject_forKey__10088c000,lVar2,uVar3);
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  }
  (*(code *)PTR__objc_release_10082c7b0)(lVar2);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

