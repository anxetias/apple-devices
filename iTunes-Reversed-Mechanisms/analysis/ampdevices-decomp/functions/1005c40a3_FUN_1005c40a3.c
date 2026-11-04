// name: FUN_1005c40a3
// address: 1005c40a3

int FUN_1005c40a3(undefined8 param_1,long param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_58 = 0;
  local_50 = 0;
  if (param_3 == (undefined8 *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_3a = "responseData != __null";
LAB_1005c4336:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else {
    *param_3 = 0;
    if (param_2 != 0) {
      iVar2 = FUN_1005b98e2(param_1,&cf_com_apple_mobile_integrity_relay,0,&local_58);
      if (iVar2 != -0x80) {
        if (iVar2 == 0) {
          lVar3 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                                PTR__kCFTypeDictionaryValueCallBacks_10082e140);
          if (lVar3 == 0) {
            uVar5 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar5,0x10);
            if (cVar1 != '\0') {
              local_48 = 0x8220202;
              local_44 = "Assertion failure";
              local_3c = 0x822;
              local_3a = "request != __null";
              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
            }
            FUN_1001782e9(0,0);
            iVar2 = -0x6c;
          }
          else {
            FUN_100171502(lVar3,&cf_Request,&cf_HandleAuthenticationChallenge);
            FUN_100171502(lVar3,&cf_Challenge,param_2);
            uVar5 = local_58;
            uVar4 = _CFDictionaryGetTypeID();
            iVar2 = FUN_1005b9af6(uVar5,lVar3,uVar4,&local_50);
            if (iVar2 != -0x80) {
              if (iVar2 == 0) {
                uVar5 = FUN_10016696d(local_50,&cf_Signature);
                uVar5 = FUN_1001705fc(uVar5);
                *param_3 = uVar5;
                iVar2 = 0;
              }
              else {
                uVar5 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar5,0x10);
                if (cVar1 != '\0') {
                  local_48 = 0x8220202;
                  local_44 = "Assertion failure";
                  local_3c = 0x400;
                  local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
                  __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,
                                      0x12);
                }
              }
            }
          }
          FUN_10017060f(local_50);
          FUN_10017060f(lVar3);
          FUN_10017060f(local_58);
        }
        else {
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 != '\0') {
            local_48 = 0x8220202;
            local_44 = "Assertion failure";
            local_3c = 0x400;
            local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x12);
          }
        }
      }
      goto LAB_1005c4224;
    }
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_3a = "challengeData != __null";
      goto LAB_1005c4336;
    }
  }
  FUN_1001782e9(0,0);
  iVar2 = -0x32;
LAB_1005c4224:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

