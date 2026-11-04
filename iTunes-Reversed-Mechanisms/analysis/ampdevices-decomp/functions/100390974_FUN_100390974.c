// name: FUN_100390974
// address: 100390974

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100390974(long param_1,undefined8 param_2,uint param_3,undefined4 param_4,char param_5,
                 char param_6,long *param_7)

{
  ushort *puVar1;
  ulong *puVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  byte bVar7;
  ulong uVar8;
  long lVar9;
  short sVar10;
  undefined1 auVar11 [16];
  uint local_74;
  long local_70;
  undefined4 local_64;
  ulong local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  puVar2 = (ulong *)*param_7;
  lVar9 = (long)puVar2 + 0x24;
  local_70 = param_1;
  local_64 = param_4;
  if (param_6 == '\x02' && param_5 == '\x01') {
    iVar4 = FUN_1001e7237(param_2,(ulong)param_3,lVar9,param_3 * 6,&local_74);
    if (iVar4 == -0x80) goto LAB_100390c4a;
    if (iVar4 != 0) {
      uVar6 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar6,0x10);
      if (cVar3 == '\0') goto LAB_100390c4a;
      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
LAB_100390ced:
      local_4c = 0x400;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      goto LAB_100390c4a;
    }
    local_60 = (ulong)local_74 * 2;
LAB_100390ad2:
    sVar10 = (short)local_64;
    if (sVar10 == 3) {
      FUN_100184e09(lVar9,local_60 >> 1 & 0xffffffff);
    }
    if ((*(char *)(local_70 + 0x15) != '\0') && ((local_60 & 0x1fffffffe) != 0)) {
      uVar8 = 0;
      do {
        puVar1 = (ushort *)(lVar9 + uVar8 * 2);
        *puVar1 = *puVar1 << 8 | *puVar1 >> 8;
        uVar8 = uVar8 + 1;
      } while ((local_60 >> 1 & 0xffffffff) != uVar8);
    }
  }
  else {
    if (param_6 == '\x01' && param_5 == '\x02') {
      iVar4 = FUN_1001e73f2(param_2,param_3 >> 1,lVar9,param_3 * 3,&local_60);
      if (iVar4 == -0x80) goto LAB_100390c4a;
      if (iVar4 != 0) {
        uVar6 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar6,0x10);
        if (cVar3 == '\0') goto LAB_100390c4a;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
        goto LAB_100390ced;
      }
    }
    else {
      if (param_5 != param_6) {
        uVar6 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar6,0x10);
        if (cVar3 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "srcTextEncoding == destTextEncoding";
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      local_60 = (ulong)param_3;
      FUN_1001c631b(param_2,lVar9);
      if (param_6 == '\x02') goto LAB_100390ad2;
    }
    sVar10 = (short)local_64;
    if (sVar10 == 3 && param_6 == '\x01') {
      FUN_100184f58(lVar9,local_60 & 0xffffffff);
    }
  }
  uVar8 = local_60;
  FUN_1001c62d9(puVar2,0x18);
  *puVar2 = 0x18646f686d;
  *(short *)((long)puVar2 + 0xc) = sVar10;
  bVar7 = -(char)local_60 & 3;
  *(byte *)((long)puVar2 + 0xf) = bVar7;
  uVar5 = (int)local_60 + (uint)bVar7 + 0x24;
  *(uint *)(puVar2 + 1) = uVar5;
  if ((uVar5 & 3) != 0) {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "(dbObject->dataSize & 0x3) == 0";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (*(char *)(local_70 + 0x15) != '\0') {
    auVar11._8_8_ = 0;
    auVar11._0_8_ = *puVar2;
    auVar11 = pshufb(auVar11,_DAT_10070e4b0);
    *puVar2 = auVar11._0_8_;
    uVar5 = (uint)puVar2[1];
    *(uint *)(puVar2 + 1) =
         uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    puVar1 = (ushort *)((long)puVar2 + 0xc);
    *puVar1 = *puVar1 << 8 | *puVar1 >> 8;
  }
  FUN_1001c62d9(puVar2 + 3,0xc);
  *(char *)((long)puVar2 + 0x1c) = param_6;
  *(uint *)(puVar2 + 3) = (uint)local_60;
  if (*(char *)(local_70 + 0x15) != '\0') {
    *(uint *)(puVar2 + 3) =
         (uint)local_60 >> 0x18 | ((uint)local_60 & 0xff0000) >> 8 | ((uint)local_60 & 0xff00) << 8
         | (uint)local_60 << 0x18;
  }
  lVar9 = lVar9 + uVar8;
  if (*(char *)((long)puVar2 + 0xf) != '\0') {
    FUN_1001c62d9(lVar9);
    lVar9 = lVar9 + (ulong)*(byte *)((long)puVar2 + 0xf);
  }
  *param_7 = lVar9;
  iVar4 = 0;
LAB_100390c4a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

