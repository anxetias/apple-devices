// name: FUN_1002304d1
// address: 1002304d1

void FUN_1002304d1(void)

{
  char cVar1;
  ID IVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_38;
  undefined8 local_34;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (DAT_1008a2df8 == 0) {
    IVar2 = _objc_alloc(PTR__OBJC_CLASS___BKAgent_10082bab0);
    IVar3 = BKAgent::initWithError_(IVar2,PTR_s_initWithError__10088c3e0);
    uVar4 = (*(code *)PTR__objc_retain_10082c7b8)(0);
    IVar2 = DAT_1008a2df8;
    DAT_1008a2df8 = IVar3;
    (*(code *)PTR__objc_release_10082c7b0)(IVar2);
    if (DAT_1008a2df8 == 0) {
      uVar5 = FUN_10023046d();
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x8420102;
        local_34 = uVar4;
        __os_log_impl(0x100000000,uVar5,0x10,"failed to create BKAgent: %{public}@",&local_38,0xc);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar5);
      (*(code *)PTR__objc_release_10082c7b0)(uVar4);
      uVar4 = 0;
      goto LAB_10023059c;
    }
    FUN_1001c0fbe(FUN_100230641,0,0,0,0);
    (*(code *)PTR__objc_msgSend_10082c770)
              (DAT_1008a2df8,PTR_s_addInterruptionHandler__10088c3e8,
               &PTR___NSConcreteGlobalBlock_10083e4d0);
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  }
  uVar4 = (*(code *)PTR__objc_retain_10082c7b8)(DAT_1008a2df8);
LAB_10023059c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    _objc_autoreleaseReturnValue();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar4);
}

