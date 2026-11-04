// name: FUN_10033786f
// address: 10033786f

int FUN_10033786f(long param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 local_298 [16];
  long local_288;
  long local_280;
  undefined1 local_278 [32];
  undefined1 local_258 [512];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_288 = param_5;
  if (param_1 == 0) {
LAB_100337a88:
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "DulcimerHandlerDataIsValid(handlerData)";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(param_1 + 8) != 0x64756c63) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure (expected to be true)";
        local_4c = 0x822;
        local_4a = "handlerData->magic == kDulcimerHandlerDataMagic";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar3 = FUN_1001782e9(0,1);
      if (cVar3 == '\0') goto LAB_100337a88;
    }
    if (((param_2 == 0) || (*(long *)(param_2 + 8) == 0)) ||
       (*(long *)(*(long *)(param_2 + 8) + 0x10) == 0)) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "TrackInstanceIsValid(trackInstance)";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      cVar3 = FUN_10017cbd0(param_3);
      if (cVar3 == '\0') {
        uVar5 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar5,0x10);
        if (cVar3 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "JRFileSpecIsValid(sourceFileSpec)";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else if (param_4 == 0) {
        uVar5 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar5,0x10);
        if (cVar3 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "folderSpec != nullptr";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else if (local_288 == 0) {
        uVar5 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar5,0x10);
        if (cVar3 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "fileName != nullptr";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else {
        puVar1 = *(undefined8 **)(param_2 + 8);
        if ((puVar1 != (undefined8 *)0x0) && (puVar1[2] != 0)) {
          local_280 = FUN_100165701(DAT_1008c4d90,*puVar1);
          if (local_280 == 0) {
            uVar5 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar5,0x10);
            if (cVar3 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "assetKey != nullptr";
              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
            iVar4 = -0x6c;
          }
          else {
            lVar6 = FUN_100166b7f(*(undefined8 *)(param_1 + 0x167f0));
            if (lVar6 == 0) {
              uVar5 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar5,0x10);
              if (cVar3 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x822;
                local_4a = "assetInfoDict != nullptr";
                __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
              FUN_1001782e9(0,0);
              if (DAT_1008c75c0 != -1) {
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              uVar5 = DAT_1008c75b8;
              cVar3 = _os_log_type_enabled(DAT_1008c75b8,0x10);
              iVar4 = -0x2b;
              if (cVar3 != '\0') {
                pcVar2 = (char *)*puVar1;
                FUN_100476ac1(local_298,puVar1);
                local_4a = (char *)FUN_1001b83ae(local_298);
                local_58 = 0x8000202;
                local_4c = 0x822;
                local_54 = pcVar2;
                __os_log_impl(0x100000000,uVar5,0x10,
                              "airtraffic> failed to find asset info for track %lld (\"%{public}s\")"
                              ,&local_58,0x16);
                FUN_1001b7a50(local_298);
              }
            }
            else {
              cVar3 = FUN_100166ce2(lVar6,&cf_AssetID,local_258);
              if (cVar3 == '\0') {
                uVar5 = FUN_1001cc310();
                cVar3 = _os_log_type_enabled(uVar5,0x10);
                if (cVar3 != '\0') {
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x822;
                  local_4a = 
                  "JRCFDictionaryGetUString(assetInfoDict, ((CFStringRef) __builtin___CFStringMakeConstantString (\"\" \"AssetID\" \"\")), baseName)"
                  ;
                  __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,
                                      0x16);
                }
                FUN_1001782e9(0,0);
                iVar4 = -0x32;
              }
              else {
                iVar4 = FUN_100187cb2(param_3,local_278);
                if (iVar4 != -0x80) {
                  if (iVar4 == 0) {
                    iVar4 = FUN_10017ed94(local_258,local_278,local_288);
                    if (iVar4 != -0x80) {
                      if (iVar4 == 0) {
                        uVar5 = FUN_100166c1b(lVar6,&cf_Dataclass);
                        iVar4 = FUN_100337125(param_1,uVar5,1,param_4);
                        if ((iVar4 != -0x80) && (iVar4 != 0)) {
                          uVar5 = FUN_1001cc310();
                          cVar3 = _os_log_type_enabled(uVar5,0x10);
                          if (cVar3 != '\0') {
                            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
                            goto LAB_100337f88;
                          }
                        }
                      }
                      else {
                        uVar5 = FUN_1001cc310();
                        cVar3 = _os_log_type_enabled(uVar5,0x10);
                        if (cVar3 != '\0') {
                          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
LAB_100337f88:
                          local_4c = 0x400;
                          local_54 = "Assertion failure";
                          local_58 = 0x8220202;
                          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",
                                              &local_58,0x12);
                        }
                      }
                    }
                  }
                  else {
                    uVar5 = FUN_1001cc310();
                    cVar3 = _os_log_type_enabled(uVar5,0x10);
                    if (cVar3 != '\0') {
                      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
                      goto LAB_100337f88;
                    }
                  }
                }
              }
            }
          }
          FUN_10017060f(local_280);
          goto LAB_100337adc;
        }
        uVar5 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar5,0x10);
        if (cVar3 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "TrackInfoIsValid(trackInfo)";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
    }
  }
  iVar4 = -0x32;
LAB_100337adc:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

