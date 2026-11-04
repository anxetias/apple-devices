// name: FUN_1003e8d33
// address: 1003e8d33

int FUN_1003e8d33(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  int local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined2 local_9c;
  int local_9a;
  undefined4 local_88;
  undefined4 uStack_84;
  uint local_80;
  undefined2 local_7c;
  undefined2 uStack_7a;
  undefined6 uStack_78;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_1001b8428(*(long *)(param_1 + 0x100008) + 0x2740);
  if (cVar1 != '\0') {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_88 = 0x8220202;
      uStack_84 = 0x7a0a90;
      local_80 = 1;
      local_7c = 0x822;
      uStack_7a = 0xb67b;
      uStack_78 = 0x1007c;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_88,0x16);
    }
    FUN_1001782e9(0,0);
  }
  lVar4 = FUN_1001b83f0(*(long *)(param_1 + 0x100008) + 0x2740);
  FUN_1001c62d9(&local_88,0x60);
  local_88 = 0x6473686d;
  uStack_84 = 0x60;
  local_7c = 9;
  uStack_7a = 0;
  local_80 = (int)lVar4 + 0x60;
  if (*(char *)(param_1 + 0x100127) != '\0') {
    local_88 = 0x6d687364;
    uStack_84 = 0x60000000;
    local_80 = local_80 >> 0x18 | (local_80 & 0xff0000) >> 8 | (local_80 & 0xff00) << 8 |
               local_80 * 0x1000000;
    local_7c = 0;
    uStack_7a = 0x900;
  }
  local_a8 = 0x60;
  uStack_a4 = 0;
  iVar2 = FUN_100160894(*(undefined8 *)(param_1 + 0x100000),&local_a8,&local_88);
  if (iVar2 == -0x80) goto LAB_1003e8f25;
  if (iVar2 == 0) {
    if (lVar4 == 0) {
      iVar2 = 0;
      goto LAB_1003e8f25;
    }
    uVar3 = FUN_1001b83ae(*(long *)(param_1 + 0x100008) + 0x2740);
    uStack_a4 = (undefined4)((ulong)lVar4 >> 0x20);
    local_a8 = (int)lVar4;
    iVar2 = FUN_100160894(*(undefined8 *)(param_1 + 0x100000),&local_a8,uVar3);
    if ((iVar2 == -0x80) || (iVar2 == 0)) goto LAB_1003e8f25;
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
  }
  if (cVar1 != '\0') {
    local_9c = 0x400;
    uStack_a0 = 1;
    uStack_a4 = 0x7a0a90;
    local_a8 = 0x8220202;
    local_9a = iVar2;
    __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_a8,0x12);
  }
LAB_1003e8f25:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

