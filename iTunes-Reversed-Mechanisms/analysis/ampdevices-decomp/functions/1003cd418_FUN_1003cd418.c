// name: FUN_1003cd418
// address: 1003cd418

int FUN_1003cd418(long param_1,long param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 local_468;
  char *local_464;
  undefined2 local_45c;
  char *local_45a;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_1003cd558:
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_468 = 0x8220202;
      local_464 = "Assertion failure";
      local_45c = 0x822;
      local_45a = "DulcimerHandlerDataIsValid(handlerData)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_468,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(param_1 + 8) != 0x64756c63) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_468 = 0x8220202;
        local_464 = "Assertion failure (expected to be true)";
        local_45c = 0x822;
        local_45a = "handlerData->magic == kDulcimerHandlerDataMagic";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_468,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_1003cd558;
    }
    if (*(char *)(param_1 + 0x37c) == '\0') {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_468 = 0x8220202;
        local_464 = "Assertion failure";
        local_45c = 0x822;
        local_45a = "handlerData->deviceInfo.supportsStore";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_468,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      cVar1 = FUN_1003ca4e0(param_2);
      if (cVar1 != '\0') {
        uVar3 = *(undefined8 *)(param_2 + 0x58);
        iVar2 = FUN_1002b1039(uVar3,&local_468);
        if (iVar2 == -0x80) goto LAB_1003cd5d4;
        if (iVar2 == 0) {
          cVar1 = FUN_1002bd03f(param_2,*(undefined1 *)(param_1 + 0x39e),
                                *(undefined1 *)(param_1 + 0x39d));
          if (cVar1 == '\0') {
            lVar5 = FUN_1003cc68c(param_1,&local_468);
            if (lVar5 == 0) {
              uVar3 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar3,0x10);
              if (cVar1 != '\0') {
                local_48 = 0x8220202;
                local_44 = "Assertion failure";
                local_3c = 0x822;
                local_3a = "assetInfoDict != nullptr";
                __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16
                                   );
              }
              FUN_1001782e9(0,0);
              iVar2 = -0x2b;
              goto LAB_1003cd5d4;
            }
            iVar2 = FUN_100184b54(&local_468);
            if (iVar2 == 0) {
              FUN_1002b765a(uVar3);
            }
            iVar2 = FUN_1003cd0e6(param_1,lVar5,0xffffffffffffffff);
            if (iVar2 == -0x80) goto LAB_1003cd5d4;
            if (iVar2 != 0) {
              uVar3 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar3,0x10);
              if (cVar1 == '\0') goto LAB_1003cd5d4;
              local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
              goto LAB_1003cd643;
            }
          }
          else {
            iVar2 = FUN_1003cc13c(param_1,&local_468);
            if ((iVar2 != -0x80) && (iVar2 != 0)) {
              uVar4 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar4,0x10);
              if (cVar1 != '\0') {
                local_48 = 0x8220202;
                local_44 = "Assertion failure";
                local_3c = 0x400;
                local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
                __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12)
                ;
              }
            }
            cVar1 = FUN_10017fbfb(&local_468);
            if (cVar1 == '\0') {
              iVar2 = FUN_100184b54(&local_468);
              if (iVar2 == 0) {
                FUN_1002b765a(uVar3);
              }
            }
            else {
              iVar2 = FUN_100182d59(&local_468,1);
              if (iVar2 == 0) {
                FUN_1002b765a(uVar3);
              }
            }
          }
          iVar2 = 0;
          if (*(char *)(param_1 + 0x14cda) == '\0') {
            iVar2 = 0;
            lVar5 = FUN_10048bbac(*(undefined8 *)(param_1 + 0x30),0x14,0);
            if ((lVar5 != 0) && (*(int *)(*(long *)(lVar5 + 0x78) + 0x18) == 0)) {
              iVar2 = 0;
              FUN_100488d27(lVar5,0,0);
            }
          }
        }
        else {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 == '\0') goto LAB_1003cd5d4;
          local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
LAB_1003cd643:
          local_3c = 0x400;
          local_44 = "Assertion failure";
          local_48 = 0x8220202;
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
        }
        goto LAB_1003cd5d4;
      }
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_468 = 0x8220202;
        local_464 = "Assertion failure";
        local_45c = 0x822;
        local_45a = "TrackInfoIsValidIPodPurchasedTrack(trackInfo)";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_468,0x16);
      }
      FUN_1001782e9(0,0);
    }
  }
  iVar2 = -0x32;
LAB_1003cd5d4:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

