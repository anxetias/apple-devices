// name: FUN_1002725f8
// address: 1002725f8

void FUN_1002725f8(long param_1,byte *param_2,uint *param_3,uint *param_4)

{
  byte bVar1;
  char *pcVar2;
  char cVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_2 == (byte *)0x0) || (pcVar2 = *(char **)(param_2 + 8), pcVar2 == (char *)0x0)) {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "h && h->val";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    iVar5 = 0;
    if (*pcVar2 == '\0') {
      lVar7 = 0;
    }
    else {
      pbVar11 = *(byte **)(param_1 + 0x5c);
      uVar9 = *(uint *)(param_1 + 0x6c);
      uVar8 = 0x80000000;
      do {
        bVar1 = *pbVar11;
        cVar3 = (char)uVar9;
        pbVar11 = pbVar11 + (uVar9 + 1 >> 3);
        *(byte **)(param_1 + 0x5c) = pbVar11;
        uVar9 = uVar9 + 1 & 7;
        *(uint *)(param_1 + 0x6c) = uVar9;
        if ((bVar1 >> ((byte)(7 - cVar3) & 0x1f) & 1) == 0) {
          do {
            lVar7 = (long)iVar5;
            iVar5 = iVar5 + (uint)(byte)pcVar2[lVar7 * 2];
          } while (0xf9 < (byte)pcVar2[lVar7 * 2]);
        }
        else {
          do {
            lVar7 = (long)iVar5;
            iVar5 = iVar5 + (uint)(byte)pcVar2[lVar7 * 2 + 1];
          } while (0xf9 < (byte)pcVar2[lVar7 * 2 + 1]);
        }
        if (uVar8 < 2) {
          uVar8 = 0;
          if ((int)(uint)*(ushort *)(param_2 + 0x10) <= iVar5) {
            uVar9 = (uint)*param_2 * 2 - 2;
            uVar8 = (uint)param_2[1] * 2 - 2;
            goto LAB_100272718;
          }
        }
        else {
          uVar8 = uVar8 >> 1;
        }
        lVar7 = (long)iVar5;
      } while (pcVar2[lVar7 * 2] != '\0');
    }
    uVar9 = (uint)((byte)pcVar2[lVar7 * 2 + 1] >> 4);
    uVar8 = (byte)pcVar2[lVar7 * 2 + 1] & 0xf;
LAB_100272718:
    if (uVar9 != 0) {
      if (uVar9 == 0xf) {
        pbVar11 = *(byte **)(param_1 + 0x5c);
        uVar10 = (((uint)pbVar11[2] | (uint)pbVar11[1] << 8 | (uint)*pbVar11 << 0x10) <<
                  ((byte)*(int *)(param_1 + 0x6c) & 0x1f) & 0xffffff) >>
                 (0x18 - (byte)*(undefined2 *)(param_2 + 2) & 0x1f);
        uVar6 = *(int *)(param_1 + 0x6c) + (uint)(byte)*(undefined2 *)(param_2 + 2);
        uVar9 = uVar6 >> 3;
        *(byte **)(param_1 + 0x5c) = pbVar11 + uVar9;
        uVar6 = uVar6 & 7;
        *(uint *)(param_1 + 0x6c) = uVar6;
        bVar1 = pbVar11[uVar9];
        *(byte **)(param_1 + 0x5c) = pbVar11 + uVar9 + (uVar6 + 1 >> 3);
        *(uint *)(param_1 + 0x6c) = uVar6 + 1 & 7;
        uVar9 = -uVar10 - 0xf;
        if ((bVar1 >> ((byte)uVar6 ^ 7) & 1) == 0) {
          uVar9 = uVar10 + 0xf;
        }
      }
      else {
        bVar1 = **(byte **)(param_1 + 0x5c);
        iVar5 = *(int *)(param_1 + 0x6c);
        uVar6 = iVar5 + 1;
        *(byte **)(param_1 + 0x5c) = *(byte **)(param_1 + 0x5c) + (uVar6 >> 3);
        *(uint *)(param_1 + 0x6c) = uVar6 & 7;
        if ((bVar1 >> ((byte)(7 - (char)iVar5) & 0x1f) & 1) != 0) {
          uVar9 = -uVar9;
        }
      }
    }
    if (uVar8 != 0) {
      if (uVar8 == 0xf) {
        pbVar11 = *(byte **)(param_1 + 0x5c);
        uVar10 = (((uint)pbVar11[2] | (uint)pbVar11[1] << 8 | (uint)*pbVar11 << 0x10) <<
                  ((byte)*(int *)(param_1 + 0x6c) & 0x1f) & 0xffffff) >>
                 (0x18 - (byte)*(undefined2 *)(param_2 + 2) & 0x1f);
        uVar6 = *(int *)(param_1 + 0x6c) + (uint)(byte)*(undefined2 *)(param_2 + 2);
        uVar8 = uVar6 >> 3;
        *(byte **)(param_1 + 0x5c) = pbVar11 + uVar8;
        uVar6 = uVar6 & 7;
        *(uint *)(param_1 + 0x6c) = uVar6;
        bVar1 = pbVar11[uVar8];
        *(byte **)(param_1 + 0x5c) = pbVar11 + uVar8 + (uVar6 + 1 >> 3);
        *(uint *)(param_1 + 0x6c) = uVar6 + 1 & 7;
        uVar8 = -uVar10 - 0xf;
        if ((bVar1 >> ((byte)uVar6 ^ 7) & 1) == 0) {
          uVar8 = uVar10 + 0xf;
        }
      }
      else {
        bVar1 = **(byte **)(param_1 + 0x5c);
        iVar5 = *(int *)(param_1 + 0x6c);
        uVar6 = iVar5 + 1;
        *(byte **)(param_1 + 0x5c) = *(byte **)(param_1 + 0x5c) + (uVar6 >> 3);
        *(uint *)(param_1 + 0x6c) = uVar6 & 7;
        if ((bVar1 >> ((byte)(7 - (char)iVar5) & 0x1f) & 1) != 0) {
          uVar8 = -uVar8;
        }
      }
    }
    *param_3 = uVar9;
    *param_4 = uVar8;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

