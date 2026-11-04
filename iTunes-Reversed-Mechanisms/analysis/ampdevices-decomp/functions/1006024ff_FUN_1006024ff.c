// name: FUN_1006024ff
// address: 1006024ff

undefined8 FUN_1006024ff(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_1006025cf:
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      local_2a = "DulcimerHandlerDataIsValid(handlerData)";
LAB_10060271b:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else {
    if (*(int *)(param_1 + 8) != 0x64756c63) {
      uVar6 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar6,0x10);
      if (cVar4 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure (expected to be true)";
        local_2c = 0x822;
        local_2a = "handlerData->magic == kDulcimerHandlerDataMagic";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      cVar4 = FUN_1001782e9(0,1);
      if (cVar4 == '\0') goto LAB_1006025cf;
    }
    if (*(char *)(param_1 + 0x157e0) != '\0') {
      uVar6 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar6,0x10);
      if (cVar4 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure";
        local_2c = 0x822;
        local_2a = "handlerData->waitingForSyncLock == false";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      FUN_1001782e9(0,0);
    }
    iVar5 = FUN_1001b19b0();
    lVar1 = *(long *)(param_1 + 0x20);
    if (*(int *)(lVar1 + 0x5c) == iVar5) {
      *(undefined4 *)(lVar1 + 0x5c) = 0;
      uVar6 = 0;
      puVar2 = *(undefined8 **)(lVar1 + 0x10);
      while (puVar3 = puVar2, puVar3 != (undefined8 *)0x0) {
        puVar2 = (undefined8 *)*puVar3;
        if (*(char *)(puVar3 + 0x2afc) != '\0') {
          FUN_1001e9809(puVar3 + 0x2afa);
        }
      }
      goto LAB_10060263c;
    }
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      local_2a = "handlerData->pluginData->syncLockHolderFiberID == fiberID";
      goto LAB_10060271b;
    }
  }
  FUN_1001782e9(0,0);
  uVar6 = 0xffffffce;
LAB_10060263c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar6;
}

