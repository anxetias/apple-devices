// name: FUN_10011daf4
// address: 10011daf4

void FUN_10011daf4(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  char *pcVar3;
  char cVar4;
  void *pvVar5;
  undefined8 *puVar6;
  ulong uVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  int iVar18;
  byte bVar19;
  char cVar20;
  uint uVar21;
  ulong uVar22;
  
  pvVar5 = operator_new__(0x100);
  *(void **)(param_1 + 0xc128) = pvVar5;
  uVar22 = 0;
  do {
    if ((0x5500UL >> (uVar22 & 0x3f) & 1) == 0) {
      uVar21 = (&DAT_1007077a0)[uVar22];
      puVar2 = (&PTR_PTR_100835f20)[uVar22];
      lVar16 = *(long *)(param_1 + 0xc128);
      plVar1 = (long *)(lVar16 + uVar22 * 0x10);
      puVar6 = operator_new__((ulong)uVar21 * 0x38);
      *(undefined8 **)(lVar16 + uVar22 * 0x10) = puVar6;
      *(undefined1 *)((long)puVar6 + 0x2d) = 0;
      cVar4 = puVar2[10];
      *(char *)(puVar6 + 5) = cVar4;
      bVar19 = cVar4 - 1;
      pvVar5 = operator_new__((ulong)(uint)(1 << (bVar19 & 0x1f)) * 2);
      *puVar6 = pvVar5;
      ___bzero(pvVar5,2 << (bVar19 & 0x1f));
      uVar7 = 1;
      if (1 < uVar21) {
        uVar7 = (ulong)uVar21;
      }
      *(undefined4 *)(puVar6 + 6) = 1;
      uVar15 = 0;
      uVar12 = 0;
      cVar4 = '\0';
      do {
        lVar16 = uVar15 * 0x10;
        pcVar8 = *(char **)(puVar2 + lVar16);
        uVar21 = (uint)(byte)puVar2[lVar16 + 10];
        if (puVar2[lVar16 + 10] == 0) {
          uVar9 = 0x80000000;
          iVar18 = 0;
          uVar17 = 0;
          uVar10 = 0;
LAB_10011dc2f:
          if (uVar10 < uVar21) {
            lVar11 = 0;
            do {
              uVar14 = 0;
              if (pcVar8[lVar11] == '1') {
                uVar14 = uVar9;
              }
              iVar18 = iVar18 + uVar14;
              uVar9 = uVar9 >> 1;
              lVar11 = lVar11 + 1;
            } while (uVar21 - uVar10 != (int)lVar11);
          }
        }
        else {
          uVar9 = 0x80000000;
          uVar10 = 0;
          uVar17 = 0;
          iVar18 = 0;
          pcVar3 = pcVar8;
          do {
            pcVar8 = pcVar3 + 1;
            if (*pcVar3 == '1') {
              iVar18 = iVar18 + uVar9;
              uVar17 = (ulong)((int)uVar17 + 1);
            }
            else if (*pcVar3 == '0') {
              uVar9 = uVar9 >> 1;
              goto LAB_10011dc2f;
            }
            uVar9 = uVar9 >> 1;
            uVar10 = uVar10 + 1;
            pcVar3 = pcVar8;
          } while (uVar21 != uVar10);
        }
        uVar9 = (uint)uVar17;
        if (*(byte *)((long)puVar6 + 0x2d) < uVar9) {
          uVar21 = uVar21 - uVar9;
          lVar11 = *plVar1;
          uVar9 = 1 << ((char)uVar21 - 1U & 0x1f);
          if (uVar21 == 0) {
            uVar9 = 1;
          }
          lVar13 = uVar17 * 0x38;
          puVar6 = (undefined8 *)(lVar11 + lVar13);
          *(byte *)(lVar11 + 0x2d + lVar13) = (byte)uVar17;
          *(char *)(lVar11 + 0x28 + lVar13) = (char)uVar21;
          pvVar5 = operator_new__((ulong)uVar9 * 2);
          *(void **)(lVar11 + lVar13) = pvVar5;
          ___bzero(pvVar5,uVar9 * 2);
          cVar4 = cVar4 + '\x01';
          uVar12 = 0;
        }
        else {
          uVar21 = uVar21 - uVar9;
        }
        cVar20 = (char)uVar21;
        if (*(byte *)((long)puVar6 + uVar12 + 0x28) < uVar21) {
          uVar12 = (ulong)((int)uVar12 + 1);
          *(char *)((long)puVar6 + uVar12 + 0x28) = cVar20;
          pvVar5 = operator_new__((ulong)(uint)(1 << (cVar20 - 1U & 0x1f)) * 2);
          puVar6[uVar12] = pvVar5;
          ___bzero(pvVar5,2 << (cVar20 - 1U & 0x1f));
        }
        *(undefined2 *)
         (puVar6[uVar12] + (ulong)((uint)(iVar18 << ((byte)uVar17 & 0x1f)) >> (-cVar20 & 0x1fU)) * 2
         ) = *(undefined2 *)(puVar2 + lVar16 + 8);
        *(int *)(puVar6 + 6) = (int)uVar12 + 1;
        uVar15 = uVar15 + 1;
      } while (uVar15 != uVar7);
      *(char *)(plVar1 + 1) = cVar4 + '\x01';
    }
    uVar22 = uVar22 + 1;
    if (uVar22 == 0x10) {
      return;
    }
  } while( true );
}

