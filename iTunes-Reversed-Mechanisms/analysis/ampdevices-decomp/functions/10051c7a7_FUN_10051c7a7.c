// name: FUN_10051c7a7
// address: 10051c7a7

void FUN_10051c7a7(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_60 = param_1;
  lVar3 = FUN_1004de449(param_2);
  local_48 = 0;
  local_40 = 0;
  FUN_1001eed65(&local_60);
  if (lVar3 == 0) {
LAB_10051c8c7:
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "DulcimerHandlerDataIsValid(handlerData)";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(lVar3 + 8) != 0x64756c63) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure (expected to be true)";
        local_2c = 0x822;
        local_2a = "handlerData->magic == kDulcimerHandlerDataMagic";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_10051c8c7;
    }
    cVar1 = FUN_100266bdc(*(undefined8 *)(lVar3 + 0x66d8));
    if (cVar1 == '\0') {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure";
        local_2c = 0x822;
        local_2a = "ITIPodIsAppleIOSDevice(handlerData->podRef)";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      cVar1 = FUN_10051de77(lVar3,"backup-restore-automation-device-id");
      if (cVar1 != '\0') {
        cVar1 = FUN_1001cd899("backup-restore-automation-bundle-name",&local_48);
        if (cVar1 != '\0') {
          iVar2 = FUN_1002000f4(lVar3,local_48,&local_40);
          if (iVar2 != -0x80) {
            if (iVar2 == 0) {
              *(undefined1 *)(DAT_1008c76a0 + 0x1a58) = 3;
              local_58 = 0;
              uStack_50 = 0;
              FUN_1004fdc6e(*(undefined4 *)(lVar3 + 0x28),local_40,0,1,0,&local_58,0);
            }
            else {
              uVar4 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar4,0x10);
              if (cVar1 != '\0') {
                local_38 = 0x8220202;
                local_34 = "Assertion failure";
                local_2c = 0x400;
                local_2a = (char *)CONCAT44(local_2a._4_4_,iVar2);
                __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_38,0x12)
                ;
              }
            }
          }
        }
      }
      FUN_10017060f(local_40);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

