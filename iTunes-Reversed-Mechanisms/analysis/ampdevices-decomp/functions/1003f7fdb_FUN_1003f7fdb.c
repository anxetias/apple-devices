// name: FUN_1003f7fdb
// address: 1003f7fdb

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1003f7fdb(ulong *param_1,long param_2,long param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  char *pcVar8;
  long *plVar9;
  long *plVar10;
  int iVar11;
  uint uVar12;
  ulong *puVar13;
  ulong uVar14;
  long *plVar15;
  undefined1 auVar16 [16];
  undefined8 local_f0;
  undefined1 local_e8 [8];
  long *local_e0;
  long *local_d8;
  long local_d0;
  undefined1 local_c8 [24];
  undefined8 local_b0;
  uint local_a8;
  undefined4 local_a4;
  long local_98;
  ulong *local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  long *local_68;
  uint local_5c;
  int local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined4 uStack_46;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_c8._0_16_ = (undefined1  [16])0x0;
  local_5c = param_4;
  if (0x100000 < *(int *)(*(long *)(param_3 + 0x78) + 0x18) * 4 + 0x30U) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0xb5ca;
      uStack_48 = 0x7c;
      uStack_46 = 1;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    iVar2 = -0x6c;
    FUN_1001782e9(0,0);
    goto LAB_1003f86db;
  }
  local_98 = param_2;
  iVar2 = FUN_100160255(param_1[0x20000],&local_f0);
  if (iVar2 == -0x80) goto LAB_1003f86db;
  if (iVar2 != 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 == '\0') goto LAB_1003f86db;
    uStack_4a = (undefined2)iVar2;
    uStack_48 = (undefined2)((uint)iVar2 >> 0x10);
LAB_1003f8565:
    uStack_4c = 0x400;
    uStack_50 = 1;
    uStack_54 = 0x7a0a90;
    local_58 = 0x8220202;
    __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    goto LAB_1003f86db;
  }
  FUN_1001c62d9(param_1,0x34);
  uVar3 = FUN_1003f7e40(local_5c);
  *(undefined4 *)param_1 = uVar3;
  *(undefined4 *)((long)param_1 + 4) = 0;
  FUN_10037ef5e(&local_58,param_3,1,0,0);
  lVar6 = CONCAT44(uStack_54,local_58);
  local_68 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
  local_c8._8_8_ = local_68;
  local_c8._0_8_ = lVar6;
  if (lVar6 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      pcVar8 = "physicalTable != __null";
LAB_1003f8694:
      uStack_4c = 0x822;
      uStack_50 = 1;
      uStack_54 = 0x7a0a90;
      local_58 = 0x8220202;
      uStack_4a = SUB82(pcVar8,0);
      uStack_48 = (undefined2)((ulong)pcVar8 >> 0x10);
      uStack_46 = (undefined4)((ulong)pcVar8 >> 0x20);
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
LAB_1003f86b9:
    iVar2 = -0x32;
    FUN_1001782e9(0,0);
  }
  else {
    uVar14 = (ulong)(*(long *)(lVar6 + 0x18) - *(long *)(lVar6 + 0x10)) >> 3;
    if ((int)uVar14 != 0) {
      uVar12 = 0;
      do {
        uVar5 = FUN_10037b3b0(lVar6,uVar12);
        cVar1 = FUN_1003f8df3(param_1,uVar5);
        if (cVar1 == '\0') {
          FUN_10037b618(lVar6,uVar12);
          uVar14 = (ulong)((int)uVar14 - 1);
          uVar12 = uVar12 - 1;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < (uint)uVar14);
    }
    local_e0 = local_68;
    if (local_68 != (long *)0x0) {
      LOCK();
      local_68[1] = local_68[1] + 1;
      UNLOCK();
    }
    FUN_10037b766(&local_58,0,local_e8);
    lVar6 = CONCAT44(uStack_54,local_58);
    local_88._4_4_ = uStack_54;
    local_88._0_4_ = local_58;
    local_88._12_2_ = uStack_4c;
    local_88._8_4_ = uStack_50;
    local_88._14_2_ = uStack_4a;
    local_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_4a = 0;
    if (local_e0 != (long *)0x0) {
      LOCK();
      plVar15 = local_e0 + 1;
      lVar6 = *plVar15;
      *plVar15 = *plVar15 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*local_e0 + 0x10))(local_e0);
        std::__shared_weak_count::__release_weak();
      }
      lVar6 = local_88._0_8_;
    }
    if (lVar6 == 0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        pcVar8 = "indexTable != nullptr";
        goto LAB_1003f8694;
      }
      goto LAB_1003f86b9;
    }
    FUN_10037ef5e(&local_58,param_3,local_5c,0,0);
    auVar16 = local_78;
    local_78._4_4_ = uStack_54;
    local_78._0_4_ = local_58;
    local_78._12_2_ = uStack_4c;
    local_78._8_4_ = uStack_50;
    local_78._14_2_ = uStack_4a;
    uVar5 = local_78._8_8_;
    local_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_4a = 0;
    local_78._8_8_ = auVar16._8_8_;
    uVar7 = local_78._8_8_;
    local_78 = CONCAT88(uVar5,local_78._0_8_);
    if ((long *)uVar7 != (long *)0x0) {
      LOCK();
      plVar15 = (long *)(uVar7 + 8);
      lVar6 = *plVar15;
      *plVar15 = *plVar15 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*(long *)uVar7 + 0x10))(uVar7);
        std::__shared_weak_count::__release_weak();
      }
    }
    plVar15 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
    if (plVar15 != (long *)0x0) {
      LOCK();
      plVar10 = plVar15 + 1;
      lVar6 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        std::__shared_weak_count::__release_weak();
      }
    }
    uVar5 = local_78._0_8_;
    if ((long *)local_78._0_8_ == (long *)0x0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        pcVar8 = "lookupTable != __null";
        goto LAB_1003f8694;
      }
      goto LAB_1003f86b9;
    }
    uVar14 = (ulong)(*(long *)(local_78._0_8_ + 0x18) - *(long *)(local_78._0_8_ + 0x10)) >> 3;
    if ((int)uVar14 != 0) {
      uVar12 = 0;
      do {
        uVar7 = FUN_10037b3b0(uVar5,uVar12);
        cVar1 = FUN_1003f8df3(param_1,uVar7);
        if (cVar1 == '\0') {
          FUN_10037b618(uVar5,uVar12);
          uVar14 = (ulong)((int)uVar14 - 1);
          uVar12 = uVar12 - 1;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < (uint)uVar14);
    }
    if ((local_5c != 7) && ((param_1[0x20003] & 0x200000) != 0)) {
      FUN_10037aa86(uVar5,param_3,local_5c,4);
    }
    local_68 = (long *)uVar5;
    puVar13 = param_1 + 6;
    iVar2 = (int)((ulong)(*(long *)(uVar5 + 0x18) - *(long *)(uVar5 + 0x10)) >> 3);
    local_90 = puVar13;
    if (iVar2 != 0) {
      plVar15 = (long *)(local_88._0_8_ + 0x18);
      iVar11 = 0;
      do {
        uVar14 = FUN_10037b3b0(local_68,iVar11);
        plVar10 = (long *)*plVar15;
        uVar12 = 0xffffffff;
        plVar9 = plVar15;
        if (plVar10 != (long *)0x0) {
          do {
            if ((ulong)plVar10[4] >= uVar14) {
              plVar9 = plVar10;
            }
            plVar10 = (long *)plVar10[(ulong)plVar10[4] < uVar14];
          } while (plVar10 != (long *)0x0);
          if ((plVar9 != plVar15) && ((ulong)plVar9[4] <= uVar14)) {
            uVar12 = *(uint *)(plVar9 + 5);
          }
        }
        uVar4 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | uVar12 << 0x18;
        if (*(char *)((long)param_1 + 0x100127) == '\0') {
          uVar4 = uVar12;
        }
        *(uint *)puVar13 = uVar4;
        puVar13 = (ulong *)((long)puVar13 + 4);
        iVar11 = iVar11 + 1;
      } while (iVar11 != iVar2);
    }
    iVar11 = (int)((ulong)((long)puVar13 - (long)local_90) >> 2);
    *(int *)((long)param_1 + 4) = iVar11;
    FUN_1001c62d9(&local_b0,0x18);
    plVar15 = local_68;
    iVar11 = iVar11 * 4;
    local_b0 = 0x18646f686d;
    local_a8 = iVar11 + 0x48;
    local_a4 = 0x34;
    if (*(char *)((long)param_1 + 0x100127) != '\0') {
      local_b0 = 0x180000006d686f64;
      local_a8 = local_a8 >> 0x18 | (local_a8 & 0xff0000) >> 8 | (local_a8 & 0xff00) << 8 |
                 local_a8 * 0x1000000;
      local_a4 = 0x34000000;
    }
    local_58 = 0x18;
    uStack_54 = 0;
    iVar2 = FUN_100160894(param_1[0x20000],&local_58,&local_b0);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        if (*(char *)((long)param_1 + 0x100127) != '\0') {
          auVar16._8_8_ = 0;
          auVar16._0_8_ = *param_1;
          auVar16 = pshufb(auVar16,_DAT_10070e4b0);
          *param_1 = auVar16._0_8_;
        }
        uStack_54 = 0;
        local_58 = iVar11 + 0x30;
        iVar2 = FUN_100160894(param_1[0x20000],&local_58,param_1);
        if (iVar2 != -0x80) {
          if (iVar2 == 0) {
            *(int *)(local_98 + 0xc) = *(int *)(local_98 + 0xc) + 1;
            iVar2 = 0;
            if ((((param_1[0x20003] & 0x80) == 0) || (0x2c < local_5c)) ||
               (iVar2 = 0, (0x1000010002e0U >> ((ulong)local_5c & 0x3f) & 1) == 0))
            goto LAB_1003f86db;
            local_d8 = plVar15;
            local_d0 = local_78._8_8_;
            if (local_78._8_8_ != 0) {
              LOCK();
              *(long *)(local_78._8_8_ + 8) = *(long *)(local_78._8_8_ + 8) + 1;
              UNLOCK();
            }
            iVar2 = FUN_1003f8e3e(param_1,local_98,local_5c,&local_d8);
            FUN_10021e316(&local_d8);
            if ((iVar2 == -0x80) || (iVar2 == 0)) goto LAB_1003f86db;
            uVar5 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar5,0x10);
            if (cVar1 == '\0') goto LAB_1003f86db;
            uStack_4a = (undefined2)iVar2;
            uStack_48 = (undefined2)((uint)iVar2 >> 0x10);
            goto LAB_1003f8565;
          }
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 != '\0') {
            uStack_4a = (undefined2)iVar2;
            uStack_48 = (undefined2)((uint)iVar2 >> 0x10);
            goto LAB_1003f8825;
          }
        }
      }
      else {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          uStack_4a = (undefined2)iVar2;
          uStack_48 = (undefined2)((uint)iVar2 >> 0x10);
LAB_1003f8825:
          uStack_4c = 0x400;
          uStack_50 = 1;
          uStack_54 = 0x7a0a90;
          local_58 = 0x8220202;
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
    }
  }
  FUN_100160772(param_1[0x20000],local_f0);
LAB_1003f86db:
  if ((long *)local_88._8_8_ != (long *)0x0) {
    LOCK();
    plVar15 = (long *)(local_88._8_8_ + 8);
    lVar6 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*(long *)local_88._8_8_ + 0x10))(local_88._8_8_);
      std::__shared_weak_count::__release_weak();
    }
  }
  if ((long *)local_c8._8_8_ != (long *)0x0) {
    LOCK();
    plVar15 = (long *)(local_c8._8_8_ + 8);
    lVar6 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*(long *)local_c8._8_8_ + 0x10))(local_c8._8_8_);
      std::__shared_weak_count::__release_weak();
    }
  }
  if ((long *)local_78._8_8_ != (long *)0x0) {
    LOCK();
    plVar15 = (long *)(local_78._8_8_ + 8);
    lVar6 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*(long *)local_78._8_8_ + 0x10))(local_78._8_8_);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

