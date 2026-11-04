// name: FUN_1002dbeca
// address: 1002dbeca

int FUN_1002dbeca(long param_1,long param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  RSA *r;
  int local_248;
  char *local_244;
  undefined2 local_23c;
  char *local_23a;
  undefined1 local_13a [258];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(char *)(param_1 + 0x335) == '\0') {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_248 = 0x8220202;
      local_244 = "Assertion failure";
      local_23c = 0x822;
      local_23a = "handlerData->deviceInfo.supportsEmbeddedKeybag";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_248,0x16);
    }
    FUN_1001782e9(0,0);
  }
  r = (RSA *)FUN_1002dc164(param_1);
  if (r == (RSA *)0x0) {
    iVar2 = 0x2382;
  }
  else {
    FUN_1001c62d9(&local_248,0x210);
    local_244 = (char *)CONCAT44(local_244._4_4_,*(undefined4 *)(param_1 + 0x3e0));
    local_248 = _RSA_size(r);
    local_244 = (char *)((ulong)local_244 & 0xffffffff);
    FUN_1002d8b31(r->n,&local_23c);
    FUN_1002d8b31(r->e,local_13a);
    _RSA_free(r);
    *(undefined1 *)(param_1 + 0x15808) = 0;
    if (param_2 == 0) {
      FUN_1001c62d9(param_1 + 0x15818,0x11c);
    }
    if (*(int *)(param_1 + 0x1581c) == 0) {
      *(undefined1 *)(param_1 + 0x6ae6) = 1;
    }
    iVar2 = FUN_1000c8cf0(param_2,param_3,4,&local_248,param_1 + 0x15818,
                          (undefined8 *)(param_1 + 0x15810));
    FUN_1001c62d9(&local_248,0x210);
    if (iVar2 == 0) {
      iVar3 = 0;
      goto LAB_1002dc03b;
    }
    *(undefined8 *)(param_1 + 0x15810) = 0;
    iVar3 = -0x80;
    if (iVar2 == -0x80) goto LAB_1002dc03b;
  }
  uVar4 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar4,0x10);
  iVar3 = iVar2;
  if (cVar1 != '\0') {
    local_248 = 0x8220202;
    local_244 = "Assertion failure";
    local_23c = 0x400;
    local_23a = (char *)CONCAT44(local_23a._4_4_,iVar2);
    __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_248,0x12);
  }
LAB_1002dc03b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

