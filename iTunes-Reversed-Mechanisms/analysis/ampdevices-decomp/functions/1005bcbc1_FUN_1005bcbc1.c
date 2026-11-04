// name: FUN_1005bcbc1
// address: 1005bcbc1

int FUN_1005bcbc1(undefined8 param_1,char *param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (char *)0x0) {
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
    goto LAB_1005bd0f9;
  }
  iVar3 = FUN_1005b7cbc();
  if (iVar3 == -0x80) goto LAB_1005bd0f9;
  if (iVar3 != 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x400;
      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    }
    goto LAB_1005bd0f9;
  }
  uVar4 = *(undefined8 *)PTR__kCFBooleanTrue_10082e038;
  uVar1 = *(undefined8 *)PTR__kCFBooleanFalse_10082e030;
  uVar6 = uVar4;
  if (*param_2 == '\0') {
    uVar6 = uVar1;
  }
  iVar3 = _AMDeviceSetValue(param_1,&cf_com_apple_Accessibility,&cf_VoiceOverTouchEnabledByiTunes,
                            uVar6);
  if (iVar3 == -0x80) {
LAB_1005bd0e6:
    lVar5 = 0;
  }
  else {
    if (iVar3 != 0) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
LAB_1005bd0d3:
        local_4c = 0x400;
        local_54 = "Assertion failure";
        local_58 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
      goto LAB_1005bd0e6;
    }
    uVar6 = uVar4;
    if (param_2[1] == '\0') {
      uVar6 = uVar1;
    }
    iVar3 = _AMDeviceSetValue(param_1,&cf_com_apple_Accessibility,&cf_ZoomTouchEnabledByiTunes,uVar6
                             );
    if (iVar3 == -0x80) goto LAB_1005bd0e6;
    if (iVar3 != 0) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
        goto LAB_1005bd0d3;
      }
      goto LAB_1005bd0e6;
    }
    uVar6 = uVar4;
    if (param_2[2] == '\0') {
      uVar6 = uVar1;
    }
    iVar3 = _AMDeviceSetValue(param_1,&cf_com_apple_Accessibility,&cf_InvertDisplayEnabledByiTunes,
                              uVar6);
    if (iVar3 == -0x80) goto LAB_1005bd0e6;
    if (iVar3 != 0) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
        goto LAB_1005bd0d3;
      }
      goto LAB_1005bd0e6;
    }
    uVar6 = uVar4;
    if (param_2[3] == '\0') {
      uVar6 = uVar1;
    }
    iVar3 = _AMDeviceSetValue(param_1,&cf_com_apple_Accessibility,
                              &cf_SpeakAutoCorrectionsEnabledByiTunes,uVar6);
    if (iVar3 == -0x80) goto LAB_1005bd0e6;
    if (iVar3 != 0) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
        goto LAB_1005bd0d3;
      }
      goto LAB_1005bd0e6;
    }
    uVar6 = uVar4;
    if (param_2[4] == '\0') {
      uVar6 = uVar1;
    }
    iVar3 = _AMDeviceSetValue(param_1,&cf_com_apple_Accessibility,&cf_MonoAudioEnabledByiTunes,uVar6
                             );
    if (iVar3 == -0x80) goto LAB_1005bd0e6;
    if (iVar3 != 0) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
        goto LAB_1005bd0d3;
      }
      goto LAB_1005bd0e6;
    }
    if (param_2[5] == '\0') {
      uVar4 = uVar1;
    }
    iVar3 = _AMDeviceSetValue(param_1,&cf_com_apple_Accessibility,
                              &cf_ClosedCaptioningEnabledByiTunes,uVar4);
    if (iVar3 == -0x80) goto LAB_1005bd0e6;
    if (iVar3 != 0) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
        goto LAB_1005bd0d3;
      }
      goto LAB_1005bd0e6;
    }
    uVar4 = _CFDictionaryGetTypeID();
    lVar5 = FUN_1005b8d4a(param_1,&cf_com_apple_Accessibility,0,uVar4);
    if (lVar5 == 0) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "accessibilityDict != __null";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      lVar5 = 0;
      FUN_1001782e9(0,0);
      iVar3 = -0x17fffff8;
    }
    else {
      iVar3 = FUN_1005bd19c(param_1,&cf_com_apple_accessibility_status_itunes,lVar5);
      if ((iVar3 != -0x80) && (iVar3 != 0)) {
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
  FUN_1005b8595(param_1);
  FUN_10017060f(lVar5);
LAB_1005bd0f9:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

