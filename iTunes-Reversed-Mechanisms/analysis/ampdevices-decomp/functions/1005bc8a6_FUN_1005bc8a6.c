// name: FUN_1005bc8a6
// address: 1005bc8a6

int FUN_1005bc8a6(undefined8 param_1,long param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "universalAccessPrefs != __null";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar3 = -0x32;
  }
  else {
    FUN_1001c62d9(param_2,9);
    iVar3 = FUN_1005b7cbc(param_1);
    if (iVar3 != -0x80) {
      if (iVar3 == 0) {
        FUN_1005b899d(param_1,&cf_VoiceOverTouchEnabledByiTunes,param_2);
        FUN_1005b899d(param_1,&cf_ZoomTouchEnabledByiTunes,param_2 + 1);
        FUN_1005b899d(param_1,&cf_InvertDisplayEnabledByiTunes,param_2 + 2);
        FUN_1005b899d(param_1,&cf_SpeakAutoCorrectionsEnabledByiTunes,param_2 + 3);
        FUN_1005b899d(param_1,&cf_MonoAudioEnabledByiTunes,param_2 + 4);
        FUN_1005b899d(param_1,&cf_ClosedCaptioningEnabledByiTunes,param_2 + 5);
        uVar4 = _CFStringGetTypeID();
        lVar5 = FUN_1005b8d4a(param_1,0,&cf_BuildVersion,uVar4);
        if (lVar5 != 0) {
          lVar6 = FUN_100173bb7(lVar5,&cf_8A111,0x40);
          *(bool *)(param_2 + 6) = lVar6 != -1;
          lVar6 = FUN_100173bb7(lVar5,&cf_10A1,0x40);
          *(bool *)(param_2 + 8) = lVar6 != -1;
        }
        uVar4 = _CFArrayGetTypeID();
        lVar6 = FUN_1005b8d4a(param_1,&cf_com_apple_mobile_iTunes,&cf_AccessibilityLanguages,uVar4);
        if (lVar6 != 0) {
          uVar4 = _CFStringGetTypeID();
          lVar7 = FUN_1005b8d4a(param_1,&cf_com_apple_international,&cf_Language,uVar4);
          if (lVar7 != 0) {
            lVar8 = FUN_10017076e(lVar6);
            if (lVar8 < 1) {
              bVar10 = true;
            }
            else {
              bVar10 = false;
              uVar4 = FUN_100164a01(lVar6,0);
              cVar2 = FUN_100173f7c(lVar7,uVar4);
              if (cVar2 == '\0') {
                lVar1 = 1;
                do {
                  lVar9 = lVar1;
                  if (lVar8 == lVar9) break;
                  uVar4 = FUN_100164a01(lVar6,lVar9);
                  cVar2 = FUN_100173f7c(lVar7,uVar4);
                  lVar1 = lVar9 + 1;
                } while (cVar2 == '\0');
                bVar10 = lVar8 <= lVar9;
              }
            }
            *(bool *)(param_2 + 7) = bVar10;
          }
          FUN_10017060f(lVar7);
        }
        FUN_1005b8595(param_1);
        FUN_10017060f(lVar6);
        FUN_10017060f(lVar5);
        iVar3 = 0;
      }
      else {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

