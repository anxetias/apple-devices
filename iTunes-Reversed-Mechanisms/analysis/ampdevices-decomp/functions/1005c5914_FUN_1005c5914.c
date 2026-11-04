// name: FUN_1005c5914
// address: 1005c5914

int FUN_1005c5914(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = FUN_1005b7cbc();
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      lVar3 = FUN_1005c58a3(param_1);
      if (lVar3 == 0) {
        iVar2 = 0;
      }
      else {
        lVar4 = FUN_100166b7f(lVar3,param_2);
        if (lVar4 == 0) {
          lVar4 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                                PTR__kCFTypeDictionaryValueCallBacks_10082e140);
        }
        if (param_3 == 0) {
          FUN_100171552(lVar4,&cf_SyncedDataclasses);
        }
        else {
          FUN_100171502(lVar4,&cf_SyncedDataclasses,param_3);
        }
        if (param_4 == 0) {
          FUN_100171552(lVar4,&cf_SyncedAssetTypes);
        }
        else {
          FUN_100171502(lVar4,&cf_SyncedAssetTypes,param_4);
        }
        lVar6 = FUN_100171426(lVar4);
        if (lVar6 < 1) {
          FUN_100171552(lVar3,param_2);
        }
        else {
          FUN_100171502(lVar3,param_2,lVar4);
        }
        lVar3 = FUN_100171426(lVar3);
        if (lVar3 < 1) {
          iVar2 = _AMDeviceRemoveValue(param_1,&cf_com_apple_iTunes,&cf_WiFiSyncingLibraries);
        }
        else {
          iVar2 = _AMDeviceSetValue();
        }
      }
      FUN_1005b8595(param_1);
    }
    else {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = iVar2;
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

