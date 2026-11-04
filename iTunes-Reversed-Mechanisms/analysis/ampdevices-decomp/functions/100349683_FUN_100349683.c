// name: FUN_100349683
// address: 100349683

int FUN_100349683(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  cfstringStruct *pcVar5;
  undefined8 local_490;
  undefined8 local_488;
  int local_47c;
  undefined4 local_478;
  char *local_474;
  undefined2 local_46c;
  int local_46a;
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_1004de07b();
  if (lVar3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_44a = "handlerData != nullptr";
LAB_1003498fd:
      local_44c = 0x822;
      local_454 = "Assertion failure";
      local_458 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
  }
  else {
    cVar1 = FUN_100340ac2(param_2,0,&local_47c,&local_490);
    if (cVar1 != '\0') {
      if ((local_47c != 2) && (local_47c != 5)) {
        local_488 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(local_488,0x10);
        if (cVar1 != '\0') {
          local_458 = 0x8220202;
          local_454 = "Assertion failure";
          local_44c = 0x822;
          local_44a = 
          "assetClass == kAirTrafficAssetClass_Track || assetClass == kAirTrafficAssetClass_Lyrics";
          __os_log_error_impl(0x100000000,local_488,0x10,"%{public}s: (%{public}s)",&local_458,0x16)
          ;
        }
        FUN_1001782e9(0,0);
      }
      pcVar5 = (cfstringStruct *)0x0;
      if (local_47c == 2) {
        pcVar5 = &cf_Lyrics;
      }
      iVar2 = FUN_100347c5b(lVar3,pcVar5,&local_458);
      if (iVar2 != -0x80) {
        if (iVar2 == 0) {
          iVar2 = FUN_100349a87(lVar3,param_2,local_490,&local_458,param_3,param_4);
          if ((iVar2 == -0x80) || (iVar2 == 0)) goto LAB_10034984a;
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
        }
        else {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
        }
        if (cVar1 != '\0') {
          local_46c = 0x400;
          local_474 = "Assertion failure";
          local_478 = 0x8220202;
          local_46a = iVar2;
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_478,0x12);
        }
      }
      goto LAB_10034984a;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_44a = 
      "ParseAirTrafficMediaAssetIdentifier( assetIdentifier, nullptr, assetClass, assetID )";
      goto LAB_1003498fd;
    }
  }
  FUN_1001782e9(0,0);
  iVar2 = -0x32;
LAB_10034984a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

