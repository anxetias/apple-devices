// name: FUN_100660477
// address: 100660477

ulong FUN_100660477(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 local_238 [520];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((int)param_1 != 0x70726f67) {
    uVar6 = FUN_100182c9b(param_1,param_2);
    return uVar6;
  }
  uVar3 = (*(code *)PTR__objc_retain_10082c7b8)(param_3);
  FUN_1001e033f(*(undefined8 *)(param_2 + 0x18),local_238);
  (*(code *)PTR__objc_msgSend_10082c770)
            (uVar3,PTR_s_setTotalUnitCount__10088d9c0,*(undefined8 *)(param_2 + 0x10));
  (*(code *)PTR__objc_msgSend_10082c770)
            (uVar3,PTR_s_setCompletedUnitCount__10088d9c8,*(undefined8 *)(param_2 + 8));
  puVar1 = PTR__OBJC_CLASS___NSString_10082c6b8;
  uVar4 = FUN_1001c3525(0x8f0007);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                    (puVar1,PTR_s_stringWithFormat__10088c038,uVar4,local_238);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)PTR__objc_msgSend_10082c770)(uVar3,PTR_s_setLocalizedDescription__10088d9e8,uVar5);
  (*(code *)PTR__objc_release_10082c7b0)(uVar5);
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  uVar4 = (*(code *)PTR__objc_msgSend_10082c770)(uVar3,PTR_s_localizedDescription_10088c2b0);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)PTR__objc_msgSend_10082c770)
            (uVar3,PTR_s_setUserInfoObject_forKey__10088d9d0,uVar4,
             *(undefined8 *)PTR___NSProgressRemoteLocalizedDescriptionKey_10082c708);
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  cVar2 = (*(code *)PTR__objc_msgSend_10082c770)(uVar3,PTR_s_isCancelled_10088d9d8);
  (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return (ulong)((uint)(cVar2 == '\0') * 0x80 - 0x80);
}

