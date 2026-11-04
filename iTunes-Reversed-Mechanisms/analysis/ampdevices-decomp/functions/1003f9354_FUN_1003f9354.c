// name: FUN_1003f9354
// address: 1003f9354

undefined8 FUN_1003f9354(long param_1,long param_2,int param_3,int *param_4)

{
  ushort uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  int local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined2 local_6c;
  int local_6a;
  undefined4 local_58;
  undefined4 uStack_54;
  uint local_50;
  ushort local_4c;
  ushort uStack_4a;
  undefined6 uStack_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar7 = 0;
  if ((param_2 == 0) || (lVar5 = FUN_10017076e(param_2), lVar5 < 1)) goto LAB_1003f956a;
  lVar5 = FUN_10016aaf8(DAT_1008c4d90,param_2,0);
  if (lVar5 == 0) {
    uVar7 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar7,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      local_50 = 1;
      local_4c = 0x822;
      uStack_4a = 0x1404;
      uStack_48 = 0x1007a;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    uVar7 = 0xffffffce;
    goto LAB_1003f956a;
  }
  lVar6 = FUN_100170ef7(lVar5);
  if (lVar6 < 1) {
    uVar7 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar7,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      local_50 = 1;
      local_4c = 0x822;
      uStack_4a = 0x2b6e;
      uStack_48 = 0x1007a;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = local_6a;
  }
  else {
    FUN_1001c62d9(&local_58,0x18);
    local_58 = 0x646f686d;
    uStack_54 = 0x18;
    local_50 = (int)lVar6 + 0x18;
    local_4c = (ushort)param_3;
    uStack_4a = (ushort)((uint)param_3 >> 0x10);
    if (*(char *)(param_1 + 0x100127) != '\0') {
      local_58 = 0x6d686f64;
      uStack_54 = 0x18000000;
      local_50 = local_50 >> 0x18 | (local_50 & 0xff0000) >> 8 | (local_50 & 0xff00) << 8 |
                 local_50 * 0x1000000;
      uVar1 = (ushort)((uint)param_3 >> 8);
      local_4c = (ushort)(byte)((uint)param_3 >> 0x18) | uVar1 & 0xff00;
      uStack_4a = uVar1 & 0xff | (ushort)((uint)(param_3 << 0x18) >> 0x10);
    }
    local_78 = 0x18;
    uStack_74 = 0;
    iVar4 = FUN_100160894(*(undefined8 *)(param_1 + 0x100000),&local_78,&local_58);
    iVar2 = local_6a;
    if (iVar4 != -0x80) {
      if (iVar4 == 0) {
        uVar7 = FUN_100170f3b(lVar5);
        uStack_74 = 0;
        local_78 = (int)lVar6;
        iVar4 = FUN_100160894(*(undefined8 *)(param_1 + 0x100000),&local_78,uVar7);
        iVar2 = local_6a;
        if (iVar4 != -0x80) {
          if (iVar4 != 0) {
            uVar7 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar7,0x10);
            iVar2 = local_6a;
            goto joined_r0x0001003f950d;
          }
          if (param_4 != (int *)0x0) {
            *param_4 = *param_4 + 1;
          }
        }
      }
      else {
        uVar7 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar7,0x10);
        iVar2 = local_6a;
joined_r0x0001003f950d:
        local_6a = iVar4;
        if (cVar3 != '\0') {
          local_6c = 0x400;
          uStack_70 = 1;
          uStack_74 = 0x7a0a90;
          local_78 = 0x8220202;
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_78,0x12);
          iVar2 = local_6a;
        }
      }
    }
  }
  local_6a = iVar2;
  FUN_10017060f(lVar5);
  uVar7 = 0;
LAB_1003f956a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

