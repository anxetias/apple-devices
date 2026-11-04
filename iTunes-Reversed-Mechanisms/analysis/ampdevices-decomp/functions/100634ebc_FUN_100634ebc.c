// name: FUN_100634ebc
// address: 100634ebc

int FUN_100634ebc(ulong param_1)

{
  ulong uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  int local_60;
  char local_59;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_60 = 0;
  uVar6 = *(undefined8 *)PTR__kCFAllocatorDefault_10082e018;
  lVar4 = FUN_100171409(uVar6,0,PTR__kCFCopyStringDictionaryKeyCallBacks_10082e060,
                        PTR__kCFTypeDictionaryValueCallBacks_10082e140);
  if (lVar4 == 0) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_4a = "matchingDictionary != __null";
LAB_10063515e:
      local_4c = 0x822;
      uStack_50 = 1;
      uStack_54 = 0x7a0a90;
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x16);
    }
  }
  else {
    lVar5 = FUN_100171409(uVar6,0,PTR__kCFCopyStringDictionaryKeyCallBacks_10082e060,
                          PTR__kCFTypeDictionaryValueCallBacks_10082e140);
    if (lVar5 == 0) {
      uVar6 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar6,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = 0x7a0a90;
        uStack_50 = 1;
        local_4c = 0x822;
        local_4a = "subDictionary != __null";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x16);
      }
      iVar3 = 0;
      FUN_1001782e9(0,0);
      FUN_10017060f(lVar4);
      goto LAB_1006350c6;
    }
    FUN_100171502(lVar5,&cf_SCSITaskDeviceCategory,&cf_iPodUserClientDevice);
    FUN_100171502(lVar4,&cf_IOPropertyMatch,lVar5);
    FUN_10017060f(lVar5);
    iVar3 = _IOServiceGetMatchingServices
                      (*(undefined4 *)PTR__kIOMasterPortDefault_10082e788,lVar4,&local_60);
    if (local_60 != 0 && iVar3 == 0) {
      iVar3 = _IOIteratorNext();
      if (iVar3 != 0) {
        do {
          FUN_100633947(iVar3,&local_58,&local_59);
          uVar1 = CONCAT44(uStack_54,local_58);
          if ((uVar1 != 0) &&
             ((uVar1 == param_1 || (((uVar1 | 0xa270002000000) == param_1 && (local_59 != '\0'))))))
          goto LAB_10063501f;
          _IOObjectRelease(iVar3);
          iVar3 = _IOIteratorNext(local_60);
        } while (iVar3 != 0);
      }
      uVar6 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar6,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = 0x7a0a90;
        uStack_50 = 1;
        local_4c = 0x822;
        local_4a = "service != 0";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x16);
      }
      iVar3 = 0;
      FUN_1001782e9(0,0);
LAB_10063501f:
      _IOObjectRelease(local_60);
      goto LAB_1006350c6;
    }
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_4a = "(error == 0) && (iterator != 0)";
      goto LAB_10063515e;
    }
  }
  iVar3 = 0;
  FUN_1001782e9(0,0);
LAB_1006350c6:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

