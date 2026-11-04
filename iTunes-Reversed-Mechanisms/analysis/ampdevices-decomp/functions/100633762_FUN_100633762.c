// name: FUN_100633762
// address: 100633762

int FUN_100633762(undefined8 param_1,code *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 local_4c;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_100171409(*(undefined8 *)PTR__kCFAllocatorDefault_10082e018,0,
                        PTR__kCFCopyStringDictionaryKeyCallBacks_10082e060,
                        PTR__kCFTypeDictionaryValueCallBacks_10082e140);
  if (lVar3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "matchingDictionary != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    iVar5 = -0x6c;
  }
  else {
    FUN_100171502(lVar3,&cf_IOProviderClass,&cf_IOUSBDevice);
    iVar5 = 0;
    iVar2 = _IOServiceAddMatchingNotification
                      (param_1,"IOServiceFirstMatch",lVar3,param_2,0,&local_4c);
    if (iVar2 == 0) {
      (*param_2)(0,local_4c);
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "err == 0";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
      FUN_10017060f(lVar3);
      iVar5 = iVar2;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

