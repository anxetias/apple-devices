// name: FUN_1004e1392
// address: 1004e1392

undefined4 FUN_1004e1392(long param_1,char param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long local_468;
  undefined1 local_460 [512];
  undefined1 local_260 [512];
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_58 [16];
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_1004e1465:
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "DulcimerHandlerDataIsValid(handlerData)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
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
      if (cVar1 == '\0') goto LAB_1004e1465;
    }
    if (*(long *)(param_1 + 0x7168) != 0) {
      uVar2 = 0;
      uVar4 = 0;
      if ((((*(char *)(param_1 + 0x37c) != '\0') && (*(ushort *)(param_1 + 100) < 0x800)) &&
          (*(char *)(param_1 + 0x14cd8) != '\0')) &&
         (uVar2 = uVar4, *(char *)(param_1 + 0x6abf) != '\0')) {
        cVar1 = FUN_1004e1666(param_1);
        if (cVar1 != '\0') {
          if (*(char *)(param_1 + 0x3a2) != '\0') {
            if (*(char *)(param_1 + 0x16841) == '\0') {
              *(undefined1 *)(param_1 + 0x16848) = 1;
              goto LAB_1004e148d;
            }
            if (*(char *)(param_1 + 0x16846) != '\0') {
              *(undefined1 *)(param_1 + 0x16848) = 0;
              goto LAB_1004e148d;
            }
          }
          FUN_1001c62d9(&local_468,0x410);
          FUN_10015095e(&local_48);
          local_468 = FUN_100150dd2(&local_48);
          FUN_10015153c(local_58,&local_48);
          FUN_1001bb41a(local_58,local_460);
          FUN_1001b7a50(local_58);
          FUN_100151672(local_58,&local_48);
          FUN_1001bb41a(local_58,local_260);
          FUN_1001b7a50(local_58);
          if (local_468 == 0) {
            local_60 = false;
          }
          else {
            cVar1 = FUN_10041672c();
            local_60 = cVar1 != '\0';
          }
          cVar1 = FUN_100151762(&local_48);
          local_5f = cVar1 == '\x01';
          if (param_2 == '\0') {
            uVar2 = FUN_1005c0074(*(undefined8 *)(param_1 + 0x7168),&local_468);
          }
          else {
            uVar2 = FUN_1005c0aa3(*(undefined8 *)(param_1 + 0x7168),&local_468,0,0);
          }
          FUN_100150de8(&local_48);
        }
      }
      goto LAB_1004e148d;
    }
  }
  uVar2 = 0xffffffce;
LAB_1004e148d:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

