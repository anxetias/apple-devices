// name: FUN_100580832
// address: 100580832

void FUN_100580832(long param_1,long *param_2)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  long local_c0;
  long *local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  long local_98;
  long *local_90;
  long local_88;
  undefined8 uStack_80;
  long *local_78;
  long local_70;
  undefined2 local_68;
  undefined2 uStack_66;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined4 uStack_58;
  undefined2 uStack_54;
  undefined2 uStack_52;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*param_2 == 0) {
    uVar7 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      local_68 = 0x202;
      uStack_66 = 0x822;
      uStack_64 = 0x7a0a90;
      uStack_60 = 1;
      uStack_5c = 0x822;
      uStack_5a = 0x9c09;
      uStack_58 = 0x1007e;
      uStack_54 = 0;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else if ((*(int *)(param_1 + 0x18) == 0) || (local_98 = FUN_100314a6c(), local_98 == 0)) {
    if (DAT_1008c7660 != -1) {
      _dispatch_once(&DAT_1008c7660,&PTR___NSConcreteGlobalBlock_1008575c0);
    }
    uVar7 = DAT_1008c7658;
    cVar4 = _os_log_type_enabled(DAT_1008c7658,0x10);
    if (cVar4 != '\0') {
      local_68 = 0;
      __os_log_impl(0x100000000,uVar7,0x10,
                    "ch> **ERROR**: AddChangedObjectsToDataCreator no trackData",&local_68,2);
    }
  }
  else {
    lVar10 = *param_2;
    plVar15 = (long *)param_2[1];
    if (plVar15 != (long *)0x0) {
      LOCK();
      plVar15[1] = plVar15[1] + 1;
      UNLOCK();
    }
    lVar9 = lVar10;
    plVar16 = plVar15;
    local_90 = param_2;
    local_70 = param_1;
    for (puVar12 = *(undefined8 **)(param_1 + 0x78); puVar12 != (undefined8 *)0x0;
        puVar12 = (undefined8 *)*puVar12) {
      lVar6 = FUN_100300729(local_98,puVar12[3]);
      if (lVar6 == 0) {
        uVar7 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar7,0x10);
        if (cVar4 != '\0') {
          local_68 = 0x202;
          uStack_66 = 0x822;
          uStack_64 = 0x7a168c;
          uStack_60 = 1;
          uStack_5c = 0x822;
          uStack_5a = 0xee42;
          uStack_58 = 0x1007b;
          uStack_54 = 0;
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_68,0x16,lVar9
                              ,plVar16);
        }
        cVar4 = FUN_1001782e9(0,0);
        if (cVar4 != '\0') goto LAB_1005808fe;
      }
      else {
LAB_1005808fe:
        FUN_1005b1da8(lVar10,lVar6,0,*(undefined1 *)(puVar12 + 4));
      }
    }
    if (plVar15 != (long *)0x0) {
      LOCK();
      plVar13 = plVar15 + 1;
      lVar10 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        std::__shared_weak_count::__release_weak();
      }
    }
    lVar10 = *local_90;
    plVar15 = (long *)local_90[1];
    if (plVar15 != (long *)0x0) {
      LOCK();
      plVar15[1] = plVar15[1] + 1;
      UNLOCK();
    }
    plVar14 = *(long **)(local_70 + 0xb0);
    lVar6 = lVar10;
    local_78 = plVar15;
    for (plVar13 = *(long **)(local_70 + 0xa8); plVar13 != plVar14; plVar13 = plVar13 + 2) {
      local_88 = *plVar13;
      uStack_80 = (long *)plVar13[1];
      lVar8 = FUN_1003a3354(local_98,local_88);
      if (lVar8 == 0) {
        uVar7 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar7,0x10);
        if (cVar4 != '\0') {
          local_68 = 0x202;
          uStack_66 = 0x822;
          uStack_64 = 0x7a168c;
          uStack_60 = 1;
          uStack_5c = 0x822;
          uStack_5a = 0xf8c9;
          uStack_58 = 0x10079;
          uStack_54 = 0;
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_68,0x16,lVar9
                              ,plVar16,lVar6,plVar15);
        }
        cVar4 = FUN_1001782e9(0,0);
        if (cVar4 != '\0') goto LAB_100580a99;
      }
      else {
LAB_100580a99:
        puVar12 = &uStack_80;
        if (uStack_80._4_1_ != '\0') {
          puVar12 = (undefined8 *)0x0;
        }
        FUN_1005b238e(lVar10,lVar8,puVar12);
      }
    }
    if (local_78 != (long *)0x0) {
      LOCK();
      plVar15 = local_78 + 1;
      lVar10 = *plVar15;
      *plVar15 = *plVar15 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*local_78 + 0x10))(local_78);
        std::__shared_weak_count::__release_weak();
      }
    }
    lVar10 = *local_90;
    local_78 = (long *)local_90[1];
    if (local_78 != (long *)0x0) {
      LOCK();
      local_78[1] = local_78[1] + 1;
      UNLOCK();
    }
    plVar16 = *(long **)(local_70 + 200);
    for (plVar15 = *(long **)(local_70 + 0xc0); plVar15 != plVar16; plVar15 = plVar15 + 2) {
      local_88 = *plVar15;
      uStack_80 = (long *)plVar15[1];
      lVar9 = FUN_1004cfdd1(local_98,local_88);
      if (lVar9 == 0) {
        uVar7 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar7,0x10);
        if (cVar4 != '\0') {
          local_68 = 0x202;
          uStack_66 = 0x822;
          uStack_64 = 0x7a168c;
          uStack_60 = 1;
          uStack_5c = 0x822;
          uStack_5a = 0xf9c5;
          uStack_58 = 0x10079;
          uStack_54 = 0;
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
        }
        cVar4 = FUN_1001782e9(0,0);
        if (cVar4 != '\0') goto LAB_100580bbc;
      }
      else {
LAB_100580bbc:
        puVar12 = &uStack_80;
        if (uStack_80._4_1_ != '\0') {
          puVar12 = (undefined8 *)0x0;
        }
        FUN_1005b25c6(lVar10,lVar9,puVar12);
      }
    }
    if (local_78 != (long *)0x0) {
      LOCK();
      plVar15 = local_78 + 1;
      lVar10 = *plVar15;
      *plVar15 = *plVar15 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*local_78 + 0x10))(local_78);
        std::__shared_weak_count::__release_weak();
      }
    }
    local_b0 = *local_90;
    plVar15 = (long *)local_90[1];
    if (plVar15 != (long *)0x0) {
      LOCK();
      plVar15[1] = plVar15[1] + 1;
      UNLOCK();
    }
    puVar12 = *(undefined8 **)(local_70 + 0x90);
    local_78 = *(long **)(local_70 + 0x98);
    if (puVar12 != local_78) {
      do {
        uVar7 = puVar12[1];
        bVar1 = *(byte *)(puVar12 + 2);
        bVar2 = *(byte *)((long)puVar12 + 0x11);
        lVar10 = FUN_10048b5ec(local_98,*puVar12);
        if (lVar10 == 0) {
          uVar11 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar11,0x10);
          if (cVar4 != '\0') {
            local_68 = 0x202;
            uStack_66 = 0x822;
            uStack_64 = 0x7a168c;
            uStack_60 = 1;
            uStack_5c = 0x822;
            uStack_5a = 0x35d6;
            uStack_58 = 0x1007b;
            uStack_54 = 0;
            __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
          }
          cVar4 = FUN_1001782e9(0,0);
          if (cVar4 != '\0') goto LAB_100580cf5;
        }
        else {
LAB_100580cf5:
          if ((bVar1 & 1) == 0) {
            FUN_1005b1fc0(local_b0,lVar10,uVar7,bVar2 & 1);
          }
          else {
            FUN_1005b21b6(local_b0,lVar10);
          }
        }
        puVar12 = puVar12 + 3;
      } while (puVar12 != local_78);
    }
    if (plVar15 != (long *)0x0) {
      LOCK();
      plVar16 = plVar15 + 1;
      lVar10 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        std::__shared_weak_count::__release_weak();
      }
    }
    lVar10 = *local_90;
    local_78 = (long *)local_90[1];
    if (local_78 != (long *)0x0) {
      LOCK();
      local_78[1] = local_78[1] + 1;
      UNLOCK();
    }
    plVar15 = *(long **)(local_70 + 0x100);
    if (plVar15 != (long *)0x0) {
      do {
        lVar9 = FUN_100300729(local_98,plVar15[2]);
        if (lVar9 == 0) {
          uVar7 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar7,0x10);
          if (cVar4 != '\0') {
            local_68 = 0x202;
            uStack_66 = 0x822;
            uStack_64 = 0x7a168c;
            uStack_60 = 1;
            uStack_5c = 0x822;
            uStack_5a = 0xee42;
            uStack_58 = 0x1007b;
            uStack_54 = 0;
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
          }
          cVar4 = FUN_1001782e9(0,0);
          if (cVar4 != '\0') goto LAB_100580e36;
        }
        else {
LAB_100580e36:
          lVar9 = plVar15[2];
          local_68 = (undefined2)lVar9;
          uStack_66 = (undefined2)((ulong)lVar9 >> 0x10);
          uStack_64 = (undefined4)((ulong)lVar9 >> 0x20);
          uStack_60 = (undefined4)plVar15[3];
          uStack_58 = (undefined4)plVar15[4];
          local_50 = (undefined4)plVar15[5];
          uStack_4c = *(undefined4 *)((long)plVar15 + 0x2c);
          uStack_48 = (undefined4)plVar15[6];
          uStack_44 = *(undefined4 *)((long)plVar15 + 0x34);
          uStack_5c = (undefined2)*(undefined4 *)((long)plVar15 + 0x1c);
          uStack_5a = (undefined2)((uint)*(undefined4 *)((long)plVar15 + 0x1c) >> 0x10);
          uStack_54 = (undefined2)*(undefined4 *)((long)plVar15 + 0x24);
          uStack_52 = (undefined2)((uint)*(undefined4 *)((long)plVar15 + 0x24) >> 0x10);
          FUN_1005b3264(lVar10,&local_68);
        }
        plVar15 = (long *)*plVar15;
      } while (plVar15 != (long *)0x0);
    }
    if (local_78 != (long *)0x0) {
      LOCK();
      plVar15 = local_78 + 1;
      lVar10 = *plVar15;
      *plVar15 = *plVar15 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*local_78 + 0x10))(local_78);
        std::__shared_weak_count::__release_weak();
      }
    }
    plVar16 = local_90;
    plVar15 = (long *)local_90[1];
    lVar10 = *local_90;
    if (plVar15 != (long *)0x0) {
      LOCK();
      plVar15[1] = plVar15[1] + 1;
      UNLOCK();
    }
    local_68 = 0;
    uStack_66 = 0;
    uStack_64 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_5a = 0;
    FUN_100321fab(&local_88,local_98);
    local_68 = (undefined2)local_88;
    uStack_66 = (undefined2)((ulong)local_88 >> 0x10);
    uStack_64 = (undefined4)((ulong)local_88 >> 0x20);
    uStack_60 = SUB84(uStack_80,0);
    uStack_5c = (undefined2)((ulong)uStack_80 >> 0x20);
    uStack_5a = (undefined2)((ulong)uStack_80 >> 0x30);
    plVar13 = uStack_80;
    if (local_88 != 0) {
      plVar14 = *(long **)(local_70 + 0xd8);
      plVar3 = *(long **)(local_70 + 0xe0);
      if (plVar14 != plVar3) {
        do {
          local_88 = *plVar14;
          uStack_80 = (long *)plVar14[1];
          local_a8 = 0;
          uStack_a0 = (long *)0x0;
          iVar5 = FUN_100625128(CONCAT44(uStack_64,CONCAT22(uStack_66,local_68)),local_88,&local_a8)
          ;
          if (iVar5 == 0) {
            local_e8 = (undefined4)local_a8;
            uStack_e4 = local_a8._4_4_;
            uStack_e0 = (undefined4)uStack_a0;
            uStack_dc = uStack_a0._4_4_;
            if (uStack_a0 != (long *)0x0) {
              LOCK();
              uStack_a0[1] = uStack_a0[1] + 1;
              UNLOCK();
            }
            puVar12 = &uStack_80;
            if (uStack_80._4_1_ != '\0') {
              puVar12 = (undefined8 *)0x0;
            }
            FUN_1005b27f4(lVar10,&local_e8,puVar12);
            plVar16 = (long *)CONCAT44(uStack_dc,uStack_e0);
            if (plVar16 != (long *)0x0) {
              LOCK();
              plVar13 = plVar16 + 1;
              lVar9 = *plVar13;
              *plVar13 = *plVar13 + -1;
              UNLOCK();
              if (lVar9 == 0) {
                (**(code **)(*plVar16 + 0x10))(plVar16);
                std::__shared_weak_count::__release_weak();
              }
            }
          }
          if (uStack_a0 != (long *)0x0) {
            LOCK();
            plVar16 = uStack_a0 + 1;
            lVar9 = *plVar16;
            *plVar16 = *plVar16 + -1;
            UNLOCK();
            if (lVar9 == 0) {
              (**(code **)(*uStack_a0 + 0x10))(uStack_a0);
              std::__shared_weak_count::__release_weak();
            }
          }
          plVar14 = plVar14 + 2;
        } while (plVar14 != plVar3);
        plVar13 = (long *)CONCAT26(uStack_5a,CONCAT24(uStack_5c,uStack_60));
        plVar16 = local_90;
      }
    }
    if (plVar13 != (long *)0x0) {
      LOCK();
      plVar14 = plVar13 + 1;
      lVar10 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (plVar15 != (long *)0x0) {
      LOCK();
      plVar13 = plVar15 + 1;
      lVar10 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        std::__shared_weak_count::__release_weak();
      }
    }
    lVar10 = local_70;
    if (*(char *)(local_70 + 0x44) == '\x01') {
      lVar9 = *plVar16;
      local_d8 = *(undefined4 *)(local_70 + 0x48);
      uStack_d4 = *(undefined4 *)(local_70 + 0x4c);
      uStack_d0 = *(undefined4 *)(local_70 + 0x50);
      uStack_cc = *(undefined4 *)(local_70 + 0x54);
      if (*(long *)(local_70 + 0x50) != 0) {
        LOCK();
        plVar15 = (long *)(*(long *)(local_70 + 0x50) + 8);
        *plVar15 = *plVar15 + 1;
        UNLOCK();
      }
      FUN_1005b2fdc(lVar9,&local_d8);
      plVar15 = (long *)CONCAT44(uStack_cc,uStack_d0);
      if (plVar15 != (long *)0x0) {
        LOCK();
        plVar13 = plVar15 + 1;
        lVar9 = *plVar13;
        *plVar13 = *plVar13 + -1;
        UNLOCK();
        if (lVar9 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
    lVar9 = *(long *)(lVar10 + 0x58);
    if (lVar9 != 0) {
      lVar6 = *plVar16;
      local_b8 = *(long **)(lVar10 + 0x60);
      if (local_b8 != (long *)0x0) {
        LOCK();
        local_b8[1] = local_b8[1] + 1;
        UNLOCK();
      }
      local_c0 = lVar9;
      FUN_1005b2a2e(lVar6,&local_c0);
      if (local_b8 != (long *)0x0) {
        LOCK();
        plVar15 = local_b8 + 1;
        lVar9 = *plVar15;
        *plVar15 = *plVar15 + -1;
        UNLOCK();
        if (lVar9 == 0) {
          (**(code **)(*local_b8 + 0x10))(local_b8);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
    if (*(int *)(lVar10 + 0x118) != 0 || *(char *)(lVar10 + 0x11c) != '\0') {
      FUN_1005b3374(*plVar16,*(int *)(lVar10 + 0x118),*(char *)(lVar10 + 0x11c),
                    *(undefined1 *)(lVar10 + 0x11d));
    }
    if (*(char *)(lVar10 + 0x120) == '\x01') {
      FUN_1005b3524(*plVar16);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

