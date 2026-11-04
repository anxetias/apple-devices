// name: FUN_1006316ac
// address: 1006316ac

void FUN_1006316ac(undefined8 param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  undefined1 local_450 [1056];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = FUN_100300729();
  lVar5 = 0;
  if (lVar2 == 0) {
    iVar1 = -0x2b;
  }
  else {
    lVar2 = FUN_1005974ad(lVar2,0);
    iVar1 = -0x2b;
    lVar5 = 0;
    if (lVar2 != 0) {
      iVar1 = FUN_1002b4324(lVar2,local_450);
      if (iVar1 == 0) {
        lVar5 = FUN_10016ff43(DAT_1008c4d98,local_450);
      }
      else {
        lVar5 = 0;
      }
    }
  }
  iVar4 = -0x2b;
  if (iVar1 != 0) {
    iVar4 = iVar1;
  }
  if (lVar5 != 0) {
    iVar4 = iVar1;
  }
  if (((param_3 != (long *)0x0) && (iVar4 != 0)) && (*param_3 == 0)) {
    uVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSError_10082c660,
                       PTR_s_errorWithDomain_code_userInfo__10088c9f8,
                       *(undefined8 *)PTR__NSOSStatusErrorDomain_10082c608,(long)iVar4,0);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    lVar2 = _objc_autorelease(uVar3);
    *param_3 = lVar2;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    _objc_autoreleaseReturnValue(lVar5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

