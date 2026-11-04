// name: FUN_1002a355c
// address: 1002a355c

void FUN_1002a355c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  long param_5,long param_6,undefined8 *param_7,long param_8)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  byte bVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  size_t sVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  bool bVar23;
  undefined8 *local_78;
  long local_68;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_38;
  
  if (param_6 == 0) {
    return;
  }
  local_50 = param_7;
  local_78 = param_3;
  local_68 = param_6;
  do {
    if ((param_5 <= param_8) || (local_68 <= param_8)) {
      if (param_5 <= local_68) {
        if (param_1 == param_2) {
          return;
        }
        lVar11 = -(long)param_7;
        puVar14 = param_1;
        do {
          *param_7 = *puVar14;
          puVar14 = puVar14 + 1;
          param_7 = param_7 + 1;
          lVar11 = lVar11 + -8;
        } while (puVar14 != param_2);
        do {
          if (param_2 == local_78) {
            _memmove(param_1,local_50,-(lVar11 + (long)local_50));
            return;
          }
          bVar4 = (*(code *)*param_4)(*param_2,*local_50);
          puVar14 = local_50;
          if (bVar4 != 0) {
            puVar14 = param_2;
          }
          local_50 = local_50 + (bVar4 ^ 1);
          param_2 = param_2 + bVar4;
          *param_1 = *puVar14;
          param_1 = param_1 + 1;
        } while (param_7 != local_50);
        return;
      }
      puVar14 = param_2;
      puVar12 = param_7;
      if (param_2 == local_78) {
        return;
      }
      do {
        *puVar12 = *puVar14;
        puVar14 = puVar14 + 1;
        puVar12 = puVar12 + 1;
      } while (puVar14 != local_78);
      do {
        local_78 = local_78 + -1;
        if (param_2 == param_1) {
          lVar11 = 0;
          do {
            puVar14 = (undefined8 *)((long)puVar12 + lVar11 + -8);
            *(undefined8 *)((long)local_78 + lVar11) = *puVar14;
            lVar11 = lVar11 + -8;
          } while (puVar14 != param_7);
          return;
        }
        cVar3 = (*(code *)*param_4)(puVar12[-1],param_2[-1]);
        puVar8 = puVar12;
        puVar5 = param_2 + -1;
        puVar14 = param_2;
        if (cVar3 == '\0') {
          puVar8 = puVar12 + -1;
          puVar5 = param_2;
          puVar14 = puVar12;
        }
        param_2 = puVar5;
        *local_78 = puVar14[-1];
        puVar12 = puVar8;
      } while (puVar8 != param_7);
      return;
    }
    if (param_5 == 0) {
      return;
    }
    lVar21 = 0;
    lVar11 = 0;
    while (cVar3 = (*(code *)*param_4)(*param_2,param_1[lVar11]), cVar3 == '\0') {
      lVar11 = lVar11 + 1;
      lVar21 = lVar21 + -8;
      if (param_5 == lVar11) {
        return;
      }
    }
    puVar14 = (undefined8 *)((long)param_1 - lVar21);
    if (param_5 - lVar11 < local_68) {
      lVar6 = local_68 / 2;
      puVar12 = param_2 + lVar6;
      puVar8 = param_2;
      local_38 = param_2;
      puVar5 = puVar14;
      if (puVar14 != param_2) {
        puVar8 = (undefined8 *)((long)param_1 - lVar21);
        uVar20 = (long)param_2 + (lVar21 - (long)param_1) >> 3;
        local_38 = puVar14;
        do {
          uVar22 = uVar20 >> 1;
          cVar3 = (*(code *)*param_4)(*puVar12,local_38[uVar22]);
          if (cVar3 == '\0') {
            local_38 = local_38 + uVar22 + 1;
            uVar22 = ~uVar22 + uVar20;
          }
          puVar5 = local_38;
          uVar20 = uVar22;
        } while (uVar22 != 0);
      }
      lVar16 = (long)local_38 - (long)puVar8 >> 3;
    }
    else {
      if (param_5 + -1 == lVar11) {
        uVar2 = param_1[lVar11];
        param_1[lVar11] = *param_2;
        *param_2 = uVar2;
        return;
      }
      lVar16 = (param_5 - lVar11) / 2;
      puVar8 = local_78;
      local_48 = local_78;
      puVar12 = param_2;
      if ((long)local_78 - (long)param_2 != 0) {
        pcVar1 = (code *)*param_4;
        uVar20 = (long)local_78 - (long)param_2 >> 3;
        local_48 = param_2;
        do {
          uVar22 = uVar20 >> 1;
          cVar3 = (*pcVar1)(local_48[uVar22],param_1[lVar16 + lVar11]);
          if (cVar3 != '\0') {
            local_48 = local_48 + uVar22 + 1;
            uVar22 = ~uVar22 + uVar20;
          }
          puVar8 = param_2;
          puVar12 = local_48;
          uVar20 = uVar22;
        } while (uVar22 != 0);
      }
      puVar5 = (undefined8 *)((long)param_1 + (lVar16 * 8 - lVar21));
      lVar6 = (long)local_48 - (long)puVar8 >> 3;
    }
    puVar8 = puVar12;
    if ((puVar5 != param_2) && (puVar8 = puVar5, param_2 != puVar12)) {
      puVar13 = puVar5 + 1;
      if (puVar13 == param_2) {
        uVar2 = *puVar5;
        sVar10 = (long)puVar12 - (long)param_2;
        _memmove(puVar5,puVar13,sVar10);
        *(undefined8 *)((long)puVar5 + sVar10) = uVar2;
        puVar8 = (undefined8 *)((long)puVar5 + sVar10);
      }
      else {
        puVar18 = param_2 + 1;
        if (puVar18 == puVar12) {
          uVar2 = puVar12[-1];
          sVar10 = (long)puVar12 + (-8 - (long)puVar5);
          if (sVar10 != 0) {
            _memmove((undefined8 *)-(-8 - (long)puVar5),puVar5,sVar10);
          }
          *puVar5 = uVar2;
          puVar8 = (undefined8 *)-(-8 - (long)puVar5);
        }
        else {
          lVar7 = (long)param_2 - (long)puVar5;
          lVar15 = lVar7 >> 3;
          lVar21 = (long)puVar12 - (long)param_2 >> 3;
          lVar17 = lVar15;
          if (lVar15 == lVar21) {
            do {
              uVar2 = puVar13[-1];
              puVar13[-1] = puVar18[-1];
              puVar18[-1] = uVar2;
              puVar8 = param_2;
              if (puVar13 == param_2) break;
              puVar13 = puVar13 + 1;
              bVar23 = puVar18 != puVar12;
              puVar18 = puVar18 + 1;
            } while (bVar23);
          }
          else {
            do {
              lVar9 = lVar21;
              lVar21 = lVar17 % lVar9;
              lVar17 = lVar9;
            } while (lVar21 != 0);
            puVar8 = puVar5 + lVar9;
            do {
              uVar2 = puVar8[-1];
              puVar18 = (undefined8 *)((long)puVar8 + lVar7 + -8);
              puVar8 = puVar8 + -1;
              puVar13 = puVar8;
              do {
                puVar19 = puVar18;
                *puVar13 = *puVar19;
                lVar21 = (long)puVar12 - (long)puVar19 >> 3;
                puVar18 = puVar5 + (lVar15 - lVar21);
                if (lVar15 < lVar21) {
                  puVar18 = (undefined8 *)((long)puVar19 + lVar7);
                }
                puVar13 = puVar19;
              } while (puVar18 != puVar8);
              *puVar19 = uVar2;
            } while (puVar8 != puVar5);
            puVar8 = (undefined8 *)(((long)puVar12 - (long)param_2) + (long)puVar5);
          }
        }
      }
    }
    lVar21 = (param_5 - lVar16) - lVar11;
    if (lVar16 + lVar6 < ((local_68 + param_5) - (lVar16 + lVar6)) - lVar11) {
      FUN_1002a355c(puVar14,puVar5,puVar8,param_4,lVar16,lVar6,param_7,param_8);
      puVar14 = puVar8;
      param_2 = puVar12;
      lVar6 = local_68 - lVar6;
      param_5 = lVar21;
    }
    else {
      FUN_1002a355c(puVar8,puVar12,local_78,param_4,lVar21,local_68 - lVar6,param_7,param_8);
      param_2 = puVar5;
      param_5 = lVar16;
      local_78 = puVar8;
    }
    param_1 = puVar14;
    local_68 = lVar6;
    if (lVar6 == 0) {
      return;
    }
  } while( true );
}

