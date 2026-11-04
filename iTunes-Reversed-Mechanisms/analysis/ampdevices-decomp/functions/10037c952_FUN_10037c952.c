// name: FUN_10037c952
// address: 10037c952

long FUN_10037c952(long param_1,int param_2,ushort param_3,char param_4,char param_5)

{
  long *plVar1;
  long *plVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  char cVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  int *piVar27;
  ulong uVar28;
  long lVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  undefined8 *puStack_a0;
  undefined8 local_88;
  int local_80;
  ushort uStack_7c;
  undefined2 uStack_7a;
  undefined6 uStack_78;
  undefined2 uStack_72;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 local_58;
  long *plStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar23 = FUN_1004909fc(param_1 + 8);
  if (lVar23 == 0) {
    uVar24 = FUN_1001cc310();
    cVar22 = _os_log_type_enabled(uVar24,0x10);
    if (cVar22 != '\0') {
      local_88._0_4_ = 0x8220202;
      local_88._4_4_ = 0x7a0a90;
      local_80 = 1;
      uStack_7c = 0x822;
      uStack_7a = 0x8d24;
      uStack_78 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar24,0x10,"%{public}s: err == (%d)",&local_88,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if ((*(int *)(param_1 + 0x40) == param_2) &&
       ((bool)((byte)param_3 & 1) != ((*(byte *)(param_1 + 0x44) & 1) == 0))) {
      lVar23 = param_1 + 0x38;
      if (param_5 == '\0') goto LAB_10037cc26;
      FUN_10037bba0(lVar23);
    }
    for (lVar23 = *(long *)(param_1 + 0x88); lVar23 != *(long *)(param_1 + 0x90);
        lVar23 = lVar23 + 0x50) {
      if ((*(int *)(lVar23 + 8) == param_2) &&
         (uVar5 = *(uint *)(lVar23 + 0xc), (bool)((byte)param_3 & 1) != ((uVar5 & 1) == 0))) {
        if (param_5 == '\0') {
          *(int *)(param_1 + 0x40) = param_2;
          *(uint *)(param_1 + 0x44) = uVar5;
          FUN_100538877(param_1 + 0x48,lVar23 + 0x10);
          FUN_100203686(param_1 + 0x68,lVar23 + 0x30);
          FUN_100238d72(param_1 + 0x78,*(undefined8 *)(lVar23 + 0x40),*(undefined8 *)(lVar23 + 0x48)
                       );
        }
        goto LAB_10037cc26;
      }
    }
    if (param_4 != '\0') {
      FUN_10037bab6(&local_88);
      local_80 = param_2;
      uStack_7c = param_3 & 3;
      uStack_7a = 0;
      puVar30 = *(undefined8 **)(param_1 + 0x88);
      puVar25 = *(undefined8 **)(param_1 + 0x90);
      if (0x20 < (uint)((int)((ulong)((long)puVar25 - (long)puVar30) >> 4) * -0x33333333)) {
        FUN_10037c4ac((long *)(param_1 + 0x88),puVar30 + 0x140,puVar25);
        puVar30 = *(undefined8 **)(param_1 + 0x88);
        puVar25 = *(undefined8 **)(param_1 + 0x90);
      }
      if (puVar25 < *(undefined8 **)(param_1 + 0x98)) {
        if (puVar25 == puVar30) {
          *puVar25 = &PTR_FUN_100855b70;
          puVar25[1] = CONCAT26(uStack_7a,CONCAT24(uStack_7c,local_80));
          puVar25[2] = CONCAT26(uStack_72,uStack_78);
          puVar25[3] = CONCAT44(uStack_6c,local_70);
          puVar25[4] = CONCAT44(uStack_64,uStack_68);
          puVar25[5] = local_60;
          puVar25[6] = local_58;
          puVar25[7] = plStack_50;
          if (plStack_50 != (long *)0x0) {
            LOCK();
            plStack_50[1] = plStack_50[1] + 1;
            UNLOCK();
          }
          *(undefined4 *)(puVar25 + 8) = local_48;
          *(undefined4 *)((long)puVar25 + 0x44) = uStack_44;
          *(undefined4 *)(puVar25 + 9) = uStack_40;
          *(undefined4 *)((long)puVar25 + 0x4c) = uStack_3c;
          if (CONCAT44(uStack_3c,uStack_40) != 0) {
            LOCK();
            plVar1 = (long *)(CONCAT44(uStack_3c,uStack_40) + 8);
            *plVar1 = *plVar1 + 1;
            UNLOCK();
          }
          *(undefined8 **)(param_1 + 0x90) = puVar25 + 10;
        }
        else {
          puVar26 = puVar25;
          if (puVar25 + -10 < puVar25) {
            *puVar25 = &PTR_FUN_100855b70;
            puVar25[1] = puVar25[-9];
            puVar25[2] = puVar25[-8];
            puVar25[3] = puVar25[-7];
            puVar25[4] = puVar25[-6];
            puVar25[5] = puVar25[-5];
            puVar25[6] = puVar25[-4];
            puVar25[7] = puVar25[-3];
            if (puVar25[-3] != 0) {
              LOCK();
              plVar1 = (long *)(puVar25[-3] + 8);
              *plVar1 = *plVar1 + 1;
              UNLOCK();
            }
            puVar26 = puVar25 + 10;
            puVar25[8] = puVar25[-2];
            puVar25[9] = puVar25[-1];
            if (puVar25[-1] != 0) {
              LOCK();
              plVar1 = (long *)(puVar25[-1] + 8);
              *plVar1 = *plVar1 + 1;
              UNLOCK();
            }
          }
          *(undefined8 **)(param_1 + 0x90) = puVar26;
          if (puVar25 != puVar30 + 10) {
            lVar23 = 0;
            do {
              *(undefined8 *)((long)puVar25 + lVar23 + -0x28) =
                   *(undefined8 *)((long)puVar25 + lVar23 + -0x78);
              puVar3 = (undefined4 *)((long)puVar25 + lVar23 + -0x98);
              uVar7 = puVar3[1];
              uVar8 = puVar3[2];
              uVar9 = puVar3[3];
              puVar4 = (undefined4 *)((long)puVar25 + lVar23 + -0x88);
              uVar10 = puVar4[1];
              uVar11 = puVar4[2];
              uVar12 = puVar4[3];
              *(undefined4 *)((long)puVar25 + lVar23 + -0x38) = *puVar4;
              *(undefined4 *)((long)puVar25 + lVar23 + -0x34) = uVar10;
              *(undefined4 *)((long)puVar25 + lVar23 + -0x30) = uVar11;
              *(undefined4 *)((long)puVar25 + lVar23 + -0x2c) = uVar12;
              *(undefined4 *)((long)puVar25 + lVar23 + -0x48) = *puVar3;
              *(undefined4 *)((long)puVar25 + lVar23 + -0x44) = uVar7;
              *(undefined4 *)((long)puVar25 + lVar23 + -0x40) = uVar8;
              *(undefined4 *)((long)puVar25 + lVar23 + -0x3c) = uVar9;
              FUN_100203686((long)puVar25 + lVar23 + -0x20,(long)puVar25 + lVar23 + -0x70);
              FUN_100238d72((long)puVar25 + lVar23 + -0x10,
                            *(undefined8 *)((long)puVar25 + lVar23 + -0x60),
                            *(undefined8 *)((long)puVar25 + lVar23 + -0x58));
              lVar23 = lVar23 + -0x50;
            } while ((long)puVar30 + (0x50 - (long)puVar25) != lVar23);
            puVar26 = *(undefined8 **)(param_1 + 0x90);
          }
          puVar25 = &local_88;
          piVar27 = &local_80;
          if (puVar30 <= puVar25 && puVar25 < puVar26) {
            piVar27 = (int *)&stack0xffffffffffffffd0;
          }
          puVar30[5] = *(undefined8 *)(piVar27 + 8);
          iVar13 = *piVar27;
          iVar14 = piVar27[1];
          iVar15 = piVar27[2];
          iVar16 = piVar27[3];
          iVar17 = piVar27[5];
          iVar18 = piVar27[6];
          iVar19 = piVar27[7];
          *(int *)(puVar30 + 3) = piVar27[4];
          *(int *)((long)puVar30 + 0x1c) = iVar17;
          *(int *)(puVar30 + 4) = iVar18;
          *(int *)((long)puVar30 + 0x24) = iVar19;
          *(int *)(puVar30 + 1) = iVar13;
          *(int *)((long)puVar30 + 0xc) = iVar14;
          *(int *)(puVar30 + 2) = iVar15;
          *(int *)((long)puVar30 + 0x14) = iVar16;
          puVar31 = (undefined8 *)&uStack_40;
          puVar20 = (undefined8 *)&local_48;
          puVar21 = &local_58;
          if (puVar30 <= puVar25 && puVar25 < puVar26) {
            puVar31 = (undefined8 *)&stack0x00000010;
            puVar20 = (undefined8 *)&stack0x00000008;
            puVar21 = (undefined8 *)&stack0xfffffffffffffff8;
          }
          FUN_100203686(puVar30 + 6,puVar21);
          FUN_100238d72(puVar30 + 8,*puVar20,*puVar31);
        }
      }
      else {
        uVar28 = ((long)puVar25 - (long)puVar30 >> 4) * -0x3333333333333333 + 1;
        if (0x333333333333333 < uVar28) {
                    /* WARNING: Subroutine does not return */
          FUN_100382d90();
        }
        lVar23 = (long)*(undefined8 **)(param_1 + 0x98) - (long)puVar30 >> 4;
        uVar6 = lVar23 * -0x6666666666666666;
        if (uVar28 < uVar6) {
          uVar28 = uVar6;
        }
        if (0x199999999999998 < (ulong)(lVar23 * -0x3333333333333333)) {
          uVar28 = 0x333333333333333;
        }
        if (uVar28 == 0) {
          puVar25 = operator_new(0x50);
          puStack_a0 = puVar25 + 10;
          FUN_100382f18();
        }
        else {
          if (0x333333333333333 < uVar28) {
                    /* WARNING: Subroutine does not return */
            FUN_1001082d0();
          }
          puVar25 = operator_new(uVar28 * 0x50);
          puStack_a0 = puVar25 + uVar28 * 10;
        }
        *puVar25 = &PTR_FUN_100855b70;
        puVar25[1] = CONCAT26(uStack_7a,CONCAT24(uStack_7c,local_80));
        puVar25[2] = CONCAT26(uStack_72,uStack_78);
        *(undefined4 *)(puVar25 + 3) = local_70;
        *(undefined4 *)((long)puVar25 + 0x1c) = uStack_6c;
        *(undefined4 *)(puVar25 + 4) = uStack_68;
        *(undefined4 *)((long)puVar25 + 0x24) = uStack_64;
        puVar25[5] = local_60;
        puVar25[6] = local_58;
        puVar25[7] = plStack_50;
        if (plStack_50 != (long *)0x0) {
          LOCK();
          plStack_50[1] = plStack_50[1] + 1;
          UNLOCK();
        }
        *(undefined4 *)(puVar25 + 8) = local_48;
        *(undefined4 *)((long)puVar25 + 0x44) = uStack_44;
        *(undefined4 *)(puVar25 + 9) = uStack_40;
        *(undefined4 *)((long)puVar25 + 0x4c) = uStack_3c;
        if (CONCAT44(uStack_3c,uStack_40) != 0) {
          LOCK();
          plVar1 = (long *)(CONCAT44(uStack_3c,uStack_40) + 8);
          *plVar1 = *plVar1 + 1;
          UNLOCK();
        }
        FUN_100382e8e(puVar30,*(undefined8 *)(param_1 + 0x90),puVar25 + 10);
        lVar23 = *(long *)(param_1 + 0x90);
        *(undefined8 **)(param_1 + 0x90) = puVar30;
        lVar29 = (long)puVar25 + (*(long *)(param_1 + 0x88) - (long)puVar30);
        FUN_100382e8e(*(long *)(param_1 + 0x88),puVar30,lVar29);
        *(long *)(param_1 + 0x88) = lVar29;
        *(long *)(param_1 + 0x90) = (long)(puVar25 + 10) + (lVar23 - (long)puVar30);
        *(undefined8 **)(param_1 + 0x98) = puStack_a0;
        FUN_100382f18();
      }
      lVar23 = *(long *)(param_1 + 0x88);
      local_88._0_4_ = 0x855b70;
      local_88._4_4_ = 1;
      plVar1 = (long *)CONCAT44(uStack_3c,uStack_40);
      if (plVar1 != (long *)0x0) {
        LOCK();
        plVar2 = plVar1 + 1;
        lVar29 = *plVar2;
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (lVar29 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (plStack_50 != (long *)0x0) {
        LOCK();
        plVar1 = plStack_50 + 1;
        lVar29 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar29 == 0) {
          (**(code **)(*plStack_50 + 0x10))(plStack_50);
          std::__shared_weak_count::__release_weak();
        }
      }
      goto LAB_10037cc26;
    }
  }
  lVar23 = 0;
LAB_10037cc26:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar23;
}

