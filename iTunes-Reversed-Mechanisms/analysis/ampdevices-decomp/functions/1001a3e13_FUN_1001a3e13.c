// name: FUN_1001a3e13
// address: 1001a3e13

void FUN_1001a3e13(byte *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined8 uVar9;
  byte bVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte bVar13;
  long lVar14;
  byte *pbVar15;
  byte *pbVar16;
  ulong uVar17;
  bool bVar18;
  undefined1 local_138 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (undefined8 *)0x0) {
    uVar9 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar9,0x10);
    if (cVar1 != '\0') {
      FUN_10069d2c2(uVar9);
    }
  }
  else {
    FUN_1001c62d9(param_2,0x178);
    if (param_1 != (byte *)0x0) {
      bVar10 = *param_1;
      if (bVar10 != 0) {
        uVar6 = 1;
        while (bVar10 != 0) {
          if (bVar10 == 0x3a) {
            if (param_1[uVar6] == 0x2f) {
              *(int *)(param_2 + 1) = (int)uVar6 + -1;
              if ((int)uVar6 == 1) {
                pbVar16 = (byte *)*param_2;
              }
              else {
                *param_2 = param_1;
                pbVar16 = param_1;
              }
              param_1 = param_1 + (uVar6 & 0xffffffff);
              if ((pbVar16 != (byte *)0x0) &&
                 (iVar3 = _strncmp((char *)pbVar16,"daa6",4), iVar3 == 0)) {
                *(undefined1 *)((long)param_2 + 0x6c) = 1;
              }
            }
            break;
          }
          pbVar16 = param_1 + uVar6;
          uVar6 = uVar6 + 1;
          bVar10 = *pbVar16;
        }
        do {
          pbVar16 = param_1;
          bVar10 = *pbVar16;
          param_1 = pbVar16 + 1;
        } while (bVar10 == 0x2f);
        iVar3 = 1;
        pbVar15 = param_1;
        bVar13 = bVar10;
LAB_1001a3f27:
        if ((bVar13 != 0) && (bVar13 != 0x2f)) {
          if (bVar13 != 0x40) goto code_r0x0001001a3f3a;
          lVar14 = 0;
          while ((bVar10 != 0x3a && (bVar10 != 0x40))) {
            pbVar11 = param_1 + lVar14;
            lVar14 = lVar14 + 1;
            iVar3 = iVar3 + 1;
            bVar10 = *pbVar11;
          }
          *(int *)(param_2 + 5) = (int)lVar14;
          if ((int)lVar14 != 0) {
            param_2[4] = pbVar16;
          }
          if ((pbVar16[lVar14] == 0x3a) && (*(int *)(param_2 + 7) = -iVar3, iVar3 != 0)) {
            param_2[6] = param_1 + lVar14;
          }
          bVar10 = *pbVar15;
          pbVar16 = pbVar15;
        }
        pbVar15 = pbVar16;
        if (bVar10 == 0x5b) {
          *(undefined1 *)((long)param_2 + 0x6c) = 1;
          pbVar11 = pbVar16 + 1;
          do {
            pbVar15 = pbVar11;
            bVar10 = *pbVar15;
            if (bVar10 == 0x5d) break;
            pbVar11 = pbVar15 + 1;
          } while (bVar10 != 0);
          if (bVar10 != 0) {
            pbVar15 = pbVar15 + 1;
          }
        }
        else {
          while ((0x3a < bVar10 || ((0x400800000000001U >> ((ulong)bVar10 & 0x3f) & 1) == 0))) {
            bVar10 = pbVar15[1];
            pbVar15 = pbVar15 + 1;
          }
        }
        iVar3 = (int)pbVar15 - (int)pbVar16;
        *(int *)(param_2 + 3) = iVar3;
        if ((((iVar3 != 0) && (param_2[2] = pbVar16, *(char *)((long)param_2 + 0x6c) != '\0')) &&
            (pcVar7 = _strstr((char *)pbVar16,"%25"), pcVar7 != (char *)0x0)) &&
           (iVar3 = _sscanf(pcVar7,"%%25%u",param_2 + 0xe), iVar3 == 1)) {
          pcVar7 = (char *)((long)param_2 + 0x74);
          *(undefined1 *)((long)param_2 + 0x74) = 0;
          uVar5 = 0x100;
          if (*(uint *)(param_2 + 3) < 0x100) {
            uVar5 = *(uint *)(param_2 + 3);
          }
          _strlcpy(pcVar7,(char *)param_2[2],(ulong)uVar5);
          param_2[2] = pcVar7;
          pcVar8 = _strstr(pcVar7,"%25");
          if (pcVar8 != (char *)0x0) {
            pcVar8[0] = ']';
            pcVar8[1] = '\0';
            pcVar7 = (char *)param_2[2];
          }
          uVar4 = FUN_1001dfc0d(pcVar7);
          *(undefined4 *)(param_2 + 3) = uVar4;
        }
        bVar10 = *pbVar15;
        if (bVar10 == 0x3a) {
          pbVar16 = pbVar15 + 1;
          for (uVar6 = 0; (pbVar16[uVar6] != 0 && (pbVar16[uVar6] != 0x2f)); uVar6 = uVar6 + 1) {
          }
          uVar17 = uVar6 & 0xffffffff;
          if (uVar17 < 0x100) {
            pbVar15 = pbVar16 + uVar6;
            FUN_1001c631b(pbVar16,local_138,uVar17);
            local_138[uVar17] = 0;
            uVar2 = FUN_1001e3338(local_138);
            *(undefined2 *)((long)param_2 + 0x1c) = uVar2;
            bVar10 = *pbVar15;
            goto LAB_1001a40c9;
          }
          uVar9 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar9,0x10);
          if (cVar1 != '\0') {
            FUN_10069d1d6(uVar9);
          }
          goto LAB_1001a412e;
        }
LAB_1001a40c9:
        if (bVar10 == 0) goto LAB_1001a4137;
        pbVar16 = pbVar15 + 1;
        uVar6 = 0xffffffffffffffff;
        do {
          lVar14 = uVar6 + 2;
          uVar6 = uVar6 + 1;
        } while (pbVar15[lVar14] != 0);
        *(int *)(param_2 + 9) = (int)uVar6;
        if ((int)uVar6 != 0) {
          param_2[8] = pbVar16;
          uVar6 = uVar6 & 0xffffffff;
          pbVar11 = pbVar15 + uVar6;
          pbVar15 = pbVar15 + uVar6;
          do {
            if (*pbVar15 == 0x3f) {
              pbVar12 = pbVar15 + -1;
              if (uVar6 == 1) {
                pbVar12 = pbVar16;
              }
              break;
            }
            uVar6 = uVar6 - 1;
            pbVar12 = pbVar16;
            pbVar15 = pbVar15 + -1;
          } while (uVar6 != 0);
          if (pbVar12 != pbVar16) {
            pbVar11 = pbVar12;
          }
          iVar3 = 0;
          do {
            bVar10 = *pbVar11;
            pbVar15 = pbVar11 + -1;
            iVar3 = iVar3 + -1;
            if (bVar10 == 0x2f) break;
            bVar18 = pbVar11 != pbVar16;
            pbVar11 = pbVar15;
          } while (bVar18);
          iVar3 = -iVar3 - (uint)(bVar10 == 0x2f);
          *(int *)(param_2 + 0xb) = iVar3;
          if (iVar3 != 0) {
            param_2[10] = pbVar15 + (ulong)(bVar10 == 0x2f) + 1;
            uVar5 = FUN_1001e2019();
            if (-1 < (int)uVar5) {
              param_2[0xc] = (ulong)uVar5 + param_2[10];
              *(uint *)(param_2 + 0xd) = *(int *)(param_2 + 0xb) - uVar5;
            }
          }
        }
      }
      goto LAB_1001a4137;
    }
    uVar9 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar9,0x10);
    if (cVar1 != '\0') {
      FUN_10069d24c(uVar9);
    }
  }
LAB_1001a412e:
  FUN_1001782e9(0,0);
LAB_1001a4137:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
code_r0x0001001a3f3a:
  bVar13 = *pbVar15;
  iVar3 = iVar3 + -1;
  pbVar15 = pbVar15 + 1;
  goto LAB_1001a3f27;
}

