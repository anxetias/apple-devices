// name: FUN_10054738a
// address: 10054738a

void FUN_10054738a(long param_1,int param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  undefined4 local_228;
  char *local_224;
  undefined2 local_21c;
  char *local_21a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_100547508:
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_228 = 0x8220202;
      local_224 = "Assertion failure";
      local_21c = 0x822;
      local_21a = "DulcimerHandlerDataIsValid(handlerData)";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_228,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_10054762f;
  }
  if (*(int *)(param_1 + 8) != 0x64756c63) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_228 = 0x8220202;
      local_224 = "Assertion failure (expected to be true)";
      local_21c = 0x822;
      local_21a = "handlerData->magic == kDulcimerHandlerDataMagic";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_228,0x16);
    }
    cVar1 = FUN_1001782e9(0,1);
    if (cVar1 == '\0') goto LAB_100547508;
  }
  FUN_1001b7a44(local_268);
  FUN_1001b7a44(local_258);
  FUN_1004f0e83(param_1,&local_228);
  FUN_1001b8dfc(local_238,&local_228);
  FUN_1001b80b2(local_268,local_238);
  FUN_1001b7a50(local_238);
  if (param_2 == 0) {
    uVar2 = FUN_100416f20(*(undefined4 *)(param_1 + 0x66b0),0x10cc0230);
    FUN_1001b7eb0(&local_228,uVar2);
    FUN_1001b8e86(local_248,*(undefined4 *)(param_1 + 0x414),1);
    FUN_1001bbf68(local_238,&local_228,local_268,local_248);
    FUN_1001b80b2(local_258,local_238);
    FUN_1001b7a50(local_238);
    puVar4 = local_248;
LAB_1005475b0:
    FUN_1001b7a50(puVar4);
    FUN_1001b7a50(&local_228);
    FUN_1004fda52(&local_228,*(undefined4 *)(param_1 + 0x28));
    FUN_1004508b1(local_258,&local_228);
    FUN_1001b7a50(&local_228);
  }
  else {
    lVar3 = FUN_10048bc57(param_2);
    if (lVar3 != 0) {
      FUN_100486d8f(&local_228,lVar3);
      uVar2 = FUN_100416f20(*(undefined4 *)(param_1 + 0x66b0),0x10cc022f);
      FUN_1001b7eb0(local_238,uVar2);
      FUN_1001b8e86(local_278,*(undefined4 *)(param_1 + 0x414),1);
      FUN_1001bc048(local_248,local_238,&local_228,local_268,local_278);
      FUN_1001b80b2(local_258,local_248);
      FUN_1001b7a50(local_248);
      FUN_1001b7a50(local_278);
      puVar4 = local_238;
      goto LAB_1005475b0;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_228 = 0x8220202;
      local_224 = "Assertion failure";
      local_21c = 0x822;
      local_21a = "playlist != nullptr";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_228,0x16);
    }
    FUN_1001782e9(0,0);
  }
  FUN_1001b7a50(local_258);
  FUN_1001b7a50(local_268);
LAB_10054762f:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

