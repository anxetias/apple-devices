// name: FUN_1004027ba
// address: 1004027ba

void FUN_1004027ba(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  long param_5,long param_6,undefined8 *param_7,long param_8)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  byte bVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  size_t sVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  bool bVar21;
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
        lVar10 = -(long)param_7;
        puVar12 = param_1;
        do {
          *param_7 = *puVar12;
          puVar12 = puVar12 + 1;
          param_7 = param_7 + 1;
          lVar10 = lVar10 + -8;
        } while (puVar12 != param_2);
        do {
          if (param_2 == local_78) {
            _memmove(param_1,local_50,-(lVar10 + (long)local_50));
            return;
          }
          bVar4 = (*(code *)*param_4)(*param_2,*local_50);
          puVar12 = local_50;
          if (bVar4 != 0) {
            puVar12 = param_2;
          }
          param_2 = param_2 + bVar4;
          local_50 = local_50 + (bVar4 ^ 1);
          *param_1 = *puVar12;
          param_1 = param_1 + 1;
        } while (param_7 != local_50);
        return;
      }
      puVar12 = param_2;
      puVar11 = param_7;
      if (param_2 == local_78) {
        return;
      }
      do {
        *puVar11 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar11 = puVar11 + 1;
      } while (puVar12 != local_78);
      do {
        local_78 = local_78 + -1;
        if (param_2 == param_1) {
          lVar10 = 0;
          do {
            puVar12 = (undefined8 *)((long)puVar11 + lVar10 + -8);
            *(undefined8 *)((long)local_78 + lVar10) = *puVar12;
            lVar10 = lVar10 + -8;
          } while (puVar12 != param_7);
          return;
        }
        cVar3 = (*(code *)*param_4)(puVar11[-1],param_2[-1]);
        puVar7 = puVar11;
        puVar16 = param_2 + -1;
        puVar12 = param_2;
        if (cVar3 == '\0') {
          puVar7 = puVar11 + -1;
          puVar16 = param_2;
          puVar12 = puVar11;
        }
        param_2 = puVar16;
        *local_78 = puVar12[-1];
        puVar11 = puVar7;
      } while (puVar7 != param_7);
      return;
    }
    if (param_5 == 0) {
      return;
    }
    lVar19 = 0;
    lVar10 = 0;
    while (cVar3 = (*(code *)*param_4)(*param_2,param_1[lVar10]), cVar3 == '\0') {
      lVar10 = lVar10 + 1;
      lVar19 = lVar19 + -8;
      if (param_5 == lVar10) {
        return;
      }
    }
    puVar12 = (undefined8 *)((long)param_1 - lVar19);
    if (param_5 - lVar10 < local_68) {
      lVar6 = local_68 / 2;
      puVar11 = param_2 + lVar6;
      puVar7 = param_2;
      puVar16 = param_2;
      local_38 = puVar12;
      if (puVar12 != param_2) {
        puVar7 = (undefined8 *)((long)param_1 - lVar19);
        uVar18 = (long)param_2 + (lVar19 - (long)param_1) >> 3;
        do {
          uVar20 = uVar18 >> 1;
          cVar3 = (*(code *)*param_4)(*puVar11,local_38[uVar20]);
          if (cVar3 == '\0') {
            local_38 = local_38 + uVar20 + 1;
            uVar20 = ~uVar20 + uVar18;
          }
          puVar16 = local_38;
          uVar18 = uVar20;
        } while (uVar20 != 0);
      }
      lVar14 = (long)puVar16 - (long)puVar7 >> 3;
    }
    else {
      if (param_5 + -1 == lVar10) {
        uVar2 = param_1[lVar10];
        param_1[lVar10] = *param_2;
        *param_2 = uVar2;
        return;
      }
      lVar14 = (param_5 - lVar10) / 2;
      puVar7 = local_78;
      local_48 = local_78;
      puVar11 = param_2;
      if ((long)local_78 - (long)param_2 != 0) {
        pcVar1 = (code *)*param_4;
        uVar18 = (long)local_78 - (long)param_2 >> 3;
        local_48 = param_2;
        do {
          uVar20 = uVar18 >> 1;
          cVar3 = (*pcVar1)(local_48[uVar20],param_1[lVar14 + lVar10]);
          if (cVar3 != '\0') {
            local_48 = local_48 + uVar20 + 1;
            uVar20 = ~uVar20 + uVar18;
          }
          puVar7 = param_2;
          puVar11 = local_48;
          uVar18 = uVar20;
        } while (uVar20 != 0);
      }
      local_38 = (undefined8 *)((long)param_1 + (lVar14 * 8 - lVar19));
      lVar6 = (long)local_48 - (long)puVar7 >> 3;
    }
    puVar7 = puVar11;
    if ((local_38 != param_2) && (puVar7 = local_38, param_2 != puVar11)) {
      puVar16 = local_38 + 1;
      if (puVar16 == param_2) {
        uVar2 = *local_38;
        sVar9 = (long)puVar11 - (long)param_2;
        _memmove(local_38,puVar16,sVar9);
        *(undefined8 *)((long)local_38 + sVar9) = uVar2;
        puVar7 = (undefined8 *)((long)local_38 + sVar9);
      }
      else {
        puVar5 = param_2 + 1;
        if (puVar5 == puVar11) {
          uVar2 = puVar11[-1];
          sVar9 = (long)puVar11 + (-8 - (long)local_38);
          if (sVar9 != 0) {
            _memmove((undefined8 *)-(-8 - (long)local_38),local_38,sVar9);
          }
          *local_38 = uVar2;
          puVar7 = (undefined8 *)-(-8 - (long)local_38);
        }
        else {
          lVar13 = (long)param_2 - (long)local_38 >> 3;
          lVar19 = (long)puVar11 - (long)param_2 >> 3;
          lVar15 = lVar13;
          if (lVar13 == lVar19) {
            do {
              uVar2 = puVar16[-1];
              puVar16[-1] = puVar5[-1];
              puVar5[-1] = uVar2;
              puVar7 = param_2;
              if (puVar16 == param_2) break;
              puVar16 = puVar16 + 1;
              bVar21 = puVar5 != puVar11;
              puVar5 = puVar5 + 1;
            } while (bVar21);
          }
          else {
            do {
              lVar8 = lVar19;
              lVar19 = lVar15 % lVar8;
              lVar15 = lVar8;
            } while (lVar19 != 0);
            puVar7 = local_38 + lVar8;
            do {
              uVar2 = puVar7[-1];
              puVar16 = (undefined8 *)((long)puVar7 + ((long)param_2 - (long)local_38) + -8);
              puVar7 = puVar7 + -1;
              puVar5 = puVar7;
              do {
                puVar17 = puVar16;
                *puVar5 = *puVar17;
                lVar19 = (long)puVar11 - (long)puVar17 >> 3;
                puVar16 = local_38 + (lVar13 - lVar19);
                if (lVar13 < lVar19) {
                  puVar16 = puVar17 + lVar13;
                }
                puVar5 = puVar17;
              } while (puVar16 != puVar7);
              *puVar17 = uVar2;
            } while (puVar7 != local_38);
            puVar7 = (undefined8 *)(((long)puVar11 - (long)param_2) + (long)local_38);
          }
        }
      }
    }
    lVar19 = (param_5 - lVar14) - lVar10;
    if (lVar14 + lVar6 < ((local_68 + param_5) - (lVar14 + lVar6)) - lVar10) {
      FUN_1004027ba(puVar12,local_38,puVar7,param_4,lVar14,lVar6,param_7,param_8);
      puVar12 = puVar7;
      param_2 = puVar11;
      lVar6 = local_68 - lVar6;
      param_5 = lVar19;
    }
    else {
      FUN_1004027ba(puVar7,puVar11,local_78,param_4,lVar19,local_68 - lVar6,param_7,param_8);
      param_2 = local_38;
      param_5 = lVar14;
      local_78 = puVar7;
    }
    param_1 = puVar12;
    local_68 = lVar6;
    if (lVar6 == 0) {
      return;
    }
  } while( true );
}

