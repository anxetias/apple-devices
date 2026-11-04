// name: FUN_1005f77bc
// address: 1005f77bc

undefined1 FUN_1005f77bc(undefined8 param_1,uint param_2,int param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 uVar7;
  uint local_64;
  int local_60;
  int local_5c;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_100167dd2(param_1,&cf_IsBuiltIn,0);
  uVar7 = 1;
  if (cVar1 == '\0') {
    lVar2 = FUN_100166844(param_1,&cf_Platforms);
    if (lVar2 == 0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "platformsArray != nullptr";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      uVar7 = 0;
      FUN_1001782e9(0,0);
    }
    else {
      lVar3 = FUN_10017076e(lVar2);
      if (0 < lVar3) {
        lVar6 = 0;
        local_5c = param_3;
        do {
          lVar4 = FUN_10016499b(lVar2,lVar6);
          if (lVar4 == 0) {
            uVar5 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar5,0x10);
            if (cVar1 != '\0') {
              local_4a = "platformDictionary != nullptr";
LAB_1005f7988:
              local_4c = 0x822;
              local_54 = "Assertion failure";
              local_58 = 0x8220202;
              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
LAB_1005f79b1:
            FUN_1001782e9(0,0);
          }
          else {
            cVar1 = FUN_100167896(lVar4,&cf_PlatformID,&local_64);
            if (cVar1 == '\0') {
              uVar5 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar5,0x10);
              if (cVar1 != '\0') {
                local_4a = 
                "JRCFDictionaryGetSInt32(platformDictionary, kIPodGameManifestPlatformIDKey, &platformID)"
                ;
                goto LAB_1005f7988;
              }
              goto LAB_1005f79b1;
            }
            cVar1 = FUN_100167896(lVar4,&cf_PlatformVersion,&local_60);
            if (cVar1 == '\0') {
              uVar5 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar5,0x10);
              if (cVar1 != '\0') {
                local_4a = 
                "JRCFDictionaryGetSInt32(platformDictionary, kIPodGameManifestPlatformVersionKey, &platformVersion)"
                ;
                goto LAB_1005f7988;
              }
              goto LAB_1005f79b1;
            }
            if (((param_2 == 0) || (local_64 == 0)) ||
               ((local_64 == param_2 && ((local_5c == 0 || (local_60 == local_5c)))))) {
LAB_1005f79d0:
              uVar7 = 1;
              goto LAB_1005f79ff;
            }
            if (param_2 == 4) {
              if ((local_64 & 0xfffffffe) == 2) goto LAB_1005f79d0;
            }
            else if ((param_2 == 5) && (local_64 - 2 < 3)) goto LAB_1005f79d0;
          }
          lVar6 = lVar6 + 1;
        } while (lVar3 != lVar6);
      }
      uVar7 = 0;
    }
  }
LAB_1005f79ff:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar7;
}

