// name: FUN_1003820b3
// address: 1003820b3

void FUN_1003820b3(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,long param_4,
                  byte param_5)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  bool bVar19;
  undefined8 *local_48;
  long local_40;
  
  local_48 = param_2;
  local_40 = param_4;
  do {
    puVar14 = local_48 + -1;
    puVar9 = param_1;
LAB_1003820f5:
    while( true ) {
      param_1 = puVar9;
      uVar10 = (long)local_48 - (long)param_1 >> 3;
      switch(uVar10) {
      case 0:
      case 1:
        return;
      case 2:
        iVar7 = FUN_10037ae94(local_48[-1],*param_1,*param_3);
        if (-1 < iVar7) {
          return;
        }
        uVar3 = *param_1;
        *param_1 = local_48[-1];
        local_48[-1] = uVar3;
        return;
      case 3:
        FUN_100382880(param_1,param_1 + 1,puVar14,param_3);
        return;
      case 4:
        FUN_100382b00(param_1,param_1 + 1,param_1 + 2,puVar14,param_3);
        return;
      case 5:
        FUN_100382b97(param_1,param_1 + 1,param_1 + 2,param_1 + 3,puVar14,param_3);
        return;
      }
      if ((long)uVar10 < 0x18) {
        puVar14 = param_1 + 1;
        if ((param_5 & 1) == 0) {
          if (puVar14 == local_48 || param_1 == local_48) {
            return;
          }
          do {
            puVar9 = puVar14;
            iVar7 = FUN_10037ae94(param_1[1],*param_1,*param_3);
            if (iVar7 < 0) {
              uVar3 = *puVar9;
              puVar14 = puVar9;
              do {
                puVar15 = puVar14 + -2;
                *puVar14 = puVar14[-1];
                puVar14 = puVar14 + -1;
                iVar7 = FUN_10037ae94(uVar3,*puVar15,*param_3);
              } while (iVar7 < 0);
              *puVar14 = uVar3;
            }
            puVar14 = puVar9 + 1;
            param_1 = puVar9;
          } while (puVar9 + 1 != local_48);
          return;
        }
        if (puVar14 == local_48 || param_1 == local_48) {
          return;
        }
        lVar12 = 8;
        puVar9 = param_1;
        goto LAB_10038251b;
      }
      if (local_40 == 0) {
        if (param_1 == local_48) {
          return;
        }
        uVar8 = uVar10 - 2 >> 1;
        uVar11 = uVar8;
        goto LAB_1003825ae;
      }
      uVar11 = uVar10 >> 1;
      puVar9 = param_1 + uVar11;
      if (uVar10 < 0x81) {
        FUN_100382880(puVar9,param_1,puVar14,param_3);
      }
      else {
        FUN_100382880(param_1,puVar9,puVar14,param_3);
        FUN_100382880(param_1 + 1,param_1 + (uVar11 - 1),local_48 + -2,param_3);
        puVar15 = param_1 + uVar11;
        FUN_100382880(param_1 + 2,puVar15 + 1,local_48 + -3,param_3);
        FUN_100382880(param_1 + (uVar11 - 1),puVar9,puVar15 + 1,param_3);
        uVar3 = *param_1;
        *param_1 = *puVar15;
        *puVar15 = uVar3;
      }
      local_40 = local_40 + -1;
      if (((param_5 & 1) != 0) || (iVar7 = FUN_10037ae94(param_1[-1],*param_1,*param_3), iVar7 < 0))
      break;
      uVar3 = *param_1;
      iVar7 = FUN_10037ae94(uVar3,*puVar14,*param_3);
      puVar15 = param_1;
      puVar9 = param_1;
      if (iVar7 < 0) {
        do {
          puVar9 = puVar15 + 1;
          iVar7 = FUN_10037ae94(uVar3,puVar15[1],*param_3);
          puVar15 = puVar9;
        } while (-1 < iVar7);
      }
      else {
        do {
          puVar9 = puVar9 + 1;
          if (local_48 <= puVar9) break;
          iVar7 = FUN_10037ae94(uVar3,*puVar9,*param_3);
        } while (-1 < iVar7);
      }
      puVar15 = local_48;
      puVar13 = local_48;
      if (puVar9 < local_48) {
        do {
          puVar15 = puVar13 + -1;
          iVar7 = FUN_10037ae94(uVar3,puVar13[-1],*param_3);
          puVar13 = puVar15;
        } while (iVar7 < 0);
      }
      while (puVar9 < puVar15) {
        uVar4 = *puVar9;
        *puVar9 = *puVar15;
        *puVar15 = uVar4;
        do {
          puVar13 = puVar9 + 1;
          puVar9 = puVar9 + 1;
          iVar7 = FUN_10037ae94(uVar3,*puVar13,*param_3);
        } while (-1 < iVar7);
        do {
          puVar13 = puVar15 + -1;
          puVar15 = puVar15 + -1;
          iVar7 = FUN_10037ae94(uVar3,*puVar13,*param_3);
        } while (iVar7 < 0);
      }
      puVar15 = puVar9 + -1;
      if (puVar15 != param_1) {
        *param_1 = *puVar15;
      }
      *puVar15 = uVar3;
    }
    uVar3 = *param_1;
    lVar18 = 8;
    lVar12 = 0;
    do {
      iVar7 = FUN_10037ae94(*(undefined8 *)((long)param_1 + lVar18),uVar3,*param_3);
      lVar12 = lVar12 + -8;
      lVar18 = lVar18 + 8;
    } while (iVar7 < 0);
    puVar15 = (undefined8 *)((long)param_1 - lVar12);
    puVar9 = local_48;
    if (lVar12 == -8) {
      do {
        if (puVar9 <= puVar15) break;
        puVar13 = puVar9 + -1;
        puVar9 = puVar9 + -1;
        iVar7 = FUN_10037ae94(*puVar13,uVar3,*param_3);
      } while (-1 < iVar7);
    }
    else {
      do {
        puVar13 = puVar9 + -1;
        puVar9 = puVar9 + -1;
        iVar7 = FUN_10037ae94(*puVar13,uVar3,*param_3);
      } while (-1 < iVar7);
    }
    puVar13 = puVar9;
    puVar16 = puVar15;
    if (puVar15 < puVar9) {
      do {
        uVar4 = *puVar16;
        *puVar16 = *puVar13;
        *puVar13 = uVar4;
        do {
          puVar17 = puVar16;
          puVar16 = puVar17 + 1;
          iVar7 = FUN_10037ae94(puVar17[1],uVar3,*param_3);
        } while (iVar7 < 0);
        do {
          puVar2 = puVar13 + -1;
          puVar13 = puVar13 + -1;
          iVar7 = FUN_10037ae94(*puVar2,uVar3,*param_3);
        } while (-1 < iVar7);
      } while (puVar16 < puVar13);
    }
    else {
      puVar17 = puVar15 + -1;
    }
    if (puVar17 != param_1) {
      *param_1 = *puVar17;
    }
    *puVar17 = uVar3;
    if (puVar15 < puVar9) goto LAB_10038235c;
    cVar5 = FUN_100382936(param_1,puVar17,param_3);
    cVar6 = FUN_100382936(puVar17 + 1,local_48,param_3);
    if (cVar6 == '\0') goto code_r0x000100382353;
    local_48 = puVar17;
    if (cVar5 != '\0') {
      return;
    }
  } while( true );
LAB_10038251b:
  puVar15 = puVar14;
  iVar7 = FUN_10037ae94(puVar9[1],*puVar9,*param_3);
  if (iVar7 < 0) {
    uVar3 = *puVar15;
    lVar18 = lVar12;
    do {
      *(undefined8 *)((long)param_1 + lVar18) = *(undefined8 *)((long)param_1 + lVar18 + -8);
      puVar14 = param_1;
      if (lVar18 == 8) goto LAB_100382573;
      iVar7 = FUN_10037ae94(uVar3,*(undefined8 *)((long)param_1 + lVar18 + -0x10),*param_3);
      lVar18 = lVar18 + -8;
    } while (iVar7 < 0);
    puVar14 = (undefined8 *)(lVar18 + (long)param_1);
LAB_100382573:
    *puVar14 = uVar3;
  }
  lVar12 = lVar12 + 8;
  puVar14 = puVar15 + 1;
  puVar9 = puVar15;
  if (puVar15 + 1 == local_48) {
    return;
  }
  goto LAB_10038251b;
LAB_1003825ae:
  do {
    if ((long)uVar11 <= (long)uVar8) {
      lVar12 = uVar11 * 2 + 1;
      puVar14 = param_1 + uVar11 * 2 + 1;
      lVar18 = uVar11 * 2 + 2;
      if (lVar18 < (long)uVar10) {
        iVar7 = FUN_10037ae94(*puVar14,param_1[uVar11 * 2 + 2],*param_3);
        if (iVar7 < 0) {
          puVar14 = param_1 + uVar11 * 2 + 2;
          lVar12 = lVar18;
        }
      }
      puVar9 = param_1 + uVar11;
      iVar7 = FUN_10037ae94(*puVar14,*puVar9,*param_3);
      if (-1 < iVar7) {
        uVar3 = *puVar9;
        do {
          puVar15 = puVar14;
          *puVar9 = *puVar15;
          if ((long)uVar8 < lVar12) break;
          lVar18 = lVar12 * 2 + 1;
          puVar14 = param_1 + lVar12 * 2 + 1;
          lVar1 = lVar12 * 2 + 2;
          if ((lVar1 < (long)uVar10) &&
             (iVar7 = FUN_10037ae94(*puVar14,param_1[lVar12 * 2 + 2],*param_3), iVar7 < 0)) {
            puVar14 = param_1 + lVar12 * 2 + 2;
            lVar18 = lVar1;
          }
          iVar7 = FUN_10037ae94(*puVar14,uVar3,*param_3);
          puVar9 = puVar15;
          lVar12 = lVar18;
        } while (-1 < iVar7);
        *puVar15 = uVar3;
      }
    }
    bVar19 = uVar11 != 0;
    uVar11 = uVar11 - 1;
  } while (bVar19);
  do {
    uVar3 = *param_1;
    lVar12 = 0;
    puVar14 = param_1;
    do {
      puVar9 = puVar14 + lVar12 + 1;
      lVar18 = lVar12 * 2 + 1;
      lVar1 = lVar12 * 2 + 2;
      if ((lVar1 < (long)uVar10) &&
         (iVar7 = FUN_10037ae94(puVar14[lVar12 + 1],puVar14[lVar12 + 2],*param_3), iVar7 < 0)) {
        puVar9 = puVar14 + lVar12 + 2;
        lVar18 = lVar1;
      }
      lVar12 = lVar18;
      *puVar14 = *puVar9;
      puVar14 = puVar9;
    } while (lVar12 <= (long)(uVar10 - 2 >> 1));
    local_48 = local_48 + -1;
    if (puVar9 == local_48) {
      *puVar9 = uVar3;
    }
    else {
      *puVar9 = *local_48;
      *local_48 = uVar3;
      lVar12 = (long)puVar9 + (8 - (long)param_1) >> 3;
      if (1 < lVar12) {
        uVar11 = lVar12 - 2U >> 1;
        iVar7 = FUN_10037ae94(param_1[uVar11],*puVar9,*param_3);
        if (iVar7 < 0) {
          uVar3 = *puVar9;
          puVar14 = param_1 + uVar11;
          do {
            puVar15 = puVar14;
            *puVar9 = *puVar15;
            if (uVar11 == 0) break;
            uVar11 = uVar11 - 1 >> 1;
            iVar7 = FUN_10037ae94(param_1[uVar11],uVar3,*param_3);
            puVar9 = puVar15;
            puVar14 = param_1 + uVar11;
          } while (iVar7 < 0);
          *puVar15 = uVar3;
        }
      }
    }
    bVar19 = (long)uVar10 < 3;
    uVar10 = uVar10 - 1;
    if (bVar19) {
      return;
    }
  } while( true );
code_r0x000100382353:
  puVar9 = puVar17 + 1;
  if (cVar5 == '\0') {
LAB_10038235c:
    FUN_1003820b3(param_1,puVar17,param_3,local_40,param_5 & 1);
    param_5 = 0;
    puVar9 = puVar17 + 1;
  }
  goto LAB_1003820f5;
}

