// name: FUN_10033e758
// address: 10033e758

void FUN_10033e758(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  undefined4 local_48;
  cfstringStruct *local_44;
  undefined2 local_3c;
  cfstringStruct *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(int *)(param_1 + 0x166d4) == 2) {
    lVar4 = FUN_1003401bb(param_2,&cf_DataclassAnchors);
    if (lVar4 == 0) {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar2 = DAT_1008c75b8;
      cVar3 = _os_log_type_enabled(DAT_1008c75b8,0x10);
      if (cVar3 != '\0') {
        local_48 = 0x8420202;
        local_44 = &cf_DataclassAnchors;
        local_3c = 0x842;
        local_3a = &cf_ReadyForSync;
        __os_log_impl(0x100000000,uVar2,0x10,"airtraffic> missing %{public}@ in %{public}@ message",
                      &local_48,0x16);
      }
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x166dc);
      FUN_100340288(param_1 + 0x166e8,uVar1,lVar4);
      FUN_100340288(param_1 + 0x16720,uVar1,lVar4);
      FUN_100340288(param_1 + 0x16758,uVar1,lVar4);
    }
    FUN_10033470c(param_1,3,0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

