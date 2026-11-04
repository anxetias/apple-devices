// name: FUN_10043822b
// address: 10043822b

undefined8 FUN_10043822b(long param_1,long param_2,undefined1 *param_3)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
  }
  if (param_1 == 0) {
LAB_1004382d9:
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_3a = "DulcimerHandlerDataIsValid(handlerData)";
LAB_100438361:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else {
    if (*(int *)(param_1 + 8) != 0x64756c63) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure (expected to be true)";
        local_3c = 0x822;
        local_3a = "handlerData->magic == kDulcimerHandlerDataMagic";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_1004382d9;
    }
    if (param_2 != 0) {
      if ((*(char *)(param_1 + 0x14cda) == '\0') || (*(char *)(param_1 + 0x6abf) == '\0')) {
        uVar2 = 0;
      }
      else {
        if (*(char *)(param_1 + 0x14d6c) == '\0') {
          uVar2 = 0;
        }
        else {
          uVar2 = FUN_1002c10ef(*(undefined8 *)(param_1 + 0x152f8),param_2);
          uVar2 = (uVar2 & 0xff) << 10;
        }
        if (*(char *)(param_1 + 0x14d68) != '\0') {
          cVar1 = FUN_1002c10ef(*(undefined8 *)(param_1 + 0x15338),param_2);
          if (cVar1 != '\0') {
            uVar2 = uVar2 + 0x200000;
          }
        }
        if (*(char *)(param_1 + 0x14d78) != '\0') {
          cVar1 = FUN_1002c10ef(*(undefined8 *)(param_1 + 0x15358),param_2);
          if (cVar1 != '\0') {
            uVar2 = uVar2 + 0x2000000;
          }
        }
        if (*(char *)(param_1 + 0x14dec) != '\0') {
          cVar1 = FUN_1002c10ef(*(undefined8 *)(param_1 + 0x15368),param_2);
          if (cVar1 != '\0') {
            uVar2 = uVar2 + 0x10000000;
          }
        }
      }
      if ((*(char *)(param_1 + 0x6ac2) == '\0') || (*(char *)(param_1 + 0x14d2a) == '\0')) {
LAB_10043843c:
        if (uVar2 == 0) {
          uVar3 = 0;
          goto LAB_10043845b;
        }
      }
      else {
        cVar1 = FUN_1002c10ef(*(undefined8 *)(param_1 + 0x15328),param_2);
        if (cVar1 == '\0') goto LAB_10043843c;
        uVar2 = uVar2 | 0x10000;
      }
      if (param_3 != (undefined1 *)0x0) {
        *param_3 = 1;
      }
      uVar3 = FUN_1004ef324(param_1,uVar2,0);
      goto LAB_10043845b;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_3a = "playlistPersistentID != 0";
      goto LAB_100438361;
    }
  }
  FUN_1001782e9(0,0);
  uVar3 = 0xffffffce;
LAB_10043845b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

