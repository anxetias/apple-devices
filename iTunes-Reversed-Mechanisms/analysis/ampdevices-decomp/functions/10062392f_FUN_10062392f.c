// name: FUN_10062392f
// address: 10062392f

void FUN_10062392f(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4,
                  undefined8 *param_5,long param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  char cVar26;
  ulong uVar27;
  long lVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  long lVar32;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  
  if (1 < param_4) {
    local_40 = param_1;
    if (param_4 == 2) {
      puVar29 = param_2 + -0xc;
      cVar26 = (*(code *)*param_3)(puVar29,param_1);
      if (cVar26 != '\0') {
        uVar7 = local_40[10];
        uVar8 = local_40[0xb];
        uVar9 = local_40[8];
        uVar10 = local_40[9];
        uVar11 = *local_40;
        uVar12 = local_40[1];
        uVar13 = local_40[2];
        uVar14 = local_40[3];
        uVar15 = local_40[4];
        uVar16 = local_40[5];
        uVar17 = local_40[6];
        uVar18 = local_40[7];
        uVar19 = param_2[-1];
        local_40[10] = param_2[-2];
        local_40[0xb] = uVar19;
        uVar19 = param_2[-3];
        local_40[8] = param_2[-4];
        local_40[9] = uVar19;
        uVar19 = *puVar29;
        uVar20 = param_2[-0xb];
        uVar21 = param_2[-10];
        uVar22 = param_2[-9];
        uVar23 = param_2[-8];
        uVar24 = param_2[-7];
        uVar25 = param_2[-5];
        local_40[6] = param_2[-6];
        local_40[7] = uVar25;
        local_40[4] = uVar23;
        local_40[5] = uVar24;
        local_40[2] = uVar21;
        local_40[3] = uVar22;
        *local_40 = uVar19;
        local_40[1] = uVar20;
        param_2[-2] = uVar7;
        param_2[-1] = uVar8;
        param_2[-4] = uVar9;
        param_2[-3] = uVar10;
        param_2[-6] = uVar17;
        param_2[-5] = uVar18;
        param_2[-8] = uVar15;
        param_2[-7] = uVar16;
        param_2[-10] = uVar13;
        param_2[-9] = uVar14;
        *puVar29 = uVar11;
        param_2[-0xb] = uVar12;
      }
    }
    else if ((long)param_4 < 0x81) {
      if (param_1 + 0xc != param_2 && param_1 != param_2) {
        lVar28 = 0;
        puVar29 = param_1 + 0xc;
        do {
          puVar31 = puVar29;
          cVar26 = (*(code *)*param_3)(puVar31,param_1);
          if (cVar26 != '\0') {
            local_58 = puVar31[10];
            uStack_50 = puVar31[0xb];
            local_68 = puVar31[8];
            uStack_60 = puVar31[9];
            local_a8 = *puVar31;
            uStack_a0 = puVar31[1];
            local_98 = puVar31[2];
            uStack_90 = puVar31[3];
            local_88 = puVar31[4];
            uStack_80 = puVar31[5];
            local_78 = puVar31[6];
            uStack_70 = puVar31[7];
            puVar29 = puVar31;
            lVar32 = lVar28;
            do {
              puVar29[10] = puVar29[-2];
              puVar29[0xb] = puVar29[-1];
              puVar29[8] = puVar29[-4];
              puVar29[9] = puVar29[-3];
              *(undefined4 *)(puVar29 + 6) = *(undefined4 *)(puVar29 + -6);
              *(undefined4 *)((long)puVar29 + 0x34) = *(undefined4 *)((long)puVar29 + -0x2c);
              *(undefined4 *)(puVar29 + 7) = *(undefined4 *)(puVar29 + -5);
              *(undefined4 *)((long)puVar29 + 0x3c) = *(undefined4 *)((long)puVar29 + -0x24);
              *(undefined4 *)(puVar29 + 4) = *(undefined4 *)(puVar29 + -8);
              *(undefined4 *)((long)puVar29 + 0x24) = *(undefined4 *)((long)puVar29 + -0x3c);
              *(undefined4 *)(puVar29 + 5) = *(undefined4 *)(puVar29 + -7);
              *(undefined4 *)((long)puVar29 + 0x2c) = *(undefined4 *)((long)puVar29 + -0x34);
              *(undefined4 *)(puVar29 + 2) = *(undefined4 *)(puVar29 + -10);
              *(undefined4 *)((long)puVar29 + 0x14) = *(undefined4 *)((long)puVar29 + -0x4c);
              *(undefined4 *)(puVar29 + 3) = *(undefined4 *)(puVar29 + -9);
              *(undefined4 *)((long)puVar29 + 0x1c) = *(undefined4 *)((long)puVar29 + -0x44);
              *(undefined4 *)puVar29 = *(undefined4 *)(puVar29 + -0xc);
              *(undefined4 *)((long)puVar29 + 4) = *(undefined4 *)((long)puVar29 + -0x5c);
              *(undefined4 *)(puVar29 + 1) = *(undefined4 *)(puVar29 + -0xb);
              *(undefined4 *)((long)puVar29 + 0xc) = *(undefined4 *)((long)puVar29 + -0x54);
              puVar30 = local_40;
              if (lVar32 == 0) break;
              cVar26 = (*(code *)*param_3)(&local_a8,puVar29 + -0x18);
              puVar30 = puVar29 + -0xc;
              lVar32 = lVar32 + 0x60;
              puVar29 = puVar30;
            } while (cVar26 != '\0');
            puVar30[10] = local_58;
            puVar30[0xb] = uStack_50;
            puVar30[8] = local_68;
            puVar30[9] = uStack_60;
            puVar30[6] = local_78;
            puVar30[7] = uStack_70;
            puVar30[4] = local_88;
            puVar30[5] = uStack_80;
            puVar30[2] = local_98;
            puVar30[3] = uStack_90;
            *(undefined4 *)puVar30 = (undefined4)local_a8;
            *(undefined4 *)((long)puVar30 + 4) = local_a8._4_4_;
            *(undefined4 *)(puVar30 + 1) = (undefined4)uStack_a0;
            *(undefined4 *)((long)puVar30 + 0xc) = uStack_a0._4_4_;
          }
          lVar28 = lVar28 + -0x60;
          puVar29 = puVar31 + 0xc;
          param_1 = puVar31;
        } while (puVar31 + 0xc != param_2);
      }
    }
    else {
      uVar27 = param_4 >> 1;
      local_38 = (undefined8 *)(uVar27 * 0x60);
      puVar29 = param_1 + uVar27 * 0xc;
      local_48 = param_4 - uVar27;
      if (param_6 < (long)param_4) {
        local_38 = (undefined8 *)param_6;
        FUN_10062392f(param_1,puVar29,param_3,uVar27,param_5);
        FUN_10062392f(puVar29,param_2,param_3,local_48,param_5,local_38);
        FUN_10062420f(param_1,puVar29,param_2,param_3,uVar27,local_48,param_5,local_38);
      }
      else {
        FUN_100623d88(param_1,puVar29,param_3,uVar27,param_5);
        local_38 = (undefined8 *)((long)local_38 + (long)param_5);
        FUN_100623d88(puVar29,param_2,param_3,local_48,local_38);
        puVar31 = param_5 + param_4 * 0xc;
        puVar29 = local_38;
        do {
          puVar30 = param_1;
          if (puVar29 == puVar31) {
            if (param_5 == local_38) {
              return;
            }
            lVar28 = 0;
            do {
              puVar29 = (undefined8 *)((long)param_5 + lVar28);
              uVar7 = puVar29[0xb];
              puVar31 = (undefined8 *)((long)puVar30 + lVar28 + 0x50);
              *puVar31 = puVar29[10];
              puVar31[1] = uVar7;
              uVar7 = puVar29[9];
              puVar31 = (undefined8 *)((long)puVar30 + lVar28 + 0x40);
              *puVar31 = puVar29[8];
              puVar31[1] = uVar7;
              uVar7 = *puVar29;
              uVar8 = puVar29[1];
              uVar9 = puVar29[2];
              uVar10 = puVar29[3];
              uVar11 = puVar29[4];
              uVar12 = puVar29[5];
              uVar13 = puVar29[7];
              puVar31 = (undefined8 *)((long)puVar30 + lVar28 + 0x30);
              *puVar31 = puVar29[6];
              puVar31[1] = uVar13;
              puVar31 = (undefined8 *)((long)puVar30 + lVar28 + 0x20);
              *puVar31 = uVar11;
              puVar31[1] = uVar12;
              puVar31 = (undefined8 *)((long)puVar30 + lVar28 + 0x10);
              *puVar31 = uVar9;
              puVar31[1] = uVar10;
              *(undefined8 *)((long)puVar30 + lVar28) = uVar7;
              ((undefined8 *)((long)puVar30 + lVar28))[1] = uVar8;
              lVar28 = lVar28 + 0x60;
            } while (puVar29 + 0xc != local_38);
            return;
          }
          cVar26 = (*(code *)*param_3)(puVar29,param_5);
          if (cVar26 == '\0') {
            uVar7 = param_5[0xb];
            puVar30[10] = param_5[10];
            puVar30[0xb] = uVar7;
            uVar7 = param_5[9];
            puVar30[8] = param_5[8];
            puVar30[9] = uVar7;
            uVar3 = *(undefined4 *)param_5;
            uVar4 = *(undefined4 *)((long)param_5 + 4);
            uVar5 = *(undefined4 *)(param_5 + 1);
            uVar6 = *(undefined4 *)((long)param_5 + 0xc);
            uVar7 = param_5[2];
            uVar8 = param_5[3];
            uVar9 = param_5[4];
            uVar10 = param_5[5];
            uVar11 = param_5[7];
            puVar30[6] = param_5[6];
            puVar30[7] = uVar11;
            puVar30[4] = uVar9;
            puVar30[5] = uVar10;
            puVar30[2] = uVar7;
            puVar30[3] = uVar8;
            *(undefined4 *)puVar30 = uVar3;
            *(undefined4 *)((long)puVar30 + 4) = uVar4;
            *(undefined4 *)(puVar30 + 1) = uVar5;
            *(undefined4 *)((long)puVar30 + 0xc) = uVar6;
            param_5 = param_5 + 0xc;
          }
          else {
            uVar7 = puVar29[0xb];
            puVar30[10] = puVar29[10];
            puVar30[0xb] = uVar7;
            uVar7 = puVar29[9];
            puVar30[8] = puVar29[8];
            puVar30[9] = uVar7;
            uVar3 = *(undefined4 *)puVar29;
            uVar4 = *(undefined4 *)((long)puVar29 + 4);
            uVar5 = *(undefined4 *)(puVar29 + 1);
            uVar6 = *(undefined4 *)((long)puVar29 + 0xc);
            uVar7 = puVar29[2];
            uVar8 = puVar29[3];
            uVar9 = puVar29[4];
            uVar10 = puVar29[5];
            uVar11 = puVar29[7];
            puVar30[6] = puVar29[6];
            puVar30[7] = uVar11;
            puVar30[4] = uVar9;
            puVar30[5] = uVar10;
            puVar30[2] = uVar7;
            puVar30[3] = uVar8;
            *(undefined4 *)puVar30 = uVar3;
            *(undefined4 *)((long)puVar30 + 4) = uVar4;
            *(undefined4 *)(puVar30 + 1) = uVar5;
            *(undefined4 *)((long)puVar30 + 0xc) = uVar6;
            puVar29 = puVar29 + 0xc;
          }
          param_1 = puVar30 + 0xc;
        } while (param_5 != local_38);
        if (puVar29 != puVar31) {
          lVar28 = 0;
          do {
            puVar1 = (undefined8 *)((long)puVar29 + lVar28);
            uVar7 = puVar1[0xb];
            puVar2 = (undefined8 *)((long)puVar30 + lVar28 + 0xb0);
            *puVar2 = puVar1[10];
            puVar2[1] = uVar7;
            uVar7 = puVar1[9];
            puVar2 = (undefined8 *)((long)puVar30 + lVar28 + 0xa0);
            *puVar2 = puVar1[8];
            puVar2[1] = uVar7;
            uVar7 = *puVar1;
            uVar8 = puVar1[1];
            uVar9 = puVar1[2];
            uVar10 = puVar1[3];
            uVar11 = puVar1[4];
            uVar12 = puVar1[5];
            uVar13 = puVar1[7];
            puVar2 = (undefined8 *)((long)puVar30 + lVar28 + 0x90);
            *puVar2 = puVar1[6];
            puVar2[1] = uVar13;
            puVar2 = (undefined8 *)((long)puVar30 + lVar28 + 0x80);
            *puVar2 = uVar11;
            puVar2[1] = uVar12;
            puVar2 = (undefined8 *)((long)puVar30 + lVar28 + 0x70);
            *puVar2 = uVar9;
            puVar2[1] = uVar10;
            puVar2 = (undefined8 *)((long)(puVar30 + 0xc) + lVar28);
            *puVar2 = uVar7;
            puVar2[1] = uVar8;
            lVar28 = lVar28 + 0x60;
          } while (puVar1 + 0xc != puVar31);
        }
      }
    }
  }
  return;
}

