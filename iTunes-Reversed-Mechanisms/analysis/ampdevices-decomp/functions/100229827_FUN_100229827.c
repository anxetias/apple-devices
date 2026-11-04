// name: FUN_100229827
// address: 100229827

long FUN_100229827(byte param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long local_68;
  long local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar2 = FUN_1001cd3d4();
  lVar3 = FUN_1001722b7(&cf_MobileDeviceSoftwareUpdateQueue,uVar2);
  if (lVar3 == 0) {
LAB_100229939:
    lVar3 = 0;
  }
  else {
    lVar4 = _CFDictionaryGetTypeID();
    lVar5 = _CFGetTypeID(lVar3);
    if (lVar4 != lVar5) goto LAB_100229939;
    lVar4 = FUN_100172752(DAT_1008c4d90,lVar3,2);
    if (lVar4 != 0) {
LAB_1002298cc:
      if (((param_1 | DAT_1008a2dc4) & 1) == 0) {
        local_60 = 0;
        local_68 = FUN_100229827(1);
        if (local_68 != 0) {
          local_60 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                                   PTR__kCFTypeDictionaryValueCallBacks_10082e140);
          if (local_60 == 0) {
            uVar2 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar2,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "context.mMutableDictionary != nullptr";
              __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
          }
          else {
            FUN_1001714c2(local_68,FUN_100229c25,&local_60);
            FUN_100229aa0(local_60);
          }
        }
        FUN_1001988bc(&local_68);
        FUN_10017060f(local_60);
        DAT_1008a2dc4 = 1;
        FUN_10017060f(lVar4);
        lVar4 = FUN_100229827(1);
      }
      goto LAB_10022993e;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure (expected to be not NULL)";
      local_4c = 0x822;
      local_4a = "mutableDictionary";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    cVar1 = FUN_1001782e9(0,0);
    if (cVar1 != '\0') goto LAB_1002298cc;
  }
  lVar4 = 0;
LAB_10022993e:
  FUN_10017060f(lVar3);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

