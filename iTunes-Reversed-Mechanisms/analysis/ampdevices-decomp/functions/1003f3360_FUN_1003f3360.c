// name: FUN_1003f3360
// address: 1003f3360

int FUN_1003f3360(long param_1,undefined8 param_2,uint param_3,uint param_4,uint param_5,
                 uint param_6,long *param_7)

{
  undefined8 *puVar1;
  ushort *puVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  uint local_74;
  long local_70;
  uint local_64;
  ulong local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  uVar7 = (ulong)param_3;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  puVar3 = (undefined8 *)*param_7;
  puVar1 = puVar3 + 5;
  local_70 = param_1;
  local_64 = param_4;
  if (param_6 == 1 && param_5 == 2) {
    iVar5 = FUN_1001e7237(param_2,uVar7,puVar1,param_3 * 6,&local_74);
    if (iVar5 == -0x80) goto LAB_1003f3662;
    if (iVar5 != 0) {
      uVar8 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar8,0x10);
      if (cVar4 == '\0') goto LAB_1003f3662;
      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
LAB_1003f356d:
      local_4c = 0x400;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      goto LAB_1003f3662;
    }
    uVar7 = (ulong)local_74;
    local_60 = uVar7 * 2;
LAB_1003f34d3:
    lVar9 = local_70;
    if (local_64 == 2) {
      FUN_100184e09(puVar1,uVar7 & 0xffffffff);
    }
    uVar6 = FUN_1001e6f36(puVar1,uVar7 & 0xffffffff);
    if ((*(char *)(lVar9 + 0x100127) != '\0') && (uVar6 != 0)) {
      uVar7 = 0;
      do {
        puVar2 = (ushort *)((long)puVar1 + uVar7 * 2);
        *puVar2 = *puVar2 << 8 | *puVar2 >> 8;
        uVar7 = uVar7 + 1;
      } while (uVar6 != uVar7);
    }
    local_60 = (ulong)uVar6 * 2;
  }
  else if (param_6 == 2 && param_5 == 1) {
    iVar5 = FUN_1001e73f2(param_2,param_3 >> 1,puVar1,param_3 * 3,&local_60);
    if (iVar5 == -0x80) goto LAB_1003f3662;
    if (iVar5 != 0) {
      uVar8 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar8,0x10);
      if (cVar4 == '\0') goto LAB_1003f3662;
      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
      goto LAB_1003f356d;
    }
LAB_1003f3592:
    lVar9 = local_70;
    if (local_64 == 2) {
      FUN_100184f58(puVar1,local_60 & 0xffffffff);
    }
    local_60 = FUN_1001e6676(puVar1,local_60,local_60 * 3);
  }
  else {
    if (param_5 != param_6) {
      uVar8 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar8,0x10);
      if (cVar4 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "srcTextEncoding == destTextEncoding";
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    local_60 = uVar7;
    FUN_1001c631b(param_2,puVar1,uVar7);
    if (param_6 == 1) {
      uVar7 = local_60 >> 1;
      goto LAB_1003f34d3;
    }
    if (param_6 == 0) {
      local_60 = uVar7;
      FUN_1001c631b(param_2,puVar1,uVar7);
      lVar9 = local_70;
    }
    else {
      lVar9 = local_70;
      if (param_6 == 2) goto LAB_1003f3592;
    }
  }
  lVar10 = (long)puVar1 + local_60;
  FUN_1001c62d9(puVar3,0x18);
  *puVar3 = 0x18646f686d;
  uVar6 = (uint)local_60 + 0x28;
  *(uint *)(puVar3 + 1) = uVar6;
  *(uint *)((long)puVar3 + 0xc) = local_64;
  if (*(char *)(lVar9 + 0x100127) != '\0') {
    *puVar3 = 0x180000006d686f64;
    *(uint *)(puVar3 + 1) =
         uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 * 0x1000000;
    *(uint *)((long)puVar3 + 0xc) =
         local_64 >> 0x18 | (local_64 & 0xff0000) >> 8 | (local_64 & 0xff00) << 8 | local_64 << 0x18
    ;
  }
  FUN_1001c62d9(puVar3 + 3,0x10);
  *(uint *)(puVar3 + 3) = param_6;
  *(uint *)((long)puVar3 + 0x1c) = (uint)local_60;
  *(undefined1 *)(puVar3 + 4) = 1;
  if (*(char *)(lVar9 + 0x100127) != '\0') {
    *(uint *)(puVar3 + 3) =
         param_6 >> 0x18 | (param_6 & 0xff0000) >> 8 | (param_6 & 0xff00) << 8 | param_6 << 0x18;
    *(uint *)((long)puVar3 + 0x1c) =
         (uint)local_60 >> 0x18 | ((uint)local_60 & 0xff0000) >> 8 | ((uint)local_60 & 0xff00) << 8
         | (uint)local_60 << 0x18;
  }
  *param_7 = lVar10;
  iVar5 = 0;
LAB_1003f3662:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

