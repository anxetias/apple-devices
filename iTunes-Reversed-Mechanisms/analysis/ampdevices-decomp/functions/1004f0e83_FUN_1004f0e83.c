// name: FUN_1004f0e83
// address: 1004f0e83

undefined8 FUN_1004f0e83(long param_1,undefined2 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (undefined2 *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_3a = "deviceName != nullptr";
LAB_1004f1014:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else {
    *param_2 = 0;
    if (param_1 != 0) {
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
        if (cVar1 == '\0') goto LAB_1004f0f64;
      }
      if (*(long *)(param_1 + 0x30) != 0) {
        lVar3 = FUN_10048604a();
        if (lVar3 != 0) {
          uVar2 = FUN_10048604a(*(undefined8 *)(param_1 + 0x30));
          FUN_1004870ae(uVar2,param_2);
          uVar2 = 0;
          goto LAB_1004f0f8c;
        }
      }
      FUN_1001e1c39(param_1 + 0x6f64,param_2);
      uVar2 = 0;
      cVar1 = FUN_1001e4e7c("IPOD",param_2,0);
      if ((cVar1 != '\0') && (*(char *)(param_1 + 0x6458) != '\0')) {
        FUN_1001e04f5("iPod",param_2);
      }
      goto LAB_1004f0f8c;
    }
LAB_1004f0f64:
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_3a = "DulcimerHandlerDataIsValid(handlerData)";
      goto LAB_1004f1014;
    }
  }
  FUN_1001782e9(0,0);
  uVar2 = 0xffffffce;
LAB_1004f0f8c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

