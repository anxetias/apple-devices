// name: FUN_1002ed8e2
// address: 1002ed8e2

undefined8 FUN_1002ed8e2(long *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  bool bVar17;
  undefined1 local_31;
  
  if (param_1[7] == 0x7fffffff) {
    param_1[7] = 0;
    FUN_1002ee08a(param_1,param_1[1]);
    if ((char)param_1[0x17] == '\x01') {
      FUN_1002ee49c(param_1);
    }
    else {
      FUN_1002eecde(param_1,param_1[1],0,0,&local_31);
    }
    lVar9 = param_1[1];
  }
  else {
    uVar2 = *(ulong *)(*param_1 + 0x58);
    bVar6 = 1;
    bVar5 = 1;
    do {
      if (param_1[9] - param_1[8] != 0) {
        lVar10 = param_1[9] - param_1[8] >> 3;
        uVar13 = 0;
        do {
          uVar15 = 1L << ((byte)uVar13 & 0x3f);
          uVar12 = uVar13 >> 6;
          if ((*(ulong *)(param_1[0xb] + uVar12 * 8) >> (uVar13 & 0x3f) & 1) != 0) {
            lVar9 = FUN_1002ee658(param_1,*(undefined8 *)(param_1[8] + uVar13 * 8));
            if (lVar9 != 0) {
              lVar14 = *param_1;
              lVar11 = *(long *)(lVar14 + 0x48) - *(long *)(lVar14 + 0x40);
              if (lVar11 == 0) {
LAB_1002eda91:
                FUN_1002ee08a(param_1,lVar9);
                if (*(char *)((long)param_1 + 0xba) == '\0') {
                  puVar1 = (ulong *)(param_1[0xb] + uVar12 * 8);
                  *puVar1 = *puVar1 & ~uVar15;
                }
                lVar10 = *param_1;
                lVar14 = *(long *)(lVar10 + 0x48) - *(long *)(lVar10 + 0x40);
                if (lVar14 != 0) {
                  lVar14 = lVar14 >> 3;
                  lVar11 = 0;
                  do {
                    plVar3 = *(long **)(*(long *)(lVar10 + 0x40) + lVar11 * 8);
                    (**(code **)(*plVar3 + 0x48))
                              (plVar3,*(undefined8 *)(param_1[0x13] + lVar11 * 8));
                    lVar11 = lVar11 + 1;
                  } while (lVar14 + (ulong)(lVar14 == 0) != lVar11);
                }
                goto LAB_1002edbd9;
              }
              lVar11 = lVar11 >> 3;
              lVar16 = 0;
              while( true ) {
                plVar3 = *(long **)(*(long *)(lVar14 + 0x40) + lVar16 * 8);
                uVar4 = *(undefined8 *)(param_1[0x13] + lVar16 * 8);
                cVar7 = (**(code **)(*plVar3 + 0x28))(plVar3,uVar4);
                if ((cVar7 != '\0') &&
                   (iVar8 = (**(code **)(*plVar3 + 0x30))(plVar3,lVar14,uVar4,lVar9),
                   0xfffffffd < iVar8 - 3U)) break;
                lVar16 = lVar16 + 1;
                if (lVar11 + (ulong)(lVar11 == 0) == lVar16) goto LAB_1002eda91;
              }
              if (iVar8 != 2) goto LAB_1002eda58;
            }
            puVar1 = (ulong *)(param_1[0xb] + uVar12 * 8);
            *puVar1 = *puVar1 & ~uVar15;
          }
LAB_1002eda58:
          uVar13 = uVar13 + 1;
        } while (uVar13 != lVar10 + (ulong)(lVar10 == 0));
      }
      if (((char)param_1[0x17] == '\x01') && (cVar7 = FUN_1002ee49c(param_1), cVar7 != '\0')) {
        bVar5 = 1;
        lVar9 = 0;
      }
      else {
        lVar10 = *param_1;
        lVar9 = *(long *)(lVar10 + 0x48) - *(long *)(lVar10 + 0x40);
        if (lVar9 == 0) {
          lVar9 = 0;
          bVar5 = 0;
          bVar6 = 0;
        }
        else {
          lVar9 = lVar9 >> 3;
          lVar14 = param_1[0x16];
          lVar11 = lVar9 + (ulong)(lVar9 == 0);
          do {
            lVar16 = lVar14 + 1;
            bVar17 = lVar14 != lVar9 + -1;
            lVar14 = 0;
            if (bVar17) {
              lVar14 = lVar16;
            }
            plVar3 = *(long **)(*(long *)(lVar10 + 0x40) + lVar14 * 8);
            uVar4 = *(undefined8 *)(param_1[0x13] + lVar14 * 8);
            cVar7 = (**(code **)(*plVar3 + 0x28))(plVar3,uVar4);
            if ((cVar7 != '\0') &&
               (cVar7 = (**(code **)(*plVar3 + 0x38))(plVar3,uVar4), cVar7 != '\0')) {
              param_1[0x16] = lVar14;
              bVar6 = 1;
              lVar9 = 0;
              bVar5 = 0;
              goto LAB_1002edbd9;
            }
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
          lVar9 = 0;
          bVar5 = 0;
          bVar6 = 0;
        }
      }
LAB_1002edbd9:
      if ((uVar2 & 1) == 0) {
        bVar17 = (bool)(bVar6 | bVar5);
      }
      else {
        bVar17 = (bool)(bVar6 & bVar5);
      }
    } while ((lVar9 == 0) && (bVar17));
    if (lVar9 == 0) {
      return 0;
    }
  }
  return *(undefined8 *)(lVar9 + 8);
}

