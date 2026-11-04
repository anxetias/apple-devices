// name: FUN_10037c1de
// address: 10037c1de

void FUN_10037c1de(long param_1,uint param_2)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined4 local_88;
  undefined4 uStack_84;
  uint uStack_80;
  undefined2 uStack_7c;
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
  if ((param_2 == 0) ||
     (((param_2 - 0x2afc < 0xfffffffd && (0x70 < param_2)) && (param_2 - 0x2737 < 0xffffffda)))) {
    uVar11 = FUN_1001cc310();
    cVar10 = _os_log_type_enabled(uVar11,0x10);
    if (cVar10 != '\0') {
      local_88 = 0x8220202;
      uStack_84 = 0x7a0a90;
      uStack_80 = 1;
      uStack_7c = 0x822;
      uStack_7a = 0x6a16;
      uStack_78 = 0x1007c;
      __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_88,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*(uint *)(param_1 + 0x40) == param_2) {
      FUN_10037bba0(param_1 + 0x38);
    }
    lVar14 = *(long *)(param_1 + 0x88);
    lVar13 = *(long *)(param_1 + 0x90);
    if (lVar14 != lVar13) {
      do {
        local_88 = 0x855b70;
        uStack_84 = 1;
        local_60 = *(undefined8 *)(lVar14 + 0x28);
        uVar11 = *(undefined8 *)(lVar14 + 8);
        local_70 = *(undefined4 *)(lVar14 + 0x18);
        uStack_6c = *(undefined4 *)(lVar14 + 0x1c);
        uStack_68 = *(undefined4 *)(lVar14 + 0x20);
        uStack_64 = *(undefined4 *)(lVar14 + 0x24);
        uStack_80 = (uint)uVar11;
        uStack_7c = (undefined2)((ulong)uVar11 >> 0x20);
        uStack_7a = (undefined2)((ulong)uVar11 >> 0x30);
        uStack_78 = (undefined6)*(undefined8 *)(lVar14 + 0x10);
        uStack_72 = (undefined2)((ulong)*(undefined8 *)(lVar14 + 0x10) >> 0x30);
        local_58 = *(undefined8 *)(lVar14 + 0x30);
        plStack_50 = *(long **)(lVar14 + 0x38);
        if (*(long *)(lVar14 + 0x38) != 0) {
          LOCK();
          plVar1 = (long *)(*(long *)(lVar14 + 0x38) + 8);
          *plVar1 = *plVar1 + 1;
          UNLOCK();
        }
        local_48 = *(undefined4 *)(lVar14 + 0x40);
        uStack_44 = *(undefined4 *)(lVar14 + 0x44);
        uStack_40 = *(undefined4 *)(lVar14 + 0x48);
        uStack_3c = *(undefined4 *)(lVar14 + 0x4c);
        if (*(long *)(lVar14 + 0x48) != 0) {
          LOCK();
          plVar1 = (long *)(*(long *)(lVar14 + 0x48) + 8);
          *plVar1 = *plVar1 + 1;
          UNLOCK();
        }
        if (uStack_80 == param_2) {
          FUN_10037bba0(&local_88);
        }
        local_88 = 0x855b70;
        uStack_84 = 1;
        plVar1 = (long *)CONCAT44(uStack_3c,uStack_40);
        if (plVar1 != (long *)0x0) {
          LOCK();
          plVar2 = plVar1 + 1;
          lVar12 = *plVar2;
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (lVar12 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (plStack_50 != (long *)0x0) {
          LOCK();
          plVar1 = plStack_50 + 1;
          lVar12 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar12 == 0) {
            (**(code **)(*plStack_50 + 0x10))(plStack_50);
            std::__shared_weak_count::__release_weak();
          }
        }
        lVar14 = lVar14 + 0x50;
      } while (lVar14 != lVar13);
      lVar14 = *(long *)(param_1 + 0x88);
      lVar13 = *(long *)(param_1 + 0x90);
    }
    for (; (lVar14 != lVar13 && (*(uint *)(lVar14 + 8) != param_2)); lVar14 = lVar14 + 0x50) {
    }
    lVar12 = lVar14 + 0x50;
    if (lVar12 != lVar13 && lVar14 != lVar13) {
      do {
        if (*(uint *)(lVar12 + 8) != param_2) {
          *(undefined8 *)(lVar14 + 0x28) = *(undefined8 *)(lVar12 + 0x28);
          uVar3 = *(undefined4 *)(lVar12 + 8);
          uVar4 = *(undefined4 *)(lVar12 + 0xc);
          uVar5 = *(undefined4 *)(lVar12 + 0x10);
          uVar6 = *(undefined4 *)(lVar12 + 0x14);
          uVar7 = *(undefined4 *)(lVar12 + 0x1c);
          uVar8 = *(undefined4 *)(lVar12 + 0x20);
          uVar9 = *(undefined4 *)(lVar12 + 0x24);
          *(undefined4 *)(lVar14 + 0x18) = *(undefined4 *)(lVar12 + 0x18);
          *(undefined4 *)(lVar14 + 0x1c) = uVar7;
          *(undefined4 *)(lVar14 + 0x20) = uVar8;
          *(undefined4 *)(lVar14 + 0x24) = uVar9;
          *(undefined4 *)(lVar14 + 8) = uVar3;
          *(undefined4 *)(lVar14 + 0xc) = uVar4;
          *(undefined4 *)(lVar14 + 0x10) = uVar5;
          *(undefined4 *)(lVar14 + 0x14) = uVar6;
          FUN_100203686(lVar14 + 0x30,lVar12 + 0x30);
          FUN_100238d72(lVar14 + 0x40,*(undefined8 *)(lVar12 + 0x40),*(undefined8 *)(lVar12 + 0x48))
          ;
          lVar14 = lVar14 + 0x50;
        }
        lVar12 = lVar12 + 0x50;
      } while (lVar12 != lVar13);
      lVar13 = *(long *)(param_1 + 0x90);
    }
    FUN_10037c4ac(param_1 + 0x88,lVar14,lVar13);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

