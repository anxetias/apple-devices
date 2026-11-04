// name: FUN_1001b87d0
// address: 1001b87d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001b87d0(long *param_1)

{
  ushort uVar1;
  uint *puVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  long lVar6;
  ushort *puVar7;
  undefined8 uVar8;
  long lVar9;
  size_t *psVar10;
  ulong uVar11;
  ulong uVar12;
  ushort *puVar13;
  size_t sVar14;
  uint *puVar15;
  uint *local_78;
  uint *local_70;
  uint *local_60;
  uint local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar6 = FUN_1001b8378();
  if (lVar6 == 0) goto LAB_1001b8bf8;
  local_60 = (uint *)(lVar6 * 4);
  local_58 = local_58 & 0xffffff00;
  FUN_10016f534(&local_78);
  lVar9 = *param_1;
  if (lVar9 == 0) {
    puVar7 = &DAT_100711b00;
    if (param_1[1] != 0) {
      FUN_1001b8454(param_1);
      lVar9 = *param_1;
      if (lVar9 != 0) goto LAB_1001b882b;
    }
  }
  else {
LAB_1001b882b:
    puVar7 = (ushort *)(lVar9 + 0xc);
  }
  local_60 = (uint *)((long)local_60 + (long)local_78);
  sVar14 = 0;
  puVar15 = local_78;
  do {
    puVar13 = puVar7 + 1;
    uVar1 = *puVar7;
    uVar5 = (uint)uVar1;
    if ((uVar1 & 0xfc00) == 0xd800) {
      if (lVar6 == 1) {
        uVar5 = 0xfffd;
        lVar6 = 1;
      }
      else {
        puVar13 = puVar7 + 2;
        uVar5 = (uint)uVar1 * 0x400 + (uint)puVar7[1] + 0xfca02400;
        lVar6 = lVar6 + -1;
      }
    }
    if (puVar15 == (uint *)0x0) {
      uVar8 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar8,0x10);
      if (cVar4 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "inBuffer != nullptr";
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      puVar15 = (uint *)0x0;
    }
    else if (local_60 == puVar15) {
      uVar8 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar8,0x10);
      if (cVar4 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "inBufferLen > 0";
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      bVar3 = (byte)uVar5;
      if (uVar5 < 0x80) {
        *(byte *)puVar15 = bVar3;
LAB_1001b8a0b:
        lVar9 = 1;
      }
      else {
        uVar12 = (long)local_60 - (long)puVar15;
        if (uVar5 < 0x800) {
          if (uVar12 == 1) {
            uVar8 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar8,0x10);
            if (cVar4 != '\0') {
              local_4a = "inBufferLen > 1";
LAB_1001b8b36:
              local_4c = 0x822;
              local_54 = "Assertion failure";
              local_58 = 0x8220202;
              __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
LAB_1001b89fe:
            FUN_1001782e9(0,0);
            *(undefined1 *)puVar15 = 0x3f;
            goto LAB_1001b8a0b;
          }
          *(byte *)puVar15 = (byte)(uVar5 >> 6) | 0xc0;
          *(byte *)((long)puVar15 + 1) = bVar3 & 0x3f | 0x80;
          lVar9 = 2;
        }
        else {
          uVar11 = 0xfffd;
          if ((uVar5 & 0xfffff800) != 0xd800) {
            if (0xfdcf < uVar5) {
              if ((uVar5 < 0xfdf0) || (0x10ffff < uVar5 || (~uVar5 & 0xfffe) == 0))
              goto LAB_1001b8999;
              if (0xffff < uVar5) {
                if (uVar12 < 4) {
                  uVar8 = FUN_1001cc310();
                  cVar4 = _os_log_type_enabled(uVar8,0x10);
                  if (cVar4 != '\0') {
                    local_4a = "inBufferLen > 3";
                    goto LAB_1001b8b36;
                  }
                  goto LAB_1001b89fe;
                }
                *puVar15 = uVar5 >> 0x12 & 0xffff00ff | (uint)((byte)(uVar5 >> 0xc) & 0x3f) << 8 |
                           (uint)((byte)(uVar5 >> 6) & 0x3f) << 0x10 | (uint)(bVar3 & 0x3f) << 0x18
                           | (uint)_DAT_100711af0;
                lVar9 = 4;
                goto LAB_1001b8a10;
              }
            }
            uVar11 = (ulong)uVar5;
          }
LAB_1001b8999:
          if (uVar12 < 3) {
            uVar8 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar8,0x10);
            if (cVar4 != '\0') {
              local_4a = "inBufferLen > 2";
              goto LAB_1001b8b36;
            }
            goto LAB_1001b89fe;
          }
          *(byte *)puVar15 = (byte)(uVar11 >> 0xc) | 0xe0;
          *(byte *)((long)puVar15 + 1) = (byte)(uVar11 >> 6) & 0x3f | 0x80;
          *(byte *)((long)puVar15 + 2) = (byte)uVar11 & 0x3f | 0x80;
          lVar9 = 3;
        }
      }
LAB_1001b8a10:
      puVar15 = (uint *)((long)puVar15 + lVar9);
      sVar14 = sVar14 + lVar9;
    }
    puVar2 = local_78;
    lVar6 = lVar6 + -1;
    puVar7 = puVar13;
  } while (lVar6 != 0);
  if (sVar14 != 0) {
    psVar10 = operator_new(sVar14 + 0x10,(nothrow_t *)PTR_nothrow_10082c970);
    *psVar10 = sVar14;
    *(undefined4 *)(psVar10 + 1) = 1;
    *(undefined1 *)((long)psVar10 + sVar14 + 0xc) = 0;
    _memcpy((void *)((long)psVar10 + 0xc),puVar2,sVar14);
    param_1[1] = (long)psVar10;
  }
  if (local_78 != (uint *)0x0) {
    local_70 = local_78;
    operator_delete(local_78);
  }
LAB_1001b8bf8:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

