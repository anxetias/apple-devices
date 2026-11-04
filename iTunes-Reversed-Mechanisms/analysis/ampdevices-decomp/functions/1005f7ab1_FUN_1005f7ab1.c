// name: FUN_1005f7ab1
// address: 1005f7ab1

int FUN_1005f7ab1(long param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_870;
  undefined4 local_868;
  char *local_864;
  undefined2 local_85c;
  char *local_85a;
  undefined4 local_448;
  char *local_444;
  undefined2 local_43c;
  char *local_43a;
  undefined1 local_248 [512];
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_870 = 0;
  if (param_2 == (undefined8 *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_85a = "gameInfo != __null";
LAB_1005f7d77:
      local_85c = 0x822;
      local_864 = "Assertion failure";
      local_868 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_868,0x16);
    }
  }
  else {
    *param_2 = 0;
    if (param_1 != 0) {
      FUN_1001e04f5("Manifest.plist",local_248);
      lVar3 = 0;
      iVar2 = FUN_10017ecc9(param_1,local_248,&local_868,0);
      if (iVar2 != 0) goto LAB_1005f7c31;
      lVar3 = FUN_10016aa24(DAT_1008c4d90,&local_868,0,0);
      if (lVar3 == 0) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_448 = 0x8220202;
          local_444 = "Assertion failure";
          local_43c = 0x822;
          local_43a = "manifestDictionary != nullptr";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_448,0x16);
        }
        lVar3 = 0;
LAB_1005f7c22:
        FUN_1001782e9(0,0);
        iVar2 = 0x4b1;
LAB_1005f7c31:
        FUN_10017060f(lVar3);
        uVar4 = local_870;
      }
      else {
        iVar2 = FUN_10017d489(param_1,local_248);
        if (iVar2 == 0) {
          cVar1 = FUN_100166ce2(lVar3,&cf_GUID,&local_448);
          if (cVar1 == '\0') {
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 != '\0') {
              local_48 = 0x8220202;
              local_44 = "Assertion failure";
              local_3c = 0x822;
              local_3a = 
              "JRCFDictionaryGetUString(manifestDictionary, kIPodGameManifestGUIDKey, gameGUIDString)"
              ;
              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
            }
            goto LAB_1005f7c22;
          }
          cVar1 = FUN_1001e3edc(local_248,&local_448,1);
          if (cVar1 == '\0') {
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 != '\0') {
              local_48 = 0x8220202;
              local_44 = "Assertion failure";
              local_3c = 0x822;
              local_3a = "IsEqualUString(tempName, gameGUIDString, kIgnoreCase)";
              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
            }
            FUN_1001782e9(0,0);
            iVar2 = -0x78;
          }
          else {
            iVar2 = FUN_1005f9507(lVar3,&local_870);
            if (iVar2 == 0) {
              FUN_100169174(local_870,&cf_Location,param_1);
              iVar2 = FUN_1005f9ecd(param_1,lVar3,local_870);
              if (iVar2 == 0) {
                FUN_10017060f(lVar3);
                uVar4 = local_870;
                goto LAB_1005f7d45;
              }
              uVar4 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar4,0x10);
              if (cVar1 != '\0') {
                local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
                goto LAB_1005f7ebc;
              }
            }
            else {
              uVar4 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar4,0x10);
              if (cVar1 != '\0') {
                local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
LAB_1005f7ebc:
                local_3c = 0x400;
                local_44 = "Assertion failure";
                local_48 = 0x8220202;
                __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12)
                ;
              }
            }
          }
          goto LAB_1005f7c31;
        }
        if (iVar2 == -0x80) {
          FUN_10017060f(lVar3);
          iVar2 = -0x80;
          uVar4 = 0;
        }
        else {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            local_448 = 0x8220202;
            local_444 = "Assertion failure";
            local_43c = 0x400;
            local_43a = (char *)CONCAT44(local_43a._4_4_,iVar2);
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_448,0x12);
          }
          FUN_10017060f();
          uVar4 = 0;
          if (iVar2 == 0) {
LAB_1005f7d45:
            *param_2 = uVar4;
            iVar2 = 0;
            goto LAB_1005f7c45;
          }
        }
      }
      FUN_10017060f(uVar4);
      goto LAB_1005f7c45;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_85a = "gameDirectorySpec != __null";
      goto LAB_1005f7d77;
    }
  }
  FUN_1001782e9(0,0);
  iVar2 = -0x32;
LAB_1005f7c45:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

