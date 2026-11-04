// name: FUN_10052a6b9
// address: 10052a6b9

void FUN_10052a6b9(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  iVar1 = _proc_name(param_1,&local_38,0x20);
  if (0 < iVar1) {
    uVar2 = _objc_alloc(PTR__OBJC_CLASS___NSString_10082c6b8);
    lVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                      (uVar2,PTR_s_initWithBytes_length_encoding__10088d730,&local_38,iVar1,4);
    if (lVar3 != 0) goto LAB_10052a73e;
  }
  uVar2 = (*(code *)PTR__objc_msgSend_10082c770)
                    (PTR__OBJC_CLASS___NSString_10082c6b8,PTR_s_stringWithUTF8String__10088bfc8,
                     "UNKNOWN");
  lVar3 = _objc_retainAutoreleasedReturnValue(uVar2);
LAB_10052a73e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    _objc_autoreleaseReturnValue(lVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

