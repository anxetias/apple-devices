// name: FUN_10062420f
// address: 10062420f

void FUN_10062420f(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  long param_5,long param_6,undefined8 *param_7,long param_8)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  char cVar37;
  undefined8 *puVar38;
  long lVar39;
  undefined8 *puVar40;
  undefined8 *puVar41;
  long lVar42;
  long lVar43;
  size_t sVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  ulong uVar48;
  undefined8 *puVar49;
  ulong uVar50;
  undefined8 *puVar51;
  bool bVar52;
  long local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_68;
  undefined8 *local_60;
  long local_50;
  undefined8 *local_40;
  undefined8 *local_38;
  
  if (param_6 == 0) {
    return;
  }
  local_38 = param_7;
  local_60 = param_3;
  local_50 = param_6;
  do {
    if ((param_5 <= param_8) || (lVar39 = param_5, puVar38 = param_1, local_50 <= param_8)) {
      if (param_5 <= local_50) {
        if (param_1 == param_2) {
          return;
        }
        lVar39 = -(long)param_7;
        puVar38 = param_1;
        do {
          uVar18 = puVar38[0xb];
          param_7[10] = puVar38[10];
          param_7[0xb] = uVar18;
          uVar18 = puVar38[9];
          param_7[8] = puVar38[8];
          param_7[9] = uVar18;
          uVar3 = *(undefined4 *)puVar38;
          uVar4 = *(undefined4 *)((long)puVar38 + 4);
          uVar5 = *(undefined4 *)(puVar38 + 1);
          uVar6 = *(undefined4 *)((long)puVar38 + 0xc);
          uVar7 = *(undefined4 *)(puVar38 + 2);
          uVar8 = *(undefined4 *)((long)puVar38 + 0x14);
          uVar9 = *(undefined4 *)(puVar38 + 3);
          uVar10 = *(undefined4 *)((long)puVar38 + 0x1c);
          uVar11 = *(undefined4 *)(puVar38 + 4);
          uVar12 = *(undefined4 *)((long)puVar38 + 0x24);
          uVar13 = *(undefined4 *)(puVar38 + 5);
          uVar14 = *(undefined4 *)((long)puVar38 + 0x2c);
          uVar15 = *(undefined4 *)((long)puVar38 + 0x34);
          uVar16 = *(undefined4 *)(puVar38 + 7);
          uVar17 = *(undefined4 *)((long)puVar38 + 0x3c);
          *(undefined4 *)(param_7 + 6) = *(undefined4 *)(puVar38 + 6);
          *(undefined4 *)((long)param_7 + 0x34) = uVar15;
          *(undefined4 *)(param_7 + 7) = uVar16;
          *(undefined4 *)((long)param_7 + 0x3c) = uVar17;
          *(undefined4 *)(param_7 + 4) = uVar11;
          *(undefined4 *)((long)param_7 + 0x24) = uVar12;
          *(undefined4 *)(param_7 + 5) = uVar13;
          *(undefined4 *)((long)param_7 + 0x2c) = uVar14;
          *(undefined4 *)(param_7 + 2) = uVar7;
          *(undefined4 *)((long)param_7 + 0x14) = uVar8;
          *(undefined4 *)(param_7 + 3) = uVar9;
          *(undefined4 *)((long)param_7 + 0x1c) = uVar10;
          *(undefined4 *)param_7 = uVar3;
          *(undefined4 *)((long)param_7 + 4) = uVar4;
          *(undefined4 *)(param_7 + 1) = uVar5;
          *(undefined4 *)((long)param_7 + 0xc) = uVar6;
          puVar38 = puVar38 + 0xc;
          param_7 = param_7 + 0xc;
          lVar39 = lVar39 + -0x60;
        } while (puVar38 != param_2);
        do {
          if (param_2 == local_60) {
            _memmove(param_1,local_38,-(lVar39 + (long)local_38));
            return;
          }
          cVar37 = (*(code *)*param_4)(param_2,local_38);
          if (cVar37 == '\0') {
            uVar18 = local_38[0xb];
            param_1[10] = local_38[10];
            param_1[0xb] = uVar18;
            uVar18 = local_38[9];
            param_1[8] = local_38[8];
            param_1[9] = uVar18;
            uVar3 = *(undefined4 *)local_38;
            uVar4 = *(undefined4 *)((long)local_38 + 4);
            uVar5 = *(undefined4 *)(local_38 + 1);
            uVar6 = *(undefined4 *)((long)local_38 + 0xc);
            uVar7 = *(undefined4 *)(local_38 + 2);
            uVar8 = *(undefined4 *)((long)local_38 + 0x14);
            uVar9 = *(undefined4 *)(local_38 + 3);
            uVar10 = *(undefined4 *)((long)local_38 + 0x1c);
            uVar11 = *(undefined4 *)(local_38 + 4);
            uVar12 = *(undefined4 *)((long)local_38 + 0x24);
            uVar13 = *(undefined4 *)(local_38 + 5);
            uVar14 = *(undefined4 *)((long)local_38 + 0x2c);
            uVar15 = *(undefined4 *)((long)local_38 + 0x34);
            uVar16 = *(undefined4 *)(local_38 + 7);
            uVar17 = *(undefined4 *)((long)local_38 + 0x3c);
            *(undefined4 *)(param_1 + 6) = *(undefined4 *)(local_38 + 6);
            *(undefined4 *)((long)param_1 + 0x34) = uVar15;
            *(undefined4 *)(param_1 + 7) = uVar16;
            *(undefined4 *)((long)param_1 + 0x3c) = uVar17;
            *(undefined4 *)(param_1 + 4) = uVar11;
            *(undefined4 *)((long)param_1 + 0x24) = uVar12;
            *(undefined4 *)(param_1 + 5) = uVar13;
            *(undefined4 *)((long)param_1 + 0x2c) = uVar14;
            *(undefined4 *)(param_1 + 2) = uVar7;
            *(undefined4 *)((long)param_1 + 0x14) = uVar8;
            *(undefined4 *)(param_1 + 3) = uVar9;
            *(undefined4 *)((long)param_1 + 0x1c) = uVar10;
            *(undefined4 *)param_1 = uVar3;
            *(undefined4 *)((long)param_1 + 4) = uVar4;
            *(undefined4 *)(param_1 + 1) = uVar5;
            *(undefined4 *)((long)param_1 + 0xc) = uVar6;
            local_38 = local_38 + 0xc;
          }
          else {
            uVar18 = param_2[0xb];
            param_1[10] = param_2[10];
            param_1[0xb] = uVar18;
            uVar18 = param_2[9];
            param_1[8] = param_2[8];
            param_1[9] = uVar18;
            uVar3 = *(undefined4 *)param_2;
            uVar4 = *(undefined4 *)((long)param_2 + 4);
            uVar5 = *(undefined4 *)(param_2 + 1);
            uVar6 = *(undefined4 *)((long)param_2 + 0xc);
            uVar7 = *(undefined4 *)(param_2 + 2);
            uVar8 = *(undefined4 *)((long)param_2 + 0x14);
            uVar9 = *(undefined4 *)(param_2 + 3);
            uVar10 = *(undefined4 *)((long)param_2 + 0x1c);
            uVar11 = *(undefined4 *)(param_2 + 4);
            uVar12 = *(undefined4 *)((long)param_2 + 0x24);
            uVar13 = *(undefined4 *)(param_2 + 5);
            uVar14 = *(undefined4 *)((long)param_2 + 0x2c);
            uVar15 = *(undefined4 *)((long)param_2 + 0x34);
            uVar16 = *(undefined4 *)(param_2 + 7);
            uVar17 = *(undefined4 *)((long)param_2 + 0x3c);
            *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
            *(undefined4 *)((long)param_1 + 0x34) = uVar15;
            *(undefined4 *)(param_1 + 7) = uVar16;
            *(undefined4 *)((long)param_1 + 0x3c) = uVar17;
            *(undefined4 *)(param_1 + 4) = uVar11;
            *(undefined4 *)((long)param_1 + 0x24) = uVar12;
            *(undefined4 *)(param_1 + 5) = uVar13;
            *(undefined4 *)((long)param_1 + 0x2c) = uVar14;
            *(undefined4 *)(param_1 + 2) = uVar7;
            *(undefined4 *)((long)param_1 + 0x14) = uVar8;
            *(undefined4 *)(param_1 + 3) = uVar9;
            *(undefined4 *)((long)param_1 + 0x1c) = uVar10;
            *(undefined4 *)param_1 = uVar3;
            *(undefined4 *)((long)param_1 + 4) = uVar4;
            *(undefined4 *)(param_1 + 1) = uVar5;
            *(undefined4 *)((long)param_1 + 0xc) = uVar6;
            param_2 = param_2 + 0xc;
          }
          param_1 = param_1 + 0xc;
        } while (param_7 != local_38);
        return;
      }
      puVar38 = param_2;
      puVar49 = param_7;
      if (param_2 == local_60) {
        return;
      }
      do {
        uVar18 = puVar38[0xb];
        puVar49[10] = puVar38[10];
        puVar49[0xb] = uVar18;
        uVar18 = puVar38[9];
        puVar49[8] = puVar38[8];
        puVar49[9] = uVar18;
        uVar3 = *(undefined4 *)puVar38;
        uVar4 = *(undefined4 *)((long)puVar38 + 4);
        uVar5 = *(undefined4 *)(puVar38 + 1);
        uVar6 = *(undefined4 *)((long)puVar38 + 0xc);
        uVar7 = *(undefined4 *)(puVar38 + 2);
        uVar8 = *(undefined4 *)((long)puVar38 + 0x14);
        uVar9 = *(undefined4 *)(puVar38 + 3);
        uVar10 = *(undefined4 *)((long)puVar38 + 0x1c);
        uVar11 = *(undefined4 *)(puVar38 + 4);
        uVar12 = *(undefined4 *)((long)puVar38 + 0x24);
        uVar13 = *(undefined4 *)(puVar38 + 5);
        uVar14 = *(undefined4 *)((long)puVar38 + 0x2c);
        uVar15 = *(undefined4 *)((long)puVar38 + 0x34);
        uVar16 = *(undefined4 *)(puVar38 + 7);
        uVar17 = *(undefined4 *)((long)puVar38 + 0x3c);
        *(undefined4 *)(puVar49 + 6) = *(undefined4 *)(puVar38 + 6);
        *(undefined4 *)((long)puVar49 + 0x34) = uVar15;
        *(undefined4 *)(puVar49 + 7) = uVar16;
        *(undefined4 *)((long)puVar49 + 0x3c) = uVar17;
        *(undefined4 *)(puVar49 + 4) = uVar11;
        *(undefined4 *)((long)puVar49 + 0x24) = uVar12;
        *(undefined4 *)(puVar49 + 5) = uVar13;
        *(undefined4 *)((long)puVar49 + 0x2c) = uVar14;
        *(undefined4 *)(puVar49 + 2) = uVar7;
        *(undefined4 *)((long)puVar49 + 0x14) = uVar8;
        *(undefined4 *)(puVar49 + 3) = uVar9;
        *(undefined4 *)((long)puVar49 + 0x1c) = uVar10;
        *(undefined4 *)puVar49 = uVar3;
        *(undefined4 *)((long)puVar49 + 4) = uVar4;
        *(undefined4 *)(puVar49 + 1) = uVar5;
        *(undefined4 *)((long)puVar49 + 0xc) = uVar6;
        puVar38 = puVar38 + 0xc;
        puVar49 = puVar49 + 0xc;
      } while (puVar38 != local_60);
      do {
        puVar38 = local_60 + -0xc;
        if (param_2 == param_1) {
          lVar39 = 0;
          do {
            puVar41 = (undefined8 *)((long)puVar49 + lVar39 + -0x60);
            uVar18 = *(undefined8 *)((long)puVar49 + lVar39 + -8);
            puVar40 = (undefined8 *)((long)local_60 + lVar39 + -0x10);
            *puVar40 = *(undefined8 *)((long)puVar49 + lVar39 + -0x10);
            puVar40[1] = uVar18;
            uVar18 = *(undefined8 *)((long)puVar49 + lVar39 + -0x18);
            puVar40 = (undefined8 *)((long)local_60 + lVar39 + -0x20);
            *puVar40 = *(undefined8 *)((long)puVar49 + lVar39 + -0x20);
            puVar40[1] = uVar18;
            uVar18 = *puVar41;
            uVar19 = *(undefined8 *)((long)puVar49 + lVar39 + -0x58);
            uVar20 = *(undefined8 *)((long)puVar49 + lVar39 + -0x50);
            uVar21 = *(undefined8 *)((long)puVar49 + lVar39 + -0x48);
            uVar22 = *(undefined8 *)((long)puVar49 + lVar39 + -0x40);
            uVar23 = *(undefined8 *)((long)puVar49 + lVar39 + -0x38);
            uVar24 = *(undefined8 *)((long)puVar49 + lVar39 + -0x28);
            puVar40 = (undefined8 *)((long)local_60 + lVar39 + -0x30);
            *puVar40 = *(undefined8 *)((long)puVar49 + lVar39 + -0x30);
            puVar40[1] = uVar24;
            puVar40 = (undefined8 *)((long)local_60 + lVar39 + -0x40);
            *puVar40 = uVar22;
            puVar40[1] = uVar23;
            puVar40 = (undefined8 *)((long)local_60 + lVar39 + -0x50);
            *puVar40 = uVar20;
            puVar40[1] = uVar21;
            *(undefined8 *)((long)puVar38 + lVar39) = uVar18;
            ((undefined8 *)((long)puVar38 + lVar39))[1] = uVar19;
            lVar39 = lVar39 + -0x60;
          } while (puVar41 != param_7);
          return;
        }
        puVar40 = param_2 + -0xc;
        puVar41 = puVar49 + -0xc;
        cVar37 = (*(code *)*param_4)(puVar41,puVar40);
        puVar51 = puVar40;
        if (cVar37 == '\0') {
          puVar40 = param_2;
          puVar49 = puVar41;
          puVar51 = puVar41;
        }
        uVar18 = puVar51[1];
        uVar3 = *(undefined4 *)(puVar51 + 2);
        uVar4 = *(undefined4 *)((long)puVar51 + 0x14);
        uVar5 = *(undefined4 *)(puVar51 + 3);
        uVar6 = *(undefined4 *)((long)puVar51 + 0x1c);
        uVar7 = *(undefined4 *)(puVar51 + 4);
        uVar8 = *(undefined4 *)((long)puVar51 + 0x24);
        uVar9 = *(undefined4 *)(puVar51 + 5);
        uVar10 = *(undefined4 *)((long)puVar51 + 0x2c);
        uVar11 = *(undefined4 *)(puVar51 + 6);
        uVar12 = *(undefined4 *)((long)puVar51 + 0x34);
        uVar13 = *(undefined4 *)(puVar51 + 7);
        uVar14 = *(undefined4 *)((long)puVar51 + 0x3c);
        *puVar38 = *puVar51;
        local_60[-0xb] = uVar18;
        *(undefined4 *)(local_60 + -10) = uVar3;
        *(undefined4 *)((long)local_60 + -0x4c) = uVar4;
        *(undefined4 *)(local_60 + -9) = uVar5;
        *(undefined4 *)((long)local_60 + -0x44) = uVar6;
        *(undefined4 *)(local_60 + -8) = uVar7;
        *(undefined4 *)((long)local_60 + -0x3c) = uVar8;
        *(undefined4 *)(local_60 + -7) = uVar9;
        *(undefined4 *)((long)local_60 + -0x34) = uVar10;
        *(undefined4 *)(local_60 + -6) = uVar11;
        *(undefined4 *)((long)local_60 + -0x2c) = uVar12;
        *(undefined4 *)(local_60 + -5) = uVar13;
        *(undefined4 *)((long)local_60 + -0x24) = uVar14;
        uVar18 = puVar51[9];
        local_60[-4] = puVar51[8];
        local_60[-3] = uVar18;
        uVar3 = *(undefined4 *)((long)puVar51 + 0x54);
        uVar4 = *(undefined4 *)(puVar51 + 0xb);
        uVar5 = *(undefined4 *)((long)puVar51 + 0x5c);
        *(undefined4 *)(local_60 + -2) = *(undefined4 *)(puVar51 + 10);
        *(undefined4 *)((long)local_60 + -0xc) = uVar3;
        *(undefined4 *)(local_60 + -1) = uVar4;
        *(undefined4 *)((long)local_60 + -4) = uVar5;
        param_2 = puVar40;
        local_60 = puVar38;
      } while (puVar49 != param_7);
      return;
    }
    while( true ) {
      if (lVar39 == 0) {
        return;
      }
      cVar37 = (*(code *)*param_4)(param_2);
      if (cVar37 != '\0') break;
      param_1 = param_1 + 0xc;
      lVar39 = lVar39 + -1;
      puVar38 = puVar38 + 0xc;
    }
    if (lVar39 < local_50) {
      local_d0 = local_50 / 2;
      puVar49 = param_2 + local_d0 * 0xc;
      local_68 = param_1;
      puVar40 = param_2;
      puVar41 = param_2;
      if (param_1 != param_2) {
        uVar50 = ((long)param_2 - (long)puVar38 >> 5) * -0x5555555555555555;
        do {
          uVar48 = uVar50 >> 1;
          cVar37 = (*(code *)*param_4)(puVar49,local_68 + uVar48 * 0xc);
          if (cVar37 == '\0') {
            local_68 = local_68 + uVar48 * 0xc + 0xc;
            uVar48 = ~uVar48 + uVar50;
          }
          puVar40 = local_68;
          puVar41 = puVar38;
          uVar50 = uVar48;
        } while (uVar48 != 0);
      }
      param_5 = ((long)puVar40 - (long)puVar41 >> 5) * -0x5555555555555555;
    }
    else {
      if (lVar39 == 1) {
        uVar18 = param_1[10];
        uVar19 = param_1[0xb];
        uVar20 = param_1[8];
        uVar21 = param_1[9];
        uVar22 = *param_1;
        uVar23 = param_1[1];
        uVar24 = param_1[2];
        uVar25 = param_1[3];
        uVar26 = param_1[4];
        uVar27 = param_1[5];
        uVar28 = param_1[6];
        uVar29 = param_1[7];
        uVar30 = param_2[0xb];
        param_1[10] = param_2[10];
        param_1[0xb] = uVar30;
        uVar30 = param_2[9];
        param_1[8] = param_2[8];
        param_1[9] = uVar30;
        uVar30 = *param_2;
        uVar31 = param_2[1];
        uVar32 = param_2[2];
        uVar33 = param_2[3];
        uVar34 = param_2[4];
        uVar35 = param_2[5];
        uVar36 = param_2[7];
        param_1[6] = param_2[6];
        param_1[7] = uVar36;
        param_1[4] = uVar34;
        param_1[5] = uVar35;
        param_1[2] = uVar32;
        param_1[3] = uVar33;
        *param_1 = uVar30;
        param_1[1] = uVar31;
        param_2[10] = uVar18;
        param_2[0xb] = uVar19;
        param_2[8] = uVar20;
        param_2[9] = uVar21;
        param_2[6] = uVar28;
        param_2[7] = uVar29;
        param_2[4] = uVar26;
        param_2[5] = uVar27;
        param_2[2] = uVar24;
        param_2[3] = uVar25;
        *param_2 = uVar22;
        param_2[1] = uVar23;
        return;
      }
      param_5 = lVar39 / 2;
      local_68 = param_1 + param_5 * 0xc;
      puVar38 = local_60;
      local_40 = local_60;
      puVar49 = param_2;
      if ((long)local_60 - (long)param_2 != 0) {
        pcVar2 = (code *)*param_4;
        uVar50 = ((long)local_60 - (long)param_2 >> 5) * -0x5555555555555555;
        local_40 = param_2;
        do {
          uVar48 = uVar50 >> 1;
          cVar37 = (*pcVar2)(local_40 + uVar48 * 0xc,local_68);
          if (cVar37 != '\0') {
            local_40 = local_40 + uVar48 * 0xc + 0xc;
            uVar48 = ~uVar48 + uVar50;
          }
          puVar38 = param_2;
          puVar49 = local_40;
          uVar50 = uVar48;
        } while (uVar48 != 0);
      }
      local_d0 = ((long)local_40 - (long)puVar38 >> 5) * -0x5555555555555555;
    }
    puVar38 = puVar49;
    if ((local_68 != param_2) && (puVar38 = local_68, param_2 != puVar49)) {
      puVar40 = local_68 + 0xc;
      if (puVar40 == param_2) {
        uVar18 = local_68[10];
        uVar19 = local_68[0xb];
        uVar20 = local_68[8];
        uVar21 = local_68[9];
        uVar22 = *local_68;
        uVar23 = local_68[1];
        uVar24 = local_68[2];
        uVar25 = local_68[3];
        uVar26 = local_68[4];
        uVar27 = local_68[5];
        uVar28 = local_68[6];
        uVar29 = local_68[7];
        sVar44 = (long)puVar49 - (long)param_2;
        _memmove(local_68,puVar40,sVar44);
        *(undefined8 *)((long)local_68 + sVar44) = uVar22;
        ((undefined8 *)((long)local_68 + sVar44))[1] = uVar23;
        puVar38 = (undefined8 *)((long)local_68 + sVar44 + 0x10);
        *puVar38 = uVar24;
        puVar38[1] = uVar25;
        puVar38 = (undefined8 *)((long)local_68 + sVar44 + 0x20);
        *puVar38 = uVar26;
        puVar38[1] = uVar27;
        puVar38 = (undefined8 *)((long)local_68 + sVar44 + 0x30);
        *puVar38 = uVar28;
        puVar38[1] = uVar29;
        puVar38 = (undefined8 *)((long)local_68 + sVar44 + 0x40);
        *puVar38 = uVar20;
        puVar38[1] = uVar21;
        local_78 = (undefined4)uVar18;
        uStack_74 = (undefined4)((ulong)uVar18 >> 0x20);
        uStack_70 = (undefined4)uVar19;
        uStack_6c = (undefined4)((ulong)uVar19 >> 0x20);
        puVar1 = (undefined4 *)((long)local_68 + sVar44 + 0x50);
        *puVar1 = local_78;
        puVar1[1] = uStack_74;
        puVar1[2] = uStack_70;
        puVar1[3] = uStack_6c;
        puVar38 = (undefined8 *)((long)local_68 + sVar44);
      }
      else {
        puVar41 = param_2 + 0xc;
        if (puVar41 == puVar49) {
          uVar18 = puVar49[-2];
          uVar19 = puVar49[-1];
          uVar20 = puVar49[-4];
          uVar21 = puVar49[-3];
          uVar22 = puVar49[-0xc];
          uVar23 = puVar49[-0xb];
          uVar24 = puVar49[-10];
          uVar25 = puVar49[-9];
          uVar26 = puVar49[-8];
          uVar27 = puVar49[-7];
          uVar28 = puVar49[-6];
          uVar29 = puVar49[-5];
          sVar44 = (long)puVar49 + (-0x60 - (long)local_68);
          if (sVar44 != 0) {
            _memmove((undefined8 *)-(-0x60 - (long)local_68),local_68,sVar44);
          }
          local_68[10] = uVar18;
          local_68[0xb] = uVar19;
          local_68[8] = uVar20;
          local_68[9] = uVar21;
          local_c8 = (undefined4)uVar22;
          uStack_c4 = (undefined4)((ulong)uVar22 >> 0x20);
          uStack_c0 = (undefined4)uVar23;
          uStack_bc = (undefined4)((ulong)uVar23 >> 0x20);
          local_68[6] = uVar28;
          local_68[7] = uVar29;
          local_68[4] = uVar26;
          local_68[5] = uVar27;
          local_68[2] = uVar24;
          local_68[3] = uVar25;
          *(undefined4 *)local_68 = local_c8;
          *(undefined4 *)((long)local_68 + 4) = uStack_c4;
          *(undefined4 *)(local_68 + 1) = uStack_c0;
          *(undefined4 *)((long)local_68 + 0xc) = uStack_bc;
          puVar38 = (undefined8 *)-(-0x60 - (long)local_68);
        }
        else {
          lVar46 = (long)param_2 - (long)local_68 >> 5;
          lVar47 = lVar46 * -0x5555555555555555;
          lVar42 = (long)puVar49 - (long)param_2 >> 5;
          lVar43 = lVar42 * -0x5555555555555555;
          lVar45 = lVar47;
          if (lVar47 + lVar42 * 0x5555555555555555 == 0) {
            do {
              uVar18 = puVar40[-2];
              uVar19 = puVar40[-1];
              uVar20 = puVar40[-4];
              uVar21 = puVar40[-3];
              uVar22 = puVar40[-0xc];
              uVar23 = puVar40[-0xb];
              uVar24 = puVar40[-10];
              uVar25 = puVar40[-9];
              uVar26 = puVar40[-8];
              uVar27 = puVar40[-7];
              uVar28 = puVar40[-6];
              uVar29 = puVar40[-5];
              uVar30 = puVar41[-0xb];
              uVar31 = puVar41[-10];
              uVar32 = puVar41[-9];
              uVar33 = puVar41[-8];
              uVar34 = puVar41[-7];
              uVar35 = puVar41[-6];
              uVar36 = puVar41[-5];
              puVar40[-0xc] = puVar41[-0xc];
              puVar40[-0xb] = uVar30;
              puVar40[-10] = uVar31;
              puVar40[-9] = uVar32;
              puVar40[-8] = uVar33;
              puVar40[-7] = uVar34;
              puVar40[-6] = uVar35;
              puVar40[-5] = uVar36;
              uVar30 = puVar41[-3];
              puVar40[-4] = puVar41[-4];
              puVar40[-3] = uVar30;
              uVar30 = puVar41[-1];
              puVar40[-2] = puVar41[-2];
              puVar40[-1] = uVar30;
              local_c8 = (undefined4)uVar22;
              uStack_c4 = (undefined4)((ulong)uVar22 >> 0x20);
              uStack_c0 = (undefined4)uVar23;
              uStack_bc = (undefined4)((ulong)uVar23 >> 0x20);
              puVar41[-10] = uVar24;
              puVar41[-9] = uVar25;
              puVar41[-8] = uVar26;
              puVar41[-7] = uVar27;
              puVar41[-6] = uVar28;
              puVar41[-5] = uVar29;
              puVar41[-4] = uVar20;
              puVar41[-3] = uVar21;
              puVar41[-2] = uVar18;
              puVar41[-1] = uVar19;
              *(undefined4 *)(puVar41 + -0xc) = local_c8;
              *(undefined4 *)((long)puVar41 + -0x5c) = uStack_c4;
              *(undefined4 *)(puVar41 + -0xb) = uStack_c0;
              *(undefined4 *)((long)puVar41 + -0x54) = uStack_bc;
              puVar38 = param_2;
              if (puVar40 == param_2) break;
              puVar40 = puVar40 + 0xc;
              bVar52 = puVar41 != puVar49;
              puVar41 = puVar41 + 0xc;
            } while (bVar52);
          }
          else {
            do {
              lVar42 = lVar43;
              lVar43 = lVar45 % lVar42;
              lVar45 = lVar42;
            } while (lVar43 != 0);
            puVar38 = local_68 + lVar42 * 0xc;
            do {
              uVar18 = puVar38[-2];
              uVar19 = puVar38[-1];
              uVar20 = puVar38[-4];
              uVar21 = puVar38[-3];
              uVar22 = puVar38[-0xc];
              uVar23 = puVar38[-0xb];
              uVar24 = puVar38[-10];
              uVar25 = puVar38[-9];
              uVar26 = puVar38[-8];
              uVar27 = puVar38[-7];
              uVar28 = puVar38[-6];
              uVar29 = puVar38[-5];
              puVar40 = (undefined8 *)((long)puVar38 + ((long)param_2 - (long)local_68) + -0x60);
              puVar38 = puVar38 + -0xc;
              puVar41 = puVar38;
              do {
                puVar51 = puVar40;
                lVar43 = (long)puVar49 - (long)puVar51 >> 5;
                uVar30 = puVar51[0xb];
                puVar41[10] = puVar51[10];
                puVar41[0xb] = uVar30;
                uVar30 = puVar51[9];
                puVar41[8] = puVar51[8];
                puVar41[9] = uVar30;
                uVar30 = *puVar51;
                uVar31 = puVar51[1];
                uVar32 = puVar51[2];
                uVar33 = puVar51[3];
                uVar34 = puVar51[4];
                uVar35 = puVar51[5];
                uVar36 = puVar51[7];
                puVar41[6] = puVar51[6];
                puVar41[7] = uVar36;
                puVar41[4] = uVar34;
                puVar41[5] = uVar35;
                puVar41[2] = uVar32;
                puVar41[3] = uVar33;
                *puVar41 = uVar30;
                puVar41[1] = uVar31;
                puVar40 = local_68 + (lVar47 + lVar43 * 0x5555555555555555) * 0xc;
                if (lVar47 < lVar43 * -0x5555555555555555) {
                  puVar40 = puVar51 + lVar46 * 4;
                }
                puVar41 = puVar51;
              } while (puVar40 != puVar38);
              puVar51[10] = uVar18;
              puVar51[0xb] = uVar19;
              puVar51[8] = uVar20;
              puVar51[9] = uVar21;
              local_c8 = (undefined4)uVar22;
              uStack_c4 = (undefined4)((ulong)uVar22 >> 0x20);
              uStack_c0 = (undefined4)uVar23;
              uStack_bc = (undefined4)((ulong)uVar23 >> 0x20);
              puVar51[6] = uVar28;
              puVar51[7] = uVar29;
              puVar51[4] = uVar26;
              puVar51[5] = uVar27;
              puVar51[2] = uVar24;
              puVar51[3] = uVar25;
              *(undefined4 *)puVar51 = local_c8;
              *(undefined4 *)((long)puVar51 + 4) = uStack_c4;
              *(undefined4 *)(puVar51 + 1) = uStack_c0;
              *(undefined4 *)((long)puVar51 + 0xc) = uStack_bc;
            } while (puVar38 != local_68);
            puVar38 = (undefined8 *)(((long)puVar49 - (long)param_2) + (long)local_68);
          }
        }
      }
    }
    if (param_5 + local_d0 < (local_50 - (param_5 + local_d0)) + lVar39) {
      FUN_10062420f(param_1,local_68,puVar38,param_4,param_5,local_d0,param_7,param_8);
      param_5 = lVar39 - param_5;
      param_1 = puVar38;
      local_d0 = local_50 - local_d0;
      param_2 = puVar49;
    }
    else {
      FUN_10062420f(puVar38,puVar49,local_60,param_4,lVar39 - param_5,local_50 - local_d0,param_7,
                    param_8);
      param_2 = local_68;
      local_60 = puVar38;
    }
    local_50 = local_d0;
    if (local_d0 == 0) {
      return;
    }
  } while( true );
}

