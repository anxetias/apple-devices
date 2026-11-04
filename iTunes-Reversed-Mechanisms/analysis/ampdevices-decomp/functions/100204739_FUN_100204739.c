// name: FUN_100204739
// address: 100204739

void FUN_100204739(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_1001705e9();
  lVar4 = _CFStringGetTypeID();
  if (lVar3 == lVar4) {
    lVar3 = FUN_1001705e9(param_2);
    lVar4 = _CFDictionaryGetTypeID();
    if (lVar3 == lVar4) {
      lVar3 = FUN_10016696d(param_2,&cf_iTunesMetadata);
      if (lVar3 == 0) goto LAB_1002048c4;
      lVar3 = FUN_10016a956(0,lVar3,1,&local_50,0);
      puVar1 = PTR_cf_itemName_100852750;
      if (lVar3 != 0) {
        lVar4 = FUN_100171475(lVar3,PTR_cf_itemName_100852750);
        if (lVar4 == 0) {
          lVar4 = FUN_100166c1b(lVar3,&cf_title);
          if (lVar4 != 0) {
            FUN_100171502(lVar3,puVar1,lVar4);
            lVar4 = FUN_10017270e(0,lVar3,local_50,0,0);
            if (lVar4 == 0) {
              uVar5 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar5,0x10);
              if (cVar2 != '\0') {
                local_48 = 0x8220202;
                local_44 = "Assertion failure";
                local_3c = 0x822;
                local_3a = "backupMetadataData != nullptr";
                __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16
                                   );
              }
              FUN_1001782e9(0,0);
            }
            FUN_100171502(param_2,&cf_iTunesMetadata,lVar4);
            FUN_10017060f(lVar4);
          }
        }
        FUN_10017060f(lVar3);
        goto LAB_1002048c4;
      }
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_3a = "backupMetadataDict != nullptr";
        goto LAB_100204948;
      }
    }
    else {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_3a = "JRCFGetTypeID(backupDict) == CFDictionaryGetTypeID()";
        goto LAB_100204948;
      }
    }
  }
  else {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_3a = "JRCFGetTypeID(appIdentifier) == CFStringGetTypeID()";
LAB_100204948:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  FUN_1001782e9(0,0);
LAB_1002048c4:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

