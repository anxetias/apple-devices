// name: FUN_100221ce3
// address: 100221ce3

ulong FUN_100221ce3(undefined4 *param_1,int *param_2,undefined8 param_3,long param_4,long param_5)

{
  int iVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  cfstringStruct *pcVar7;
  long local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (undefined4 *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      local_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0x2339;
      uStack_48 = 0x1007a;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else if (((param_2[8] != 0) || (param_2[9] != 0)) || ((char)param_2[10] != '\0')) {
    lVar3 = FUN_10022117b(param_1,"Restore.plist",0);
    if (lVar3 == 0) {
      lVar3 = FUN_10022117b(param_1,"BuildManifest.plist",0);
      lVar4 = 0;
      if (lVar3 != 0) goto LAB_100221d63;
LAB_100222073:
      lVar3 = lVar4;
      local_68 = 0;
LAB_100222076:
      param_1 = (undefined4 *)0x0;
    }
    else {
LAB_100221d63:
      if ((char)param_2[10] == '\0') {
        if (param_2[8] != 0 || param_2[9] != 0) {
          lVar6 = FUN_100166b7f(lVar3,&cf_SupportedProductTypeIDs);
          lVar4 = lVar3;
          if (lVar6 == 0) {
            uVar5 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar5,0x10);
            if (cVar2 != '\0') {
              local_58 = 0x8220202;
              uStack_54 = 0x7a0a90;
              local_50 = 1;
              uStack_4c = 0x822;
              uStack_4a = 0x11fd;
              uStack_48 = 0x1007b;
              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
          }
          else {
            pcVar7 = &cf_Recovery;
            if (param_2[9] == 0) {
              pcVar7 = &cf_DFU;
            }
            lVar6 = FUN_100166844(lVar6,pcVar7);
            if (lVar6 == 0) {
              uVar5 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar5,0x10);
              if (cVar2 != '\0') {
                local_58 = 0x8220202;
                uStack_54 = 0x7a0a90;
                local_50 = 1;
                uStack_4c = 0x822;
                uStack_4a = 0x122e;
                uStack_48 = 0x1007b;
                __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
              FUN_1001782e9(0,0);
            }
            else {
              iVar1 = param_2[9];
              if (iVar1 == 0) {
                iVar1 = param_2[8];
              }
              local_68 = FUN_10016593d(DAT_1008c4d90,iVar1);
              if (local_68 != 0) {
                uVar5 = FUN_10017076e(lVar6);
                param_1 = (undefined4 *)0x0;
                cVar2 = FUN_100170781(lVar6,0,uVar5,local_68);
                if (cVar2 == '\0') goto LAB_100222079;
                goto LAB_100221ddd;
              }
              uVar5 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar5,0x10);
              if (cVar2 != '\0') {
                local_58 = 0x8220202;
                uStack_54 = 0x7a0a90;
                local_50 = 1;
                uStack_4c = 0x822;
                uStack_4a = 0x124d;
                uStack_48 = 0x1007b;
                __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
              FUN_1001782e9(0,0);
            }
          }
          goto LAB_100222073;
        }
        local_68 = 0;
LAB_100221ddd:
        if (param_4 != 0) {
          lVar4 = FUN_100166c1b(lVar3,&cf_ProductBuildVersion);
          if (lVar4 == 0) {
            uVar5 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar5,0x10);
            if (cVar2 != '\0') {
              local_58 = 0x8220202;
              uStack_54 = 0x7a0a90;
              local_50 = 1;
              uStack_4c = 0x822;
              uStack_4a = 0xb6bf;
              uStack_48 = 0x1007a;
              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
            goto LAB_100222076;
          }
          param_1 = &local_58;
          local_58 = 0x73766d64;
          uVar5 = FUN_1001705fc(lVar4);
          local_50 = (undefined4)uVar5;
          uStack_4c = (undefined2)((ulong)uVar5 >> 0x20);
          uStack_4a = (undefined2)((ulong)uVar5 >> 0x30);
          FUN_100249f2c(param_4,param_1);
          FUN_100249fca(&local_58);
        }
        param_1 = (undefined4 *)CONCAT71((int7)((ulong)param_1 >> 8),1);
        if (param_5 != 0) {
          lVar4 = FUN_100166c1b(lVar3,&cf_MarketingVersion);
          if ((((lVar4 == 0) || (iVar1 = *param_2, iVar1 == 0x48416363)) ||
              ((iVar1 == 0x57617463 || (iVar1 == 0x48506f64)))) &&
             (lVar4 = FUN_100166c1b(lVar3,&cf_ProductVersion), lVar4 == 0)) {
            uVar5 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar5,0x10);
            if (cVar2 != '\0') {
              local_58 = 0x8220202;
              uStack_54 = 0x7a0a90;
              local_50 = 1;
              uStack_4c = 0x822;
              uStack_4a = 0x11c5;
              uStack_48 = 0x1007b;
              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
            goto LAB_100222076;
          }
          local_58 = 0x73766d64;
          uVar5 = FUN_1001705fc(lVar4);
          local_50 = (undefined4)uVar5;
          uStack_4c = (undefined2)((ulong)uVar5 >> 0x20);
          uStack_4a = (undefined2)((ulong)uVar5 >> 0x30);
          FUN_100249f2c(param_5);
          FUN_100249fee(&local_58);
        }
      }
      else {
        cVar2 = FUN_100221b36(lVar3);
        local_68 = 0;
        param_1 = (undefined4 *)0x0;
        if (cVar2 != '\0') goto LAB_100221ddd;
        local_68 = 0;
      }
    }
LAB_100222079:
    FUN_10017060f(local_68);
    FUN_10017060f(lVar3);
    goto LAB_100222089;
  }
  param_1 = (undefined4 *)0x0;
LAB_100222089:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return (ulong)param_1 & 0xffffffff;
}

