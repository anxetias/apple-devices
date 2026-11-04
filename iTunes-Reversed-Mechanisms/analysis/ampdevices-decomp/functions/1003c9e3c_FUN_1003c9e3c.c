// name: FUN_1003c9e3c
// address: 1003c9e3c

undefined8 FUN_1003c9e3c(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_1003c9efe:
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    uVar5 = 0xffffffce;
    if (cVar1 != '\0') {
      local_3a = "DulcimerHandlerDataIsValid(handlerData)";
LAB_1003c9f88:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else {
    if (*(int *)(param_1 + 8) != 0x64756c63) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure (expected to be true)";
        local_3c = 0x822;
        local_3a = "handlerData->magic == kDulcimerHandlerDataMagic";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_1003c9efe;
    }
    if (*(char *)(param_1 + 0x37c) == '\0') {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      uVar5 = 0xffffffce;
      if (cVar1 != '\0') {
        local_3a = "handlerData->deviceInfo.supportsStore";
        goto LAB_1003c9f88;
      }
    }
    else {
      if (*(char *)(param_1 + 0x3a2) == '\0') {
        lVar3 = FUN_1002f930c(*(undefined8 *)(param_1 + 0x30));
        if (lVar3 != 0) {
          lVar4 = 0;
          do {
            cVar1 = FUN_1002bdac0(*(undefined8 *)(lVar3 + 0x58),1,0,0,0);
            if (cVar1 != '\0') {
              if (lVar4 == 0) {
                lVar4 = FUN_1003ca0fa(param_1);
                if (lVar4 == 0) {
                  uVar2 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar2,0x10);
                  uVar5 = 0;
                  if (cVar1 == '\0') goto LAB_1003c9fad;
                  local_3a = "purchasedPlaylist != nullptr";
                  goto LAB_1003c9f88;
                }
              }
              cVar1 = FUN_100485bb5(lVar3,lVar4,0);
              if (cVar1 == '\0') {
                uVar2 = FUN_10048a4b3(lVar3);
                FUN_1003a790f(uVar2,0,lVar4);
              }
            }
            lVar3 = FUN_1002f9451(lVar3);
          } while (lVar3 != 0);
        }
        uVar5 = 0;
        goto LAB_1003c9fb6;
      }
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      uVar5 = 0xffffffce;
      if (cVar1 != '\0') {
        local_3a = "handlerData->deviceInfo.supportsAirTraffic == false";
        goto LAB_1003c9f88;
      }
    }
  }
LAB_1003c9fad:
  FUN_1001782e9(0,0);
LAB_1003c9fb6:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

