// name: FUN_1002a71c6
// address: 1002a71c6

void FUN_1002a71c6(long *param_1,long *param_2)

{
  long lVar1;
  undefined4 uVar2;
  long *plVar3;
  long *plVar4;
  char cVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  long **pplVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  bool bVar15;
  int *local_b0;
  undefined8 local_a8;
  undefined2 *local_a0;
  long *local_98;
  long local_90 [2];
  long *local_80;
  long *local_78;
  uint local_6c;
  undefined8 local_68;
  undefined4 local_60;
  long *local_58;
  long local_50;
  long lStack_48;
  long *local_40;
  undefined1 local_35;
  int local_34;
  
  local_80 = param_2 + 0x19c;
  uVar7 = (ulong)*(uint *)(param_1 + 1);
  do {
    iVar6 = (int)uVar7;
    uVar7 = 0;
    if (iVar6 != 0) {
      lVar1 = (long)param_2 + 0x886;
      local_a0 = (undefined2 *)((long)param_2 + 0x874);
      uVar13 = 0;
      lVar12 = 0xa8;
      lVar14 = 0x16;
      local_6c = 0;
      local_78 = param_2;
      do {
        cVar5 = FUN_10015fa28(lVar1,uVar13 & 0xffffffff);
        plVar3 = local_80;
        if (cVar5 != '\0') {
          local_34 = **(int **)(*param_1 + lVar14 * 4);
          iVar6 = *(int *)(param_1[2] + 0x34 + lVar12);
          if ((iVar6 == 0x706e6720) || (iVar6 == 0x6a706567)) {
            uVar7 = (ulong)local_6c;
            local_6c = local_6c + 1;
            puVar9 = (undefined4 *)(uVar7 * 4 + param_2[0x199]);
          }
          else {
            puVar9 = (undefined4 *)(param_1[2] + lVar12);
          }
          uVar2 = *(undefined4 *)(param_2[0x19a] + uVar13 * 4);
          bVar15 = 99 < local_34 - 900U;
          if ((int)param_2[0x10e] == 5) {
            if (!bVar15 || local_34 == 5) {
              local_40 = *(long **)((long)param_2 + 0x876);
              local_a8 = *(undefined8 *)((long)param_2 + 0x87e);
              uVar10 = CONCAT44(*puVar9,uVar2);
              local_68 = &local_34;
              lVar8 = FUN_1002a4228(local_80,local_68,&DAT_100712240,&local_68,&local_98);
              plVar4 = local_40;
              if (*(char *)(lVar8 + 0x28) != '\x01') {
                local_98 = local_90;
                local_90[0] = 0;
                local_90[1] = 0;
                lVar8 = FUN_1002a3ee0(&local_98,*local_a0);
                *(undefined8 *)(lVar8 + 0x20) = uVar10;
                *(long **)(lVar8 + 0x28) = plVar4;
                *(undefined8 *)(lVar8 + 0x30) = local_a8;
                local_68._0_4_ = CONCAT31(local_68._1_3_,1);
                local_68._4_4_ = 0;
                local_60 = 0;
                FUN_1002a3fa0(&local_58,&local_98);
                local_b0 = &local_34;
                lVar8 = FUN_1002a4228(local_80,local_b0,&DAT_100712240,&local_b0,&local_35);
                *(undefined4 *)(lVar8 + 0x30) = local_60;
                *(ulong *)(lVar8 + 0x28) = CONCAT44(local_68._4_4_,(uint)local_68);
                local_40 = (long *)(lVar8 + 0x38);
                FUN_1002a41f4(local_40,*(undefined8 *)(lVar8 + 0x40));
                *(long **)(lVar8 + 0x38) = local_58;
                *(long *)(lVar8 + 0x40) = local_50;
                *(long *)(lVar8 + 0x48) = lStack_48;
                if (lStack_48 == 0) {
                  *local_40 = lVar8 + 0x40;
                }
                else {
                  *(long *)(local_50 + 0x10) = lVar8 + 0x40;
                  local_58 = &local_50;
                  local_50 = 0;
                  lStack_48 = 0;
                }
                FUN_1002a41f4(&local_58,local_50);
                pplVar11 = &local_98;
                lVar8 = local_90[0];
                goto LAB_1002a7522;
              }
              local_68 = &local_34;
              lVar8 = FUN_1002a4228(plVar3,local_68,&DAT_100712240,&local_68,&local_98);
              lVar8 = FUN_1002a3ee0(lVar8 + 0x38,*local_a0);
              *(undefined8 *)(lVar8 + 0x20) = uVar10;
              *(long **)(lVar8 + 0x28) = local_40;
              *(undefined8 *)(lVar8 + 0x30) = local_a8;
              param_2 = local_78;
            }
          }
          else if (bVar15 && local_34 != 5) {
            local_68._0_4_ = (uint)local_68 & 0xffffff00;
            local_58 = &local_50;
            local_50 = 0;
            lStack_48 = 0;
            local_98 = (long *)&local_34;
            local_68._4_4_ = uVar2;
            local_60 = *puVar9;
            lVar8 = FUN_1002a4228(local_80,local_98,&DAT_100712240,&local_98,&local_b0);
            *(undefined4 *)(lVar8 + 0x30) = local_60;
            *(ulong *)(lVar8 + 0x28) = CONCAT44(local_68._4_4_,(uint)local_68);
            local_40 = (long *)(lVar8 + 0x38);
            FUN_1002a41f4(local_40,*(undefined8 *)(lVar8 + 0x40));
            *(long **)(lVar8 + 0x38) = local_58;
            *(long *)(lVar8 + 0x40) = local_50;
            *(long *)(lVar8 + 0x48) = lStack_48;
            if (lStack_48 == 0) {
              *local_40 = lVar8 + 0x40;
            }
            else {
              *(long *)(local_50 + 0x10) = lVar8 + 0x40;
              local_58 = &local_50;
              local_50 = 0;
              lStack_48 = 0;
            }
            pplVar11 = &local_58;
            lVar8 = local_50;
LAB_1002a7522:
            FUN_1002a41f4(pplVar11,lVar8);
            param_2 = local_78;
          }
        }
        uVar13 = uVar13 + 1;
        uVar7 = (ulong)*(uint *)(param_1 + 1);
        lVar12 = lVar12 + 0xe0;
        lVar14 = lVar14 + 0x1a;
      } while (uVar13 < uVar7);
    }
    param_2 = (long *)*param_2;
    if (param_2 == (long *)0x0) {
      return;
    }
  } while( true );
}

