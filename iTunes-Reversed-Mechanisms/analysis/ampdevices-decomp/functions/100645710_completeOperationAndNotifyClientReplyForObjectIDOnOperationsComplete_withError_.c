// name: completeOperationAndNotifyClientReplyForObjectIDOnOperationsComplete:withError:
// address: 100645710

/* Function Stack Size: 0x1c bytes */

void AMPDeviceProgressMap::
     completeOperationAndNotifyClientReplyForObjectIDOnOperationsComplete_withError_
               (ID param_1,SEL param_2,unsigned_int param_3,ID param_4)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar3 = (*(code *)PTR__objc_retain_10082c7b8)(param_4);
  uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                    (PTR__OBJC_CLASS___NSNumber_10082c690,PTR_s_numberWithUnsignedInteger__10088c4a8
                     ,param_3);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                    (*(undefined8 *)(param_1 + 8),PTR_s_objectForKey__10088be28,uVar4);
  lVar6 = _objc_retainAutoreleasedReturnValue(uVar5);
  puVar1 = PTR_s_operationCount_10088da20;
  if (lVar6 != 0) {
    lVar7 = (*(code *)PTR__objc_msgSend_10082c770)(lVar6,PTR_s_operationCount_10088da20);
    if (lVar7 == 0) {
      uVar5 = FUN_1001cc310();
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "progress.operationCount != 0";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar5);
      FUN_1001782e9(0,0);
    }
    lVar7 = (*(code *)PTR__objc_msgSend_10082c770)(lVar6,puVar1);
    (*(code *)PTR__objc_msgSend_10082c770)(lVar6,PTR_s_setOperationCount__10088da28,lVar7 + -1);
    if (lVar7 + -1 == 0) {
      (*(code *)PTR__objc_msgSend_10082c770)
                (*(undefined8 *)(param_1 + 8),PTR_s_removeObjectForKey__10088c648,uVar4);
      (*(code *)PTR__objc_msgSend_10082c770)
                (lVar6,PTR_s_notifyClientReplyWithError__10088da40,uVar3);
    }
  }
  (*(code *)PTR__objc_release_10082c7b0)(lVar6);
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

