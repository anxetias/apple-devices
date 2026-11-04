// name: FUN_100453394
// address: 100453394

void FUN_100453394(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  uint *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  uint *puVar1;
  uint uVar2;
  char in_AL;
  char cVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  void *pvVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined1 local_148 [16];
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined1 local_90 [23];
  undefined1 local_79;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined2 local_6c;
  int local_6a;
  undefined8 local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  long local_38;
  
  if (in_AL != '\0') {
    local_118 = param_1;
    local_108 = param_2;
    local_f8 = param_3;
    local_e8 = param_4;
    local_d8 = param_5;
    local_c8 = param_6;
    local_b8 = param_7;
    local_a8 = param_8;
  }
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar2 = *param_9;
  uVar9 = (ulong)(int)uVar2;
  puVar1 = param_9 + 2;
  lVar6 = *(long *)(param_9 + 2);
  local_138 = param_11;
  local_130 = param_12;
  local_128 = param_13;
  local_120 = param_14;
  if ((ulong)(*(long *)(param_9 + 4) - lVar6 >> 3) <= uVar9) {
    FUN_100411650(puVar1,uVar9 + 1);
    lVar6 = *(long *)puVar1;
  }
  lVar6 = *(long *)(lVar6 + uVar9 * 8);
  if (lVar6 == 0) {
    pvVar7 = _malloc(uVar9);
    if (uVar2 != 0) {
      _memset((void *)((long)pvVar7 + ((long)(int)(uVar2 - 1) - (ulong)(uVar2 - 1))),9,(ulong)uVar2)
      ;
    }
    uVar8 = FUN_100173568(DAT_1008c4d90,pvVar7,uVar9,0x600,0,
                          *(undefined8 *)PTR__kCFAllocatorMalloc_10082e020);
    *(undefined8 *)(*(long *)puVar1 + uVar9 * 8) = uVar8;
    lVar6 = *(long *)(*(long *)puVar1 + uVar9 * 8);
  }
  FUN_1001b7eb0(&local_78,lVar6);
  uVar8 = FUN_1001b83ae(&local_78);
  param_9 = param_9 + 10;
  iVar4 = FUN_100160b46(param_9,uVar8);
  FUN_1001b7a50(&local_78);
  if (iVar4 == -0x80) goto LAB_10045364f;
  if (iVar4 != 0) {
    uVar8 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar8,0x10);
    if (cVar3 != '\0') {
      local_78 = 0x8220202;
      uStack_74 = 0x7a0a90;
      uStack_70 = 1;
      local_6c = 0x400;
      local_6a = iVar4;
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_78,0x12);
    }
    goto LAB_10045364f;
  }
  local_48 = local_148;
  local_50 = &stack0x00000008;
  local_58 = 0x3000000010;
  FUN_1001bbb94(local_90,param_10);
  uVar8 = FUN_1001b83ae(local_90);
  iVar5 = FUN_100160b46(param_9,uVar8);
  iVar4 = local_6a;
  if (iVar5 != -0x80) {
    if (iVar5 == 0) {
      local_79 = 10;
      local_78 = 1;
      uStack_74 = 0;
      iVar5 = FUN_100160894(param_9);
      iVar4 = local_6a;
      if ((iVar5 == -0x80) || (iVar5 == 0)) goto LAB_100453643;
      uVar8 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar8,0x10);
      iVar4 = local_6a;
    }
    else {
      uVar8 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar8,0x10);
      iVar4 = local_6a;
    }
    local_6a = iVar5;
    if (cVar3 != '\0') {
      local_6c = 0x400;
      uStack_70 = 1;
      uStack_74 = 0x7a0a90;
      local_78 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_78,0x12);
      iVar4 = local_6a;
    }
  }
LAB_100453643:
  local_6a = iVar4;
  FUN_1001b7a50(local_90);
LAB_10045364f:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

