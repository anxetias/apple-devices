// name: FUN_100623d88
// address: 100623d88

void FUN_100623d88(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  
  if (param_4 != 0) {
    if (param_4 == 2) {
      puVar12 = param_2 + -0xc;
      cVar9 = (*(code *)*param_3)(puVar12,param_1);
      if (cVar9 == '\0') {
        uVar2 = param_1[0xb];
        param_5[10] = param_1[10];
        param_5[0xb] = uVar2;
        uVar2 = param_1[9];
        param_5[8] = param_1[8];
        param_5[9] = uVar2;
        uVar2 = *param_1;
        uVar3 = param_1[1];
        uVar4 = param_1[2];
        uVar5 = param_1[3];
        uVar6 = param_1[4];
        uVar7 = param_1[5];
        uVar8 = param_1[7];
        param_5[6] = param_1[6];
        param_5[7] = uVar8;
        param_5[4] = uVar6;
        param_5[5] = uVar7;
        param_5[2] = uVar4;
        param_5[3] = uVar5;
        *param_5 = uVar2;
        param_5[1] = uVar3;
        uVar2 = param_2[-1];
        param_5[0x16] = param_2[-2];
        param_5[0x17] = uVar2;
        uVar2 = param_2[-3];
        param_5[0x14] = param_2[-4];
        param_5[0x15] = uVar2;
        uVar16 = *(undefined4 *)puVar12;
        uVar17 = *(undefined4 *)((long)param_2 + -0x5c);
        uVar18 = *(undefined4 *)(param_2 + -0xb);
        uVar19 = *(undefined4 *)((long)param_2 + -0x54);
        uVar20 = *(undefined4 *)(param_2 + -10);
        uVar21 = *(undefined4 *)((long)param_2 + -0x4c);
        uVar22 = *(undefined4 *)(param_2 + -9);
        uVar23 = *(undefined4 *)((long)param_2 + -0x44);
        uVar24 = *(undefined4 *)(param_2 + -8);
        uVar25 = *(undefined4 *)((long)param_2 + -0x3c);
        uVar26 = *(undefined4 *)(param_2 + -7);
        uVar27 = *(undefined4 *)((long)param_2 + -0x34);
        uVar28 = *(undefined4 *)(param_2 + -6);
        uVar29 = *(undefined4 *)((long)param_2 + -0x2c);
        uVar30 = *(undefined4 *)(param_2 + -5);
        uVar31 = *(undefined4 *)((long)param_2 + -0x24);
      }
      else {
        uVar2 = param_2[-1];
        param_5[10] = param_2[-2];
        param_5[0xb] = uVar2;
        uVar2 = param_2[-3];
        param_5[8] = param_2[-4];
        param_5[9] = uVar2;
        uVar2 = *puVar12;
        uVar3 = param_2[-0xb];
        uVar4 = param_2[-10];
        uVar5 = param_2[-9];
        uVar6 = param_2[-8];
        uVar7 = param_2[-7];
        uVar8 = param_2[-5];
        param_5[6] = param_2[-6];
        param_5[7] = uVar8;
        param_5[4] = uVar6;
        param_5[5] = uVar7;
        param_5[2] = uVar4;
        param_5[3] = uVar5;
        *param_5 = uVar2;
        param_5[1] = uVar3;
        uVar2 = param_1[0xb];
        param_5[0x16] = param_1[10];
        param_5[0x17] = uVar2;
        uVar2 = param_1[9];
        param_5[0x14] = param_1[8];
        param_5[0x15] = uVar2;
        uVar16 = *(undefined4 *)param_1;
        uVar17 = *(undefined4 *)((long)param_1 + 4);
        uVar18 = *(undefined4 *)(param_1 + 1);
        uVar19 = *(undefined4 *)((long)param_1 + 0xc);
        uVar20 = *(undefined4 *)(param_1 + 2);
        uVar21 = *(undefined4 *)((long)param_1 + 0x14);
        uVar22 = *(undefined4 *)(param_1 + 3);
        uVar23 = *(undefined4 *)((long)param_1 + 0x1c);
        uVar24 = *(undefined4 *)(param_1 + 4);
        uVar25 = *(undefined4 *)((long)param_1 + 0x24);
        uVar26 = *(undefined4 *)(param_1 + 5);
        uVar27 = *(undefined4 *)((long)param_1 + 0x2c);
        uVar28 = *(undefined4 *)(param_1 + 6);
        uVar29 = *(undefined4 *)((long)param_1 + 0x34);
        uVar30 = *(undefined4 *)(param_1 + 7);
        uVar31 = *(undefined4 *)((long)param_1 + 0x3c);
      }
      *(undefined4 *)(param_5 + 0x12) = uVar28;
      *(undefined4 *)((long)param_5 + 0x94) = uVar29;
      *(undefined4 *)(param_5 + 0x13) = uVar30;
      *(undefined4 *)((long)param_5 + 0x9c) = uVar31;
      *(undefined4 *)(param_5 + 0x10) = uVar24;
      *(undefined4 *)((long)param_5 + 0x84) = uVar25;
      *(undefined4 *)(param_5 + 0x11) = uVar26;
      *(undefined4 *)((long)param_5 + 0x8c) = uVar27;
      *(undefined4 *)(param_5 + 0xe) = uVar20;
      *(undefined4 *)((long)param_5 + 0x74) = uVar21;
      *(undefined4 *)(param_5 + 0xf) = uVar22;
      *(undefined4 *)((long)param_5 + 0x7c) = uVar23;
      *(undefined4 *)(param_5 + 0xc) = uVar16;
      *(undefined4 *)((long)param_5 + 100) = uVar17;
      *(undefined4 *)(param_5 + 0xd) = uVar18;
      *(undefined4 *)((long)param_5 + 0x6c) = uVar19;
    }
    else if (param_4 == 1) {
      uVar2 = param_1[0xb];
      param_5[10] = param_1[10];
      param_5[0xb] = uVar2;
      uVar2 = param_1[9];
      param_5[8] = param_1[8];
      param_5[9] = uVar2;
      uVar2 = *param_1;
      uVar3 = param_1[1];
      uVar4 = param_1[2];
      uVar5 = param_1[3];
      uVar6 = param_1[4];
      uVar7 = param_1[5];
      uVar8 = param_1[7];
      param_5[6] = param_1[6];
      param_5[7] = uVar8;
      param_5[4] = uVar6;
      param_5[5] = uVar7;
      param_5[2] = uVar4;
      param_5[3] = uVar5;
      *param_5 = uVar2;
      param_5[1] = uVar3;
    }
    else if ((long)param_4 < 9) {
      if (param_1 != param_2) {
        uVar2 = param_1[0xb];
        param_5[10] = param_1[10];
        param_5[0xb] = uVar2;
        uVar2 = param_1[9];
        param_5[8] = param_1[8];
        param_5[9] = uVar2;
        uVar16 = *(undefined4 *)param_1;
        uVar17 = *(undefined4 *)((long)param_1 + 4);
        uVar18 = *(undefined4 *)(param_1 + 1);
        uVar19 = *(undefined4 *)((long)param_1 + 0xc);
        uVar20 = *(undefined4 *)(param_1 + 2);
        uVar21 = *(undefined4 *)((long)param_1 + 0x14);
        uVar22 = *(undefined4 *)(param_1 + 3);
        uVar23 = *(undefined4 *)((long)param_1 + 0x1c);
        uVar24 = *(undefined4 *)(param_1 + 4);
        uVar25 = *(undefined4 *)((long)param_1 + 0x24);
        uVar26 = *(undefined4 *)(param_1 + 5);
        uVar27 = *(undefined4 *)((long)param_1 + 0x2c);
        uVar28 = *(undefined4 *)((long)param_1 + 0x34);
        uVar29 = *(undefined4 *)(param_1 + 7);
        uVar30 = *(undefined4 *)((long)param_1 + 0x3c);
        *(undefined4 *)(param_5 + 6) = *(undefined4 *)(param_1 + 6);
        *(undefined4 *)((long)param_5 + 0x34) = uVar28;
        *(undefined4 *)(param_5 + 7) = uVar29;
        *(undefined4 *)((long)param_5 + 0x3c) = uVar30;
        *(undefined4 *)(param_5 + 4) = uVar24;
        *(undefined4 *)((long)param_5 + 0x24) = uVar25;
        *(undefined4 *)(param_5 + 5) = uVar26;
        *(undefined4 *)((long)param_5 + 0x2c) = uVar27;
        *(undefined4 *)(param_5 + 2) = uVar20;
        *(undefined4 *)((long)param_5 + 0x14) = uVar21;
        *(undefined4 *)(param_5 + 3) = uVar22;
        *(undefined4 *)((long)param_5 + 0x1c) = uVar23;
        *(undefined4 *)param_5 = uVar16;
        *(undefined4 *)((long)param_5 + 4) = uVar17;
        *(undefined4 *)(param_5 + 1) = uVar18;
        *(undefined4 *)((long)param_5 + 0xc) = uVar19;
        param_1 = param_1 + 0xc;
        if (param_1 != param_2) {
          lVar14 = 0;
          puVar12 = param_5;
          do {
            puVar15 = puVar12 + 0xc;
            cVar9 = (*(code *)*param_3)(param_1,puVar12);
            puVar10 = puVar15;
            if (cVar9 != '\0') {
              puVar12[0x16] = puVar12[10];
              puVar12[0x17] = puVar12[0xb];
              puVar12[0x14] = puVar12[8];
              puVar12[0x15] = puVar12[9];
              *(undefined4 *)(puVar12 + 0x12) = *(undefined4 *)(puVar12 + 6);
              *(undefined4 *)((long)puVar12 + 0x94) = *(undefined4 *)((long)puVar12 + 0x34);
              *(undefined4 *)(puVar12 + 0x13) = *(undefined4 *)(puVar12 + 7);
              *(undefined4 *)((long)puVar12 + 0x9c) = *(undefined4 *)((long)puVar12 + 0x3c);
              *(undefined4 *)(puVar12 + 0x10) = *(undefined4 *)(puVar12 + 4);
              *(undefined4 *)((long)puVar12 + 0x84) = *(undefined4 *)((long)puVar12 + 0x24);
              *(undefined4 *)(puVar12 + 0x11) = *(undefined4 *)(puVar12 + 5);
              *(undefined4 *)((long)puVar12 + 0x8c) = *(undefined4 *)((long)puVar12 + 0x2c);
              *(undefined4 *)(puVar12 + 0xe) = *(undefined4 *)(puVar12 + 2);
              *(undefined4 *)((long)puVar12 + 0x74) = *(undefined4 *)((long)puVar12 + 0x14);
              *(undefined4 *)(puVar12 + 0xf) = *(undefined4 *)(puVar12 + 3);
              *(undefined4 *)((long)puVar12 + 0x7c) = *(undefined4 *)((long)puVar12 + 0x1c);
              *(undefined4 *)puVar15 = *(undefined4 *)puVar12;
              *(undefined4 *)((long)puVar12 + 100) = *(undefined4 *)((long)puVar12 + 4);
              *(undefined4 *)(puVar12 + 0xd) = *(undefined4 *)(puVar12 + 1);
              *(undefined4 *)((long)puVar12 + 0x6c) = *(undefined4 *)((long)puVar12 + 0xc);
              puVar10 = param_5;
              lVar13 = lVar14;
              if (puVar12 != param_5) {
                do {
                  puVar1 = puVar12 + -0xc;
                  cVar9 = (*(code *)*param_3)(param_1,puVar1);
                  puVar10 = puVar12;
                  if (cVar9 == '\0') break;
                  puVar12[10] = puVar12[-2];
                  puVar12[0xb] = puVar12[-1];
                  puVar12[8] = puVar12[-4];
                  puVar12[9] = puVar12[-3];
                  *(undefined4 *)(puVar12 + 6) = *(undefined4 *)(puVar12 + -6);
                  *(undefined4 *)((long)puVar12 + 0x34) = *(undefined4 *)((long)puVar12 + -0x2c);
                  *(undefined4 *)(puVar12 + 7) = *(undefined4 *)(puVar12 + -5);
                  *(undefined4 *)((long)puVar12 + 0x3c) = *(undefined4 *)((long)puVar12 + -0x24);
                  *(undefined4 *)(puVar12 + 4) = *(undefined4 *)(puVar12 + -8);
                  *(undefined4 *)((long)puVar12 + 0x24) = *(undefined4 *)((long)puVar12 + -0x3c);
                  *(undefined4 *)(puVar12 + 5) = *(undefined4 *)(puVar12 + -7);
                  *(undefined4 *)((long)puVar12 + 0x2c) = *(undefined4 *)((long)puVar12 + -0x34);
                  *(undefined4 *)(puVar12 + 2) = *(undefined4 *)(puVar12 + -10);
                  *(undefined4 *)((long)puVar12 + 0x14) = *(undefined4 *)((long)puVar12 + -0x4c);
                  *(undefined4 *)(puVar12 + 3) = *(undefined4 *)(puVar12 + -9);
                  *(undefined4 *)((long)puVar12 + 0x1c) = *(undefined4 *)((long)puVar12 + -0x44);
                  *(undefined4 *)puVar12 = *(undefined4 *)puVar1;
                  *(undefined4 *)((long)puVar12 + 4) = *(undefined4 *)((long)puVar12 + -0x5c);
                  *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar12 + -0xb);
                  *(undefined4 *)((long)puVar12 + 0xc) = *(undefined4 *)((long)puVar12 + -0x54);
                  lVar13 = lVar13 + 0x60;
                  puVar10 = param_5;
                  puVar12 = puVar1;
                } while (lVar13 != 0);
              }
            }
            uVar2 = param_1[0xb];
            puVar10[10] = param_1[10];
            puVar10[0xb] = uVar2;
            uVar2 = param_1[9];
            puVar10[8] = param_1[8];
            puVar10[9] = uVar2;
            uVar16 = *(undefined4 *)param_1;
            uVar17 = *(undefined4 *)((long)param_1 + 4);
            uVar18 = *(undefined4 *)(param_1 + 1);
            uVar19 = *(undefined4 *)((long)param_1 + 0xc);
            uVar20 = *(undefined4 *)(param_1 + 2);
            uVar21 = *(undefined4 *)((long)param_1 + 0x14);
            uVar22 = *(undefined4 *)(param_1 + 3);
            uVar23 = *(undefined4 *)((long)param_1 + 0x1c);
            uVar24 = *(undefined4 *)(param_1 + 4);
            uVar25 = *(undefined4 *)((long)param_1 + 0x24);
            uVar26 = *(undefined4 *)(param_1 + 5);
            uVar27 = *(undefined4 *)((long)param_1 + 0x2c);
            uVar28 = *(undefined4 *)((long)param_1 + 0x34);
            uVar29 = *(undefined4 *)(param_1 + 7);
            uVar30 = *(undefined4 *)((long)param_1 + 0x3c);
            *(undefined4 *)(puVar10 + 6) = *(undefined4 *)(param_1 + 6);
            *(undefined4 *)((long)puVar10 + 0x34) = uVar28;
            *(undefined4 *)(puVar10 + 7) = uVar29;
            *(undefined4 *)((long)puVar10 + 0x3c) = uVar30;
            *(undefined4 *)(puVar10 + 4) = uVar24;
            *(undefined4 *)((long)puVar10 + 0x24) = uVar25;
            *(undefined4 *)(puVar10 + 5) = uVar26;
            *(undefined4 *)((long)puVar10 + 0x2c) = uVar27;
            *(undefined4 *)(puVar10 + 2) = uVar20;
            *(undefined4 *)((long)puVar10 + 0x14) = uVar21;
            *(undefined4 *)(puVar10 + 3) = uVar22;
            *(undefined4 *)((long)puVar10 + 0x1c) = uVar23;
            *(undefined4 *)puVar10 = uVar16;
            *(undefined4 *)((long)puVar10 + 4) = uVar17;
            *(undefined4 *)(puVar10 + 1) = uVar18;
            *(undefined4 *)((long)puVar10 + 0xc) = uVar19;
            param_1 = param_1 + 0xc;
            lVar14 = lVar14 + -0x60;
            puVar12 = puVar15;
          } while (param_1 != param_2);
        }
      }
    }
    else {
      uVar11 = param_4 >> 1;
      puVar12 = param_1 + uVar11 * 0xc;
      FUN_10062392f(param_1,puVar12,param_3,uVar11,param_5,uVar11);
      FUN_10062392f(puVar12,param_2,param_3,param_4 - uVar11,param_5 + uVar11 * 0xc,param_4 - uVar11
                   );
      puVar15 = puVar12;
      do {
        puVar10 = param_5;
        if (puVar15 == param_2) {
          if (param_1 == puVar12) {
            return;
          }
          lVar14 = 0;
          do {
            puVar15 = (undefined8 *)((long)param_1 + lVar14);
            uVar2 = puVar15[0xb];
            puVar1 = (undefined8 *)((long)puVar10 + lVar14 + 0x50);
            *puVar1 = puVar15[10];
            puVar1[1] = uVar2;
            uVar2 = puVar15[9];
            puVar1 = (undefined8 *)((long)puVar10 + lVar14 + 0x40);
            *puVar1 = puVar15[8];
            puVar1[1] = uVar2;
            uVar2 = *puVar15;
            uVar3 = puVar15[1];
            uVar4 = puVar15[2];
            uVar5 = puVar15[3];
            uVar6 = puVar15[4];
            uVar7 = puVar15[5];
            uVar8 = puVar15[7];
            puVar1 = (undefined8 *)((long)puVar10 + lVar14 + 0x30);
            *puVar1 = puVar15[6];
            puVar1[1] = uVar8;
            puVar1 = (undefined8 *)((long)puVar10 + lVar14 + 0x20);
            *puVar1 = uVar6;
            puVar1[1] = uVar7;
            puVar1 = (undefined8 *)((long)puVar10 + lVar14 + 0x10);
            *puVar1 = uVar4;
            puVar1[1] = uVar5;
            *(undefined8 *)((long)puVar10 + lVar14) = uVar2;
            ((undefined8 *)((long)puVar10 + lVar14))[1] = uVar3;
            lVar14 = lVar14 + 0x60;
          } while (puVar15 + 0xc != puVar12);
          return;
        }
        cVar9 = (*(code *)*param_3)(puVar15,param_1);
        if (cVar9 == '\0') {
          uVar2 = param_1[0xb];
          puVar10[10] = param_1[10];
          puVar10[0xb] = uVar2;
          uVar2 = param_1[9];
          puVar10[8] = param_1[8];
          puVar10[9] = uVar2;
          uVar16 = *(undefined4 *)param_1;
          uVar17 = *(undefined4 *)((long)param_1 + 4);
          uVar18 = *(undefined4 *)(param_1 + 1);
          uVar19 = *(undefined4 *)((long)param_1 + 0xc);
          uVar2 = param_1[2];
          uVar3 = param_1[3];
          uVar4 = param_1[4];
          uVar5 = param_1[5];
          uVar6 = param_1[7];
          puVar10[6] = param_1[6];
          puVar10[7] = uVar6;
          puVar10[4] = uVar4;
          puVar10[5] = uVar5;
          puVar10[2] = uVar2;
          puVar10[3] = uVar3;
          *(undefined4 *)puVar10 = uVar16;
          *(undefined4 *)((long)puVar10 + 4) = uVar17;
          *(undefined4 *)(puVar10 + 1) = uVar18;
          *(undefined4 *)((long)puVar10 + 0xc) = uVar19;
          param_1 = param_1 + 0xc;
        }
        else {
          uVar2 = puVar15[0xb];
          puVar10[10] = puVar15[10];
          puVar10[0xb] = uVar2;
          uVar2 = puVar15[9];
          puVar10[8] = puVar15[8];
          puVar10[9] = uVar2;
          uVar16 = *(undefined4 *)puVar15;
          uVar17 = *(undefined4 *)((long)puVar15 + 4);
          uVar18 = *(undefined4 *)(puVar15 + 1);
          uVar19 = *(undefined4 *)((long)puVar15 + 0xc);
          uVar2 = puVar15[2];
          uVar3 = puVar15[3];
          uVar4 = puVar15[4];
          uVar5 = puVar15[5];
          uVar6 = puVar15[7];
          puVar10[6] = puVar15[6];
          puVar10[7] = uVar6;
          puVar10[4] = uVar4;
          puVar10[5] = uVar5;
          puVar10[2] = uVar2;
          puVar10[3] = uVar3;
          *(undefined4 *)puVar10 = uVar16;
          *(undefined4 *)((long)puVar10 + 4) = uVar17;
          *(undefined4 *)(puVar10 + 1) = uVar18;
          *(undefined4 *)((long)puVar10 + 0xc) = uVar19;
          puVar15 = puVar15 + 0xc;
        }
        param_5 = puVar10 + 0xc;
      } while (param_1 != puVar12);
      if (puVar15 != param_2) {
        lVar14 = 0;
        do {
          puVar12 = (undefined8 *)(lVar14 + (long)puVar15);
          uVar2 = puVar12[0xb];
          puVar1 = (undefined8 *)((long)puVar10 + lVar14 + 0xb0);
          *puVar1 = puVar12[10];
          puVar1[1] = uVar2;
          uVar2 = puVar12[9];
          puVar1 = (undefined8 *)((long)puVar10 + lVar14 + 0xa0);
          *puVar1 = puVar12[8];
          puVar1[1] = uVar2;
          uVar2 = *puVar12;
          uVar3 = puVar12[1];
          uVar4 = puVar12[2];
          uVar5 = puVar12[3];
          uVar6 = puVar12[4];
          uVar7 = puVar12[5];
          uVar8 = puVar12[7];
          puVar1 = (undefined8 *)((long)puVar10 + lVar14 + 0x90);
          *puVar1 = puVar12[6];
          puVar1[1] = uVar8;
          puVar1 = (undefined8 *)((long)puVar10 + lVar14 + 0x80);
          *puVar1 = uVar6;
          puVar1[1] = uVar7;
          puVar1 = (undefined8 *)((long)puVar10 + lVar14 + 0x70);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          puVar1 = (undefined8 *)((long)(puVar10 + 0xc) + lVar14);
          *puVar1 = uVar2;
          puVar1[1] = uVar3;
          lVar14 = lVar14 + 0x60;
        } while (puVar12 + 0xc != param_2);
      }
    }
  }
  return;
}

