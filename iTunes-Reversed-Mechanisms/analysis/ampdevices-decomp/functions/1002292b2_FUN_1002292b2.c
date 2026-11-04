// name: FUN_1002292b2
// address: 1002292b2

int FUN_1002292b2(undefined4 *param_1,int param_2,undefined4 param_3,char param_4,void *param_5,
                 long param_6,undefined1 *param_7,short *param_8)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  short sVar6;
  undefined4 local_ab8 [2];
  undefined1 local_ab0 [8];
  long local_aa8;
  undefined4 local_a9c;
  undefined4 local_a98;
  undefined4 uStack_a94;
  undefined4 uStack_a90;
  undefined2 uStack_a8c;
  undefined2 uStack_a8a;
  undefined2 uStack_a88;
  undefined4 local_a78;
  char *local_a74;
  undefined2 local_a6c;
  int local_a6a;
  undefined8 local_a50;
  undefined4 local_658;
  char *local_654;
  undefined2 local_64c;
  char *local_64a;
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_aa8 = param_6;
  if (param_5 == (void *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_458 = 0x8220202;
      local_454 = "Assertion failure";
      local_44c = 0x822;
      local_44a = "outBundleFileSpec != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
    FUN_1001782e9(0,0);
    iVar3 = -0x32;
    goto LAB_100229703;
  }
  local_a9c = param_3;
  FUN_1001c62d9(param_5,0x420);
  sVar6 = (param_2 == 6) + 0x10e5;
  if (param_4 == '\0') {
LAB_100229380:
    cVar1 = FUN_10024bcee(*param_1);
    if (cVar1 != '\0') {
      FUN_10024f22a(&local_a78);
      local_ab8[0] = 0;
      FUN_1001c62d9(local_ab0,8);
      cVar1 = FUN_10024ca82(param_2,local_a9c,param_1,&local_a78,0);
      if (cVar1 == '\0') {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_658 = 0x8220202;
          local_654 = "Assertion failure";
          local_64c = 0x822;
          local_64a = 
          "GetNewestKnownMobileDeviceRecoveryBundleInfoForProductType(deviceSoftwareType, securityEpoch, deviceUpdaterFamilyInfo, &webBundleInfo, nullptr)"
          ;
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_658,0x16);
        }
        iVar2 = 0x5c6;
        FUN_1001782e9(0,0);
      }
      else {
        if (local_aa8 != 0) {
          FUN_100249f2c(local_aa8,&local_a78);
        }
        iVar3 = FUN_100228fd4(param_1,local_a50,&local_458,local_ab8);
        if (iVar3 == 0) {
          cVar1 = FUN_10024abfd(&local_a78,local_ab8);
          if (cVar1 == '\0') goto LAB_1002295af;
          _memcpy(param_5,&local_458,0x420);
          iVar2 = 0;
        }
        else {
LAB_1002295af:
          FUN_1001c334a(&local_658,0x10cf0024);
          local_a98 = 0;
          uStack_a94 = 0;
          uStack_a90 = 0;
          uStack_a8c = 0;
          uStack_a8a = 0;
          iVar2 = FUN_100227caa(local_a50,&local_a98,&local_658,0,0x2d,param_5);
          FUN_1001b7a50(&local_658);
        }
        sVar6 = 0x10da;
      }
      FUN_100249fca(local_ab8);
      FUN_10024f3ba(&local_a78);
      goto LAB_1002296ef;
    }
    iVar3 = 0x5c6;
    if (param_2 == 4) {
      iVar2 = FUN_1003870d4(3,0,&local_458);
      if (iVar2 != -0x80) {
        if (iVar2 == 0) {
          FUN_1001e04f5("Recovery.ipsw",&local_658);
          iVar2 = FUN_10017ecc9(&local_458,&local_658,&local_a78,0);
          if (iVar2 != -0x80) {
            if (iVar2 == 0) {
              _memcpy(param_5,&local_a78,0x420);
              iVar2 = 0;
            }
            else {
              uVar4 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar4,0x10);
              if (cVar1 != '\0') {
                puVar5 = &local_a98;
                local_a98 = 0x8220202;
                uStack_a94 = 0x7a0a90;
                uStack_a90 = 1;
                uStack_a8c = 0x400;
                uStack_a8a = (undefined2)iVar2;
                uStack_a88 = (undefined2)((uint)iVar2 >> 0x10);
                goto LAB_1002297af;
              }
            }
          }
        }
        else {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            puVar5 = &local_a78;
            local_a78 = 0x8220202;
            local_a74 = "Assertion failure";
            local_a6c = 0x400;
            local_a6a = iVar2;
LAB_1002297af:
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",puVar5,0x12);
          }
        }
      }
      sVar6 = 0x10da;
      goto LAB_1002296ef;
    }
  }
  else {
    iVar2 = FUN_10024f5ea(param_1 + 2,0x69506f64,0,0,0,0,FUN_10025364a,0);
    iVar3 = -0x80;
    if (iVar2 != 0x5ca) {
      iVar3 = iVar2;
    }
    if (iVar3 == -0x80) goto LAB_1002296f6;
    if (iVar3 == 0) {
      if (param_7 != (undefined1 *)0x0) {
        *param_7 = 1;
      }
      goto LAB_100229380;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_458 = 0x8220202;
      local_454 = "Assertion failure";
      local_44c = 0x400;
      local_44a = (char *)CONCAT44(local_44a._4_4_,iVar3);
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_458,0x12);
    }
LAB_1002296ef:
    iVar3 = iVar2;
    if (iVar2 == 0) {
      iVar3 = 0;
      goto LAB_100229703;
    }
  }
LAB_1002296f6:
  *param_8 = sVar6;
LAB_100229703:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

