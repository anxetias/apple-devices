// name: FUN_1005ce214
// address: 1005ce214

void FUN_1005ce214(undefined8 param_1,long param_2,undefined1 *param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *local_270;
  undefined8 local_268;
  undefined4 local_25c;
  undefined1 local_258 [512];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_268 = param_6;
  local_25c = param_4;
  if (*(int *)(param_2 + 8) != 0x64756c63) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure (expected to be true)";
      local_4c = 0x822;
      local_4a = "handlerData->magic == kDulcimerHandlerDataMagic";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    cVar1 = FUN_1001782e9(0,1);
    if (cVar1 == '\0') {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "DulcimerHandlerDataIsValid(handlerData)";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      goto LAB_1005ce32b;
    }
  }
  if (param_3 == (undefined1 *)0x0) {
    param_3 = local_258;
    FUN_1004f0e83(param_2,param_3);
  }
  FUN_1004c6512(&local_270);
  FUN_1004c5c38(*local_270,(int)(short)local_25c,param_5,param_3,local_268,0,0,0);
  FUN_1005c8b89(&local_58,param_5);
  FUN_1005cd4e3(param_1,local_270,&local_58);
  FUN_1001b7a50(&local_58);
  FUN_1004c6565(local_270);
LAB_1005ce32b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

