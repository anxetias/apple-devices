// name: FUN_100502425
// address: 100502425

undefined4 FUN_100502425(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 local_238 [16];
  undefined4 local_228;
  char *local_224;
  undefined2 local_21c;
  char *local_21a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_1004de449();
  if (lVar3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_228 = 0x8220202;
      local_224 = "Assertion failure";
      local_21c = 0x822;
      local_21a = "handlerData != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_228,0x16);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0x45f;
  }
  else {
    lVar3 = FUN_10048604a(*(undefined8 *)(lVar3 + 0x30));
    if (lVar3 == 0) {
      uVar2 = 0xffffffce;
    }
    else {
      FUN_100314020(lVar3);
      FUN_1001b7eb0(local_238,param_2);
      FUN_1001bb41a(local_238,&local_228);
      uVar2 = FUN_10048fb22(lVar3,&local_228,0);
      FUN_1001b7a50(local_238);
      FUN_1003142ca(lVar3);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

