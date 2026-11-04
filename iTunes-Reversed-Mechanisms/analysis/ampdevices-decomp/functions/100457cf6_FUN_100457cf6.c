// name: FUN_100457cf6
// address: 100457cf6

/* WARNING: Removing unreachable block (ram,0x000100457d5d) */

void FUN_100457cf6(long *param_1,undefined4 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  ulong uVar6;
  undefined8 uVar7;
  char cVar8;
  void *pvVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long *local_68;
  long *plStack_60;
  long lStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  
  local_78 = *param_2;
  uStack_74 = param_2[1];
  uStack_70 = param_2[2];
  uStack_6c = param_2[3];
  if (*(long *)(param_2 + 2) != 0) {
    LOCK();
    plVar15 = (long *)(*(long *)(param_2 + 2) + 8);
    *plVar15 = *plVar15 + 1;
    UNLOCK();
  }
  cVar8 = (**(code **)(*param_1 + 0x60))(param_1);
  local_50 = 0;
  uStack_48 = (long *)0x0;
  plVar15 = (long *)CONCAT44(uStack_74,local_78);
  lStack_58 = CONCAT44(uStack_6c,uStack_70);
  if (lStack_58 == 0) {
    lStack_58 = 0;
  }
  else {
    LOCK();
    *(long *)(lStack_58 + 0x10) = *(long *)(lStack_58 + 0x10) + 1;
    UNLOCK();
  }
  local_68 = plVar15;
  plStack_60 = plVar15;
  if (cVar8 != '\0') {
    FUN_100203686(&local_50,&local_78);
    plVar15 = (long *)CONCAT44(uStack_74,local_78);
  }
  local_40 = (**(code **)(*plVar15 + 0x10))(plVar15);
  plVar15 = (long *)CONCAT44(uStack_6c,uStack_70);
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar1 = plVar15 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_1001e9de0(param_1 + 4);
  puVar14 = (undefined8 *)param_1[2];
  if (puVar14 < (undefined8 *)param_1[3]) {
    *puVar14 = local_68;
    puVar14[1] = plStack_60;
    puVar14[2] = lStack_58;
    if (lStack_58 != 0) {
      LOCK();
      *(long *)(lStack_58 + 0x10) = *(long *)(lStack_58 + 0x10) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar14 + 3) = (undefined4)local_50;
    *(undefined4 *)((long)puVar14 + 0x1c) = local_50._4_4_;
    *(undefined4 *)(puVar14 + 4) = (undefined4)uStack_48;
    *(undefined4 *)((long)puVar14 + 0x24) = uStack_48._4_4_;
    if (uStack_48 != (long *)0x0) {
      LOCK();
      uStack_48[1] = uStack_48[1] + 1;
      UNLOCK();
    }
    *(undefined1 *)(puVar14 + 5) = local_40;
    puVar14 = puVar14 + 6;
  }
  else {
    lVar13 = (long)puVar14 - param_1[1] >> 4;
    uVar16 = lVar13 * -0x5555555555555555 + 1;
    if (0x555555555555555 < uVar16) {
      FUN_10045888a();
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    lVar10 = param_1[3] - param_1[1] >> 4;
    uVar6 = lVar10 * 0x5555555555555556;
    if (uVar16 < uVar6) {
      uVar16 = uVar6;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar10 * -0x5555555555555555)) {
      uVar16 = 0x555555555555555;
    }
    if (uVar16 == 0) {
      pvVar9 = (void *)0x0;
    }
    else {
      if (0x555555555555555 < uVar16) {
                    /* WARNING: Subroutine does not return */
        FUN_1001082d0();
      }
      pvVar9 = operator_new(uVar16 * 0x30);
    }
    lVar13 = lVar13 * 0x10;
    *(undefined8 *)((long)pvVar9 + lVar13) = local_68;
    ((undefined8 *)((long)pvVar9 + lVar13))[1] = plStack_60;
    *(long *)((long)pvVar9 + lVar13 + 0x10) = lStack_58;
    if (lStack_58 != 0) {
      LOCK();
      *(long *)(lStack_58 + 0x10) = *(long *)(lStack_58 + 0x10) + 1;
      UNLOCK();
    }
    *(undefined4 *)((long)pvVar9 + lVar13 + 0x18) = (undefined4)local_50;
    *(undefined4 *)((long)pvVar9 + lVar13 + 0x1c) = local_50._4_4_;
    *(undefined4 *)((long)pvVar9 + lVar13 + 0x20) = (undefined4)uStack_48;
    *(undefined4 *)((long)pvVar9 + lVar13 + 0x24) = uStack_48._4_4_;
    if (uStack_48 != (long *)0x0) {
      LOCK();
      uStack_48[1] = uStack_48[1] + 1;
      UNLOCK();
    }
    *(undefined1 *)((long)pvVar9 + lVar13 + 0x28) = local_40;
    puVar14 = (undefined8 *)((long)pvVar9 + lVar13 + 0x30);
    puVar17 = (undefined8 *)param_1[1];
    puVar4 = (undefined8 *)param_1[2];
    lVar10 = (long)puVar4 - (long)puVar17;
    if (puVar4 != puVar17) {
      lVar11 = lVar13 + (lVar10 >> 4) * -0x10;
      lVar12 = 0;
      do {
        puVar2 = (undefined8 *)((long)puVar17 + lVar12);
        uVar7 = puVar2[1];
        puVar3 = (undefined8 *)((long)pvVar9 + lVar12 + lVar11);
        *puVar3 = *puVar2;
        puVar3[1] = uVar7;
        *(undefined8 *)((long)pvVar9 + lVar12 + lVar11 + 0x10) = puVar2[2];
        puVar2[1] = 0;
        puVar2[2] = 0;
        uVar7 = puVar2[4];
        puVar3 = (undefined8 *)((long)pvVar9 + lVar12 + lVar11 + 0x18);
        *puVar3 = puVar2[3];
        puVar3[1] = uVar7;
        puVar2[3] = 0;
        puVar2[4] = 0;
        *(undefined1 *)((long)pvVar9 + lVar12 + lVar11 + 0x28) = *(undefined1 *)(puVar2 + 5);
        lVar12 = lVar12 + 0x30;
      } while (puVar2 + 6 != puVar4);
      do {
        FUN_100458044(puVar17);
        puVar17 = puVar17 + 6;
      } while (puVar17 != puVar4);
      puVar17 = (undefined8 *)param_1[1];
    }
    param_1[1] = (long)pvVar9 + (lVar13 - lVar10);
    param_1[2] = (long)puVar14;
    param_1[3] = (long)(uVar16 * 0x30 + (long)pvVar9);
    if (puVar17 != (undefined8 *)0x0) {
      operator_delete(puVar17);
    }
  }
  param_1[2] = (long)puVar14;
  FUN_1001e9eb9(param_1 + 4);
  if (uStack_48 != (long *)0x0) {
    LOCK();
    plVar15 = uStack_48 + 1;
    lVar13 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*uStack_48 + 0x10))(uStack_48);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (lStack_58 != 0) {
    std::__shared_weak_count::__release_weak();
  }
  return;
}

