// name: FUN_1006019f0
// address: 1006019f0

long FUN_1006019f0(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_100601aeb:
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "DulcimerHandlerDataIsValid(handlerData)";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    lVar4 = 0x3200000;
    goto LAB_100601b48;
  }
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
    if (cVar1 == '\0') goto LAB_100601aeb;
  }
  uVar3 = (ulong)*(uint *)(param_1 + 0x61d8) << 0x14;
  if (uVar3 < *(ulong *)(param_1 + 0x153b0)) {
    uVar3 = *(ulong *)(param_1 + 0x153b0);
  }
  uVar6 = 0x3200000;
  if (0x3200000 < uVar3) {
    uVar6 = uVar3;
  }
  if ((*(char *)(param_1 + 0x37d) == '\0') && (*(char *)(param_1 + 0x37c) == '\0')) {
    uVar7 = *(ulong *)(param_1 + 0x153a0);
  }
  else {
    uVar7 = *(ulong *)(param_1 + 0x153a0);
    uVar6 = uVar6 + (uint)(uVar7 + 0x3fffffff >> 0x21) * 0x3200000;
  }
  uVar7 = uVar7 >> 0x16;
  if (*(char *)(param_1 + 0x35f) == '\0') {
    uVar5 = (uVar7 & 0xffffffff) * 0x800 + 0xfffff & 0xfffffffffff00000;
    if (uVar3 != 0) goto LAB_100601b2e;
    if (uVar5 < uVar6) {
      uVar5 = uVar6;
    }
  }
  else {
    uVar3 = (uVar7 & 0xffffffff) * 0xa00 + 0xfffff & 0xfffffffffff00000;
    cVar1 = FUN_100266bdc(*(undefined8 *)(param_1 + 0x66d8));
    uVar5 = 0;
    if (cVar1 != '\0') {
      uVar5 = uVar3;
    }
    uVar5 = uVar5 + uVar3;
LAB_100601b2e:
    uVar5 = uVar5 + uVar6;
  }
  uVar3 = 0;
  if (*(char *)(param_1 + 0x388) != '\0') {
    uVar3 = (ulong)(uint)((int)uVar7 * 0x9020);
  }
  lVar4 = uVar3 + uVar5;
LAB_100601b48:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar4;
}

