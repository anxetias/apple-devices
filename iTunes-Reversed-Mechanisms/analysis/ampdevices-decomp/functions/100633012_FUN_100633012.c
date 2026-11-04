// name: FUN_100633012
// address: 100633012

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100633012(long param_1,long param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined4 local_5c;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (DAT_1008c7d38 == 0) {
    if (param_1 != 0) {
      DAT_1008c7d38 = _IONotificationPortCreate(*(undefined4 *)PTR__kIOMasterPortDefault_10082e788);
      if (DAT_1008c7d38 == 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "sNotifyPort != __null";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        iVar2 = -0x24;
        goto LAB_100633067;
      }
      lVar4 = _IONotificationPortGetRunLoopSource(DAT_1008c7d38);
      if (lVar4 == 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_4a = "runLoopSource != __null";
LAB_1006334c2:
          local_4c = 0x822;
          local_54 = "Assertion failure";
          local_58 = 0x8220202;
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x16);
        }
LAB_100633304:
        FUN_1001782e9(0,0);
        iVar2 = -0x6c;
      }
      else {
        uVar3 = *(undefined8 *)PTR__kCFAllocatorDefault_10082e018;
        lVar5 = FUN_100171409(uVar3,0,PTR__kCFCopyStringDictionaryKeyCallBacks_10082e060,
                              PTR__kCFTypeDictionaryValueCallBacks_10082e140);
        if (lVar5 == 0) {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            local_4a = "matchingDict != __null";
            goto LAB_1006334c2;
          }
          goto LAB_100633304;
        }
        lVar6 = FUN_100171409(uVar3,0,PTR__kCFCopyStringDictionaryKeyCallBacks_10082e060,
                              PTR__kCFTypeDictionaryValueCallBacks_10082e140);
        if (lVar6 == 0) {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "subDict != __null";
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          iVar2 = -0x6c;
        }
        else {
          FUN_100171502(lVar6,&cf_SCSITaskDeviceCategory,&cf_iPodUserClientDevice);
          FUN_100171502(lVar5,&cf_IOPropertyMatch,lVar6);
          FUN_10017060f(lVar6);
          _DAT_1008c7d40 = param_1;
          _DAT_1008c7d48 = param_3;
          lVar5 = _CFRetain(lVar5);
          iVar2 = _IOServiceAddMatchingNotification
                            (DAT_1008c7d38,"IOServiceFirstMatch",lVar5,FUN_100633622,&DAT_1008c7d40,
                             &local_5c);
          if (iVar2 == 0) {
            FUN_100633622();
            iVar2 = _IOServiceAddMatchingNotification
                              (DAT_1008c7d38,"IOServiceTerminate",lVar5,FUN_10063370e,&DAT_1008c7d40
                               ,&local_5c);
            if (iVar2 == 0) {
              FUN_10063370e(&DAT_1008c7d40,local_5c);
              if (param_2 != 0) {
                iVar2 = FUN_100633762(DAT_1008c7d38,param_2);
                if ((iVar2 != -0x80) && (iVar2 != 0)) {
                  uVar3 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar3,0x10);
                  if (cVar1 != '\0') {
                    local_58 = 0x8220202;
                    local_54 = "Assertion failure";
                    local_4c = 0x400;
                    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
                    __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,
                                        0x12);
                  }
                }
              }
              if (param_4 == 0) {
                param_4 = _CFRunLoopGetCurrent();
              }
              _CFRunLoopAddSource(param_4,lVar4,*(undefined8 *)PTR__kCFRunLoopCommonModes_10082e110)
              ;
              iVar2 = 0;
              goto LAB_100633067;
            }
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "kernErr == 0";
              __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
          }
          else {
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "kernErr == 0";
              __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
            FUN_10017060f(lVar5);
          }
        }
        FUN_10017060f(lVar5);
      }
      if (DAT_1008c7d38 != 0) {
        _IONotificationPortDestroy();
        DAT_1008c7d38 = 0;
      }
      goto LAB_100633067;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_4a = "callback != __null";
      goto LAB_1006332bd;
    }
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_4a = "sNotifyPort == __null";
LAB_1006332bd:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x16);
    }
  }
  FUN_1001782e9(0,0);
  iVar2 = -0x32;
LAB_100633067:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

