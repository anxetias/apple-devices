// name: FUN_1005c1860
// address: 1005c1860

int FUN_1005c1860(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 long *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  char *local_88;
  undefined8 local_80;
  long local_78;
  char *local_70;
  undefined8 local_68;
  cfstringStruct *local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_60 = &cf_CloseOnInvalidate;
  local_68 = *(undefined8 *)PTR__kCFBooleanFalse_10082e030;
  if (param_4 == (undefined8 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "connection != __null";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    *param_4 = 0;
    if (param_5 != (long *)0x0) {
      *param_5 = 0;
      local_70 = param_1;
      local_78 = FUN_1001713ff(DAT_1008c4d90,&local_60,&local_68,1,
                               PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                               PTR__kCFTypeDictionaryValueCallBacks_10082e140);
      if (local_78 == 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "options != __null";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      iVar2 = FUN_1005b98e2(local_70,&cf_com_apple_afc,local_78,param_4);
      if (iVar2 < 0x479) {
        if ((iVar2 != -0x17ffffd8) && (iVar2 != -0x80)) {
          if (iVar2 != 0) goto LAB_1005c1a58;
          iVar2 = _AMDServiceConnectionGetSocket(*param_4);
          if (iVar2 == -1) {
            local_80 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(local_80,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "socket != (-1)";
              __os_log_error_impl(0x100000000,local_80,0x10,"%{public}s: (%{public}s)",&local_58,
                                  0x16);
            }
            FUN_1001782e9(0,0);
          }
          lVar4 = _AFCConnectionCreate(DAT_1008c4d90,iVar2,1,param_2,param_3);
          *param_5 = lVar4;
          if (lVar4 != 0) {
            uVar3 = _AMDServiceConnectionGetSecureIOContext(*param_4);
            _AFCConnectionSetSecureContext(lVar4,uVar3);
            _AFCConnectionSetDisposeSecureContextOnInvalidate(*param_5,1);
            goto LAB_1005c1a7a;
          }
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "*afcConnection != __null";
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
          iVar2 = -0x17ffbffd;
          if (cVar1 != '\0') {
            uVar3 = _AMDeviceCopyDeviceIdentifier(local_70);
            FUN_1001aaedc(&local_88,uVar3);
            local_58 = 0x8420202;
            local_54 = local_88;
            local_4c = 0x800;
            local_4a = local_70;
            __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                                "AFCConnectionCreate failed for device %{public}@ (%p)",&local_58,
                                0x16);
            FUN_1001ab006(&local_88);
          }
        }
LAB_1005c1ac4:
        if (*param_5 != 0) {
          _AFCConnectionInvalidate();
          FUN_10017060f(*param_5);
          *param_5 = 0;
        }
        FUN_10017060f(*param_4);
        *param_4 = 0;
      }
      else {
        if (iVar2 - 0x479U < 2) goto LAB_1005c1ac4;
LAB_1005c1a58:
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
        if (iVar2 != 0) goto LAB_1005c1ac4;
LAB_1005c1a7a:
        iVar2 = 0;
      }
      FUN_10017060f(local_78);
      goto LAB_1005c1af8;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "afcConnection != __null";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  iVar2 = -0x32;
LAB_1005c1af8:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

