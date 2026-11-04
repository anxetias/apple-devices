// name: FUN_1005944f1
// address: 1005944f1

void FUN_1005944f1(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  long param_5,long param_6,undefined8 *param_7,long param_8)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  size_t sVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined8 *puVar23;
  ulong uVar24;
  ulong uVar25;
  bool bVar26;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  long local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_40;
  undefined8 *local_38;
  
  if (param_6 == 0) {
    return;
  }
  local_40 = param_7;
  local_78 = param_6;
  local_68 = param_3;
  do {
    if ((param_5 <= param_8) || (puVar10 = param_1, lVar12 = param_5, local_78 <= param_8)) {
      if (param_5 <= local_78) {
        if (param_1 == param_2) {
          return;
        }
        lVar12 = -(long)param_7;
        puVar10 = param_1;
        do {
          uVar3 = *(undefined4 *)((long)puVar10 + 4);
          uVar4 = *(undefined4 *)(puVar10 + 1);
          uVar5 = *(undefined4 *)((long)puVar10 + 0xc);
          *(undefined4 *)param_7 = *(undefined4 *)puVar10;
          *(undefined4 *)((long)param_7 + 4) = uVar3;
          *(undefined4 *)(param_7 + 1) = uVar4;
          *(undefined4 *)((long)param_7 + 0xc) = uVar5;
          puVar10 = puVar10 + 2;
          param_7 = param_7 + 2;
          lVar12 = lVar12 + -0x10;
        } while (puVar10 != param_2);
        do {
          if (param_2 == local_68) {
            _memmove(param_1,local_40,-(lVar12 + (long)local_40));
            return;
          }
          cVar9 = (*(code *)*param_4)(param_2,local_40);
          if (cVar9 == '\0') {
            uVar3 = *(undefined4 *)((long)local_40 + 4);
            uVar4 = *(undefined4 *)(local_40 + 1);
            uVar5 = *(undefined4 *)((long)local_40 + 0xc);
            *(undefined4 *)param_1 = *(undefined4 *)local_40;
            *(undefined4 *)((long)param_1 + 4) = uVar3;
            *(undefined4 *)(param_1 + 1) = uVar4;
            *(undefined4 *)((long)param_1 + 0xc) = uVar5;
            local_40 = local_40 + 2;
          }
          else {
            uVar3 = *(undefined4 *)((long)param_2 + 4);
            uVar4 = *(undefined4 *)(param_2 + 1);
            uVar5 = *(undefined4 *)((long)param_2 + 0xc);
            *(undefined4 *)param_1 = *(undefined4 *)param_2;
            *(undefined4 *)((long)param_1 + 4) = uVar3;
            *(undefined4 *)(param_1 + 1) = uVar4;
            *(undefined4 *)((long)param_1 + 0xc) = uVar5;
            param_2 = param_2 + 2;
          }
          param_1 = param_1 + 2;
        } while (param_7 != local_40);
        return;
      }
      puVar10 = param_2;
      puVar23 = param_7;
      if (param_2 == local_68) {
        return;
      }
      do {
        uVar3 = *(undefined4 *)((long)puVar10 + 4);
        uVar4 = *(undefined4 *)(puVar10 + 1);
        uVar5 = *(undefined4 *)((long)puVar10 + 0xc);
        *(undefined4 *)puVar23 = *(undefined4 *)puVar10;
        *(undefined4 *)((long)puVar23 + 4) = uVar3;
        *(undefined4 *)(puVar23 + 1) = uVar4;
        *(undefined4 *)((long)puVar23 + 0xc) = uVar5;
        puVar10 = puVar10 + 2;
        puVar23 = puVar23 + 2;
      } while (puVar10 != local_68);
      do {
        puVar10 = local_68 + -2;
        if (param_2 == param_1) {
          lVar12 = 0;
          do {
            puVar14 = (undefined8 *)((long)puVar23 + lVar12 + -0x10);
            uVar6 = *(undefined8 *)((long)puVar23 + lVar12 + -8);
            *(undefined8 *)((long)puVar10 + lVar12) = *puVar14;
            ((undefined8 *)((long)puVar10 + lVar12))[1] = uVar6;
            lVar12 = lVar12 + -0x10;
          } while (puVar14 != param_7);
          return;
        }
        puVar14 = param_2 + -2;
        puVar11 = puVar23 + -2;
        cVar9 = (*(code *)*param_4)(puVar11,puVar14);
        puVar17 = puVar14;
        if (cVar9 == '\0') {
          puVar14 = param_2;
          puVar23 = puVar11;
          puVar17 = puVar11;
        }
        uVar3 = *(undefined4 *)((long)puVar17 + 4);
        uVar4 = *(undefined4 *)(puVar17 + 1);
        uVar5 = *(undefined4 *)((long)puVar17 + 0xc);
        *(undefined4 *)puVar10 = *(undefined4 *)puVar17;
        *(undefined4 *)((long)local_68 + -0xc) = uVar3;
        *(undefined4 *)(local_68 + -1) = uVar4;
        *(undefined4 *)((long)local_68 + -4) = uVar5;
        param_2 = puVar14;
        local_68 = puVar10;
      } while (puVar23 != param_7);
      return;
    }
    while( true ) {
      if (lVar12 == 0) {
        return;
      }
      cVar9 = (*(code *)*param_4)(param_2);
      if (cVar9 != '\0') break;
      param_1 = param_1 + 2;
      puVar10 = puVar10 + 2;
      lVar12 = lVar12 + -1;
    }
    if (lVar12 < local_78) {
      lVar21 = local_78 / 2;
      puVar23 = param_2 + lVar21 * 2;
      local_38 = param_2;
      puVar11 = param_2;
      puVar14 = param_1;
      if (param_1 != param_2) {
        uVar24 = (long)param_2 - (long)puVar10 >> 4;
        local_38 = param_1;
        do {
          uVar25 = uVar24 >> 1;
          cVar9 = (*(code *)*param_4)(puVar23,local_38 + uVar25 * 2);
          if (cVar9 == '\0') {
            local_38 = local_38 + uVar25 * 2 + 2;
            uVar25 = ~uVar25 + uVar24;
          }
          puVar11 = puVar10;
          puVar14 = local_38;
          uVar24 = uVar25;
        } while (uVar25 != 0);
      }
      param_5 = (long)local_38 - (long)puVar11 >> 4;
    }
    else {
      if (lVar12 == 1) {
        uVar6 = *param_1;
        uVar7 = param_1[1];
        uVar8 = param_2[1];
        *param_1 = *param_2;
        param_1[1] = uVar8;
        *param_2 = uVar6;
        param_2[1] = uVar7;
        return;
      }
      param_5 = lVar12 / 2;
      puVar14 = param_1 + param_5 * 2;
      puVar10 = local_68;
      local_70 = local_68;
      puVar23 = param_2;
      if ((long)local_68 - (long)param_2 != 0) {
        pcVar2 = (code *)*param_4;
        uVar24 = (long)local_68 - (long)param_2 >> 4;
        local_70 = param_2;
        do {
          uVar25 = uVar24 >> 1;
          cVar9 = (*pcVar2)(local_70 + uVar25 * 2,puVar14);
          if (cVar9 != '\0') {
            local_70 = local_70 + uVar25 * 2 + 2;
            uVar25 = ~uVar25 + uVar24;
          }
          puVar10 = param_2;
          puVar23 = local_70;
          uVar24 = uVar25;
        } while (uVar25 != 0);
      }
      lVar21 = (long)local_70 - (long)puVar10 >> 4;
    }
    puVar10 = puVar23;
    if ((puVar14 != param_2) && (puVar10 = puVar14, param_2 != puVar23)) {
      puVar11 = puVar14 + 2;
      if (puVar11 == param_2) {
        uVar6 = *puVar14;
        uVar7 = puVar14[1];
        sVar19 = (long)puVar23 - (long)param_2;
        _memmove(puVar14,puVar11,sVar19);
        local_88 = (undefined4)uVar6;
        uStack_84 = (undefined4)((ulong)uVar6 >> 0x20);
        uStack_80 = (undefined4)uVar7;
        uStack_7c = (undefined4)((ulong)uVar7 >> 0x20);
        puVar1 = (undefined4 *)((long)puVar14 + sVar19);
        *puVar1 = local_88;
        puVar1[1] = uStack_84;
        puVar1[2] = uStack_80;
        puVar1[3] = uStack_7c;
        puVar10 = (undefined8 *)(sVar19 + (long)puVar14);
      }
      else {
        puVar17 = param_2 + 2;
        if (puVar17 == puVar23) {
          uVar6 = puVar23[-2];
          uVar7 = puVar23[-1];
          sVar19 = (long)puVar23 + (-0x10 - (long)puVar14);
          if (sVar19 != 0) {
            _memmove((undefined8 *)-(-0x10 - (long)puVar14),puVar14,sVar19);
          }
          local_88 = (undefined4)uVar6;
          uStack_84 = (undefined4)((ulong)uVar6 >> 0x20);
          uStack_80 = (undefined4)uVar7;
          uStack_7c = (undefined4)((ulong)uVar7 >> 0x20);
          *(undefined4 *)puVar14 = local_88;
          *(undefined4 *)((long)puVar14 + 4) = uStack_84;
          *(undefined4 *)(puVar14 + 1) = uStack_80;
          *(undefined4 *)((long)puVar14 + 0xc) = uStack_7c;
          puVar10 = (undefined8 *)-(-0x10 - (long)puVar14);
        }
        else {
          lVar13 = (long)param_2 - (long)puVar14;
          lVar22 = lVar13 >> 4;
          lVar15 = (long)puVar23 - (long)param_2 >> 4;
          lVar20 = lVar22;
          if (lVar22 == lVar15) {
            do {
              uVar6 = puVar11[-2];
              uVar7 = puVar11[-1];
              uVar8 = puVar17[-1];
              puVar11[-2] = puVar17[-2];
              puVar11[-1] = uVar8;
              local_88 = (undefined4)uVar6;
              uStack_84 = (undefined4)((ulong)uVar6 >> 0x20);
              uStack_80 = (undefined4)uVar7;
              uStack_7c = (undefined4)((ulong)uVar7 >> 0x20);
              *(undefined4 *)(puVar17 + -2) = local_88;
              *(undefined4 *)((long)puVar17 + -0xc) = uStack_84;
              *(undefined4 *)(puVar17 + -1) = uStack_80;
              *(undefined4 *)((long)puVar17 + -4) = uStack_7c;
              puVar10 = param_2;
              if (puVar11 == param_2) break;
              puVar11 = puVar11 + 2;
              bVar26 = puVar17 != puVar23;
              puVar17 = puVar17 + 2;
            } while (bVar26);
          }
          else {
            do {
              lVar16 = lVar15;
              lVar15 = lVar20 % lVar16;
              lVar20 = lVar16;
            } while (lVar15 != 0);
            puVar10 = puVar14 + lVar16 * 2;
            do {
              uVar6 = puVar10[-2];
              uVar7 = puVar10[-1];
              puVar17 = (undefined8 *)((long)puVar10 + lVar13 + -0x10);
              puVar10 = puVar10 + -2;
              puVar11 = puVar10;
              do {
                puVar18 = puVar17;
                lVar15 = (long)puVar23 - (long)puVar18 >> 4;
                uVar8 = puVar18[1];
                *puVar11 = *puVar18;
                puVar11[1] = uVar8;
                puVar17 = (undefined8 *)((long)puVar18 + lVar13);
                if (lVar15 <= lVar22) {
                  puVar17 = puVar14 + (lVar22 - lVar15) * 2;
                }
                puVar11 = puVar18;
              } while (puVar17 != puVar10);
              local_88 = (undefined4)uVar6;
              uStack_84 = (undefined4)((ulong)uVar6 >> 0x20);
              uStack_80 = (undefined4)uVar7;
              uStack_7c = (undefined4)((ulong)uVar7 >> 0x20);
              *(undefined4 *)puVar18 = local_88;
              *(undefined4 *)((long)puVar18 + 4) = uStack_84;
              *(undefined4 *)(puVar18 + 1) = uStack_80;
              *(undefined4 *)((long)puVar18 + 0xc) = uStack_7c;
            } while (puVar10 != puVar14);
            puVar10 = (undefined8 *)(((long)puVar23 - (long)param_2) + (long)puVar14);
          }
        }
      }
    }
    if (param_5 + lVar21 < (local_78 - (param_5 + lVar21)) + lVar12) {
      FUN_1005944f1(param_1,puVar14,puVar10,param_4,param_5,lVar21,param_7,param_8);
      lVar21 = local_78 - lVar21;
      param_1 = puVar10;
      param_2 = puVar23;
      param_5 = lVar12 - param_5;
    }
    else {
      FUN_1005944f1(puVar10,puVar23,local_68,param_4,lVar12 - param_5,local_78 - lVar21,param_7,
                    param_8);
      param_2 = puVar14;
      local_68 = puVar10;
    }
    local_78 = lVar21;
    if (lVar21 == 0) {
      return;
    }
  } while( true );
}

