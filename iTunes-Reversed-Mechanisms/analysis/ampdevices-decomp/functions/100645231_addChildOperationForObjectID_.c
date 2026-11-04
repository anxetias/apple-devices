// name: addChildOperationForObjectID:
// address: 100645231

/* Function Stack Size: 0x14 bytes */

void AMPDeviceProgressMap::addChildOperationForObjectID_
               (ID param_1,SEL param_2,unsigned_int param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined4 local_38;
  unsigned_int local_34;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar2 = (*(code *)PTR__objc_msgSend_10082c770)
                    (PTR__OBJC_CLASS___NSNumber_10082c690,PTR_s_numberWithUnsignedInteger__10088c4a8
                     ,param_3);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  uVar3 = (*(code *)PTR__objc_msgSend_10082c770)(uVar3,PTR_s_objectForKey__10088be28,uVar2);
  lVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)PTR__objc_release_10082c7b0)(uVar2);
  if (lVar4 == 0) {
    uVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                      (param_1,PTR_s_progressForObjectID__10088da08,param_3);
    lVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
    if (lVar4 == 0) {
      uVar3 = FUN_100642e20();
      uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x4000100;
        local_34 = param_3;
        __os_log_impl(0x100000000,uVar3,0x10,"failed to create AMPDeviceProgress for objectID %d",
                      &local_38,8);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar3);
      lVar4 = 0;
    }
  }
  else {
    lVar5 = (*(code *)PTR__objc_msgSend_10082c770)(lVar4,PTR_s_operationCount_10088da20);
    (*(code *)PTR__objc_msgSend_10082c770)(lVar4,PTR_s_setOperationCount__10088da28,lVar5 + 1);
  }
  (*(code *)PTR__objc_release_10082c7b0)(lVar4);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

