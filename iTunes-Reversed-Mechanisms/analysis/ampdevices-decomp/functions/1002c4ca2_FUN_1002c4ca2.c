// name: FUN_1002c4ca2
// address: 1002c4ca2

int FUN_1002c4ca2(long param_1,uint *param_2,long param_3,undefined8 *param_4,ulong *param_5,
                 uint *param_6)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint local_88;
  uint local_84;
  uint *local_80;
  ulong local_78;
  ulong *local_70;
  undefined8 *local_68;
  long local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_4 = 0;
  *param_5 = 0;
  *param_6 = 0;
  if (*(char *)(param_1 + 0x30) == '\0') {
    puVar8 = param_2 + 1;
    uVar3 = *puVar8;
    puVar7 = param_2;
  }
  else {
    uVar3 = *param_2;
    uVar6 = param_2[1];
    local_88 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
    uVar3 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
    puVar8 = &local_84;
    local_84 = uVar3;
    puVar7 = &local_88;
  }
  if ((ulong)uVar3 + 0x10 != param_3) {
    local_70 = param_5;
    local_68 = param_4;
    local_60 = param_1;
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "objectSize == (dbString->dataSize + sizeof(*dbString))";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    param_4 = local_68;
    param_1 = local_60;
    param_5 = local_70;
  }
  param_2 = param_2 + 4;
  uVar3 = *puVar7;
  if ((uVar3 == 0) || (uVar3 == 2)) {
    uVar6 = *puVar8;
  }
  else {
    iVar4 = -0xce;
    if (uVar3 != 1) goto LAB_1002c4e5e;
    uVar6 = *puVar8;
    uVar3 = 1;
    if (*(char *)(param_1 + 0x30) == '\x01') {
      local_78 = (ulong)(uVar6 >> 1);
      local_80 = param_6;
      local_70 = param_5;
      local_68 = param_4;
      local_60 = param_1;
      iVar4 = FUN_1002c4bbc();
      lVar1 = local_60;
      if (iVar4 != 0) {
        uVar5 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar5,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
        goto LAB_1002c4e5e;
      }
      FUN_1001c631b(param_2,*(undefined8 *)(local_60 + 0x60),*puVar8);
      FUN_1001e5408(*(undefined8 *)(lVar1 + 0x60),local_78,*(ulong *)(lVar1 + 0x68) >> 1);
      param_2 = *(uint **)(lVar1 + 0x60);
      uVar3 = *puVar7;
      param_4 = local_68;
      param_5 = local_70;
      param_6 = local_80;
    }
    uVar6 = uVar6 & 0xfffffffe;
  }
  *param_4 = param_2;
  *param_5 = (ulong)uVar6;
  *param_6 = uVar3;
  iVar4 = 0;
LAB_1002c4e5e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

