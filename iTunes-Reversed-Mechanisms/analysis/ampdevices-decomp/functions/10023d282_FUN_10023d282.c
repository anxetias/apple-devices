// name: FUN_10023d282
// address: 10023d282

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10023d282(undefined8 param_1,undefined8 param_2,char *param_3,long *param_4,uint param_5,
                 undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  char *pcVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined4 uVar7;
  char cVar8;
  int iVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 local_f0 [24];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  long *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  long *local_98;
  long *plStack_90;
  undefined4 local_80;
  uint local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined4 uStack_68;
  undefined2 uStack_64;
  undefined2 uStack_62;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined2 uStack_46;
  undefined2 uStack_44;
  undefined2 uStack_42;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long local_38;
  
  uVar12 = (undefined4)((ulong)param_2 >> 0x20);
  uVar11 = (undefined4)param_2;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_80 = param_8;
  if (param_3 == (char *)0x0) {
    uVar10 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar10,0x10);
    if (cVar8 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0x2797;
      uStack_48 = 0x7b;
      uStack_46 = 1;
      uStack_44 = 0;
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    plVar5 = (long *)*param_4;
    if (plVar5 != (long *)0x0) {
      local_b0 = (long *)param_4[1];
      if (local_b0 != (long *)0x0) {
        LOCK();
        local_b0[1] = local_b0[1] + 1;
        UNLOCK();
      }
      uVar13 = *(undefined4 *)(PTR__CGPointZero_10082e300 + 4);
      uVar14 = *(undefined4 *)(PTR__CGPointZero_10082e300 + 8);
      uVar7 = *(undefined4 *)(PTR__CGPointZero_10082e300 + 0xc);
      *(undefined4 *)(param_3 + 0x58) = *(undefined4 *)PTR__CGPointZero_10082e300;
      *(undefined4 *)(param_3 + 0x5c) = uVar13;
      *(undefined4 *)(param_3 + 0x60) = uVar14;
      *(undefined4 *)(param_3 + 100) = uVar7;
      local_a8 = param_7;
      local_a0 = param_6;
      local_98 = plVar5;
      plStack_90 = local_b0;
      uVar10 = (**(code **)(*plVar5 + 0x68))();
      *(undefined8 *)(param_3 + 0x68) = uVar10;
      *(ulong *)(param_3 + 0x70) = CONCAT44(uVar12,uVar11);
      _CGRectOffset((uint)*(undefined8 *)(param_3 + 0x58) ^ _DAT_100700b30,
                    (uint)*(undefined8 *)(param_3 + 0x60) ^ _DAT_100700b30,&local_78);
      *(ulong *)(param_3 + 0x68) = CONCAT26(uStack_62,CONCAT24(uStack_64,uStack_68));
      *(ulong *)(param_3 + 0x70) = CONCAT44(uStack_5c,uStack_60);
      *(ulong *)(param_3 + 0x58) = CONCAT44(uStack_74,local_78);
      *(ulong *)(param_3 + 0x60) = CONCAT26(uStack_6a,CONCAT24(uStack_6c,uStack_70));
      local_7c = param_5 & 0xff;
      FUN_10023a7ab(&local_58);
      pcVar1 = param_3 + 0x38;
      *(ulong *)(param_3 + 0x48) =
           CONCAT26(uStack_42,CONCAT24(uStack_44,CONCAT22(uStack_46,uStack_48)));
      *(ulong *)(param_3 + 0x50) = CONCAT44(uStack_3c,uStack_40);
      *(ulong *)(param_3 + 0x38) = CONCAT44(uStack_54,local_58);
      *(ulong *)(param_3 + 0x40) = CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
      if (*param_3 == '\0') {
        uVar10 = *(undefined8 *)(param_3 + 0x18);
        uVar15 = *(undefined8 *)(param_3 + 0x20);
        uVar16 = *(undefined8 *)(param_3 + 0x28);
        uVar17 = *(undefined8 *)(param_3 + 0x30);
        FUN_10019f4e6(&local_78,1,0);
        *(ulong *)(param_3 + 0x48) = CONCAT26(uStack_62,CONCAT24(uStack_64,uStack_68));
        *(ulong *)(param_3 + 0x50) = CONCAT44(uStack_5c,uStack_60);
        *(ulong *)pcVar1 = CONCAT44(uStack_74,local_78);
        *(ulong *)(param_3 + 0x40) = CONCAT26(uStack_6a,CONCAT24(uStack_6c,uStack_70));
        uVar11 = *(undefined4 *)pcVar1;
        uVar12 = *(undefined4 *)(param_3 + 0x40);
        uVar13 = *(undefined4 *)(param_3 + 0x48);
        uVar14 = *(undefined4 *)(param_3 + 0x50);
        _CGRectOffset((uint)*(undefined8 *)(param_3 + 0x38) ^ _DAT_100700b30,
                      (uint)*(undefined8 *)(param_3 + 0x40) ^ _DAT_100700b30);
      }
      else {
        uVar10 = *(undefined8 *)(param_3 + 0x18);
        uVar15 = *(undefined8 *)(param_3 + 0x20);
        uVar16 = *(undefined8 *)(param_3 + 0x28);
        uVar17 = *(undefined8 *)(param_3 + 0x30);
        uVar13 = CONCAT22(uStack_46,uStack_48);
        uVar11 = local_58;
        uVar12 = uStack_50;
        FUN_1005d16ac(&local_78,0x11);
        uVar14 = uStack_40;
      }
      *(undefined4 *)(param_3 + 0x48) = uStack_68;
      *(uint *)(param_3 + 0x4c) = CONCAT22(uStack_62,uStack_64);
      *(undefined4 *)(param_3 + 0x50) = uStack_60;
      *(undefined4 *)(param_3 + 0x54) = uStack_5c;
      *(ulong *)pcVar1 = CONCAT44(uStack_74,local_78);
      *(ulong *)(param_3 + 0x40) = CONCAT26(uStack_6a,CONCAT24(uStack_6c,uStack_70));
      FUN_1001a75cc((int)DAT_100700458,&local_78,param_3 + 0x48,0,1,1,0,uVar11,uVar12,uVar13,uVar14,
                    uVar10,uVar15,uVar16,uVar17);
      plVar5 = (long *)(param_3 + 8);
      FUN_100217418(plVar5,&local_78);
      plVar6 = (long *)CONCAT26(uStack_6a,CONCAT24(uStack_6c,uStack_70));
      if (plVar6 != (long *)0x0) {
        LOCK();
        plVar2 = plVar6 + 1;
        lVar3 = *plVar2;
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (lVar3 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          std::__shared_weak_count::__release_weak();
        }
      }
      lVar3 = *plVar5;
      if (lVar3 == 0) {
        uVar10 = FUN_1001cc310();
        cVar8 = _os_log_type_enabled(uVar10,0x10);
        if (cVar8 != '\0') {
          local_78 = 0x8220202;
          uStack_74 = 0x7a0a90;
          uStack_70 = 1;
          uStack_6c = 0x822;
          uStack_6a = 0x27ba;
          uStack_68 = 0x1007b;
          uStack_64 = 0;
          __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
        }
        iVar9 = 0x237c;
        FUN_1001782e9(0,0);
      }
      else {
        FUN_1001a772a(lVar3);
        local_78 = SUB84(local_98,0);
        uStack_74 = (undefined4)((ulong)local_98 >> 0x20);
        uStack_70 = SUB84(plStack_90,0);
        uStack_6c = (undefined2)((ulong)plStack_90 >> 0x20);
        uStack_6a = (undefined2)((ulong)plStack_90 >> 0x30);
        if (plStack_90 != (long *)0x0) {
          LOCK();
          plStack_90[1] = plStack_90[1] + 1;
          UNLOCK();
        }
        plVar6 = *(long **)(param_3 + 0x10);
        local_d8 = (undefined4)*plVar5;
        uStack_d4 = *(undefined4 *)(param_3 + 0xc);
        uStack_d0 = *(undefined4 *)(param_3 + 0x10);
        uStack_cc = *(undefined4 *)(param_3 + 0x14);
        if (plVar6 != (long *)0x0) {
          LOCK();
          plVar6[1] = plVar6[1] + 1;
          UNLOCK();
        }
        FUN_10023a934(&local_78,local_7c,&local_d8);
        if (plVar6 != (long *)0x0) {
          LOCK();
          plVar5 = plVar6 + 1;
          lVar4 = *plVar5;
          *plVar5 = *plVar5 + -1;
          UNLOCK();
          if (lVar4 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
            std::__shared_weak_count::__release_weak();
          }
        }
        plVar5 = (long *)CONCAT26(uStack_6a,CONCAT24(uStack_6c,uStack_70));
        iVar9 = 0;
        if (plVar5 != (long *)0x0) {
          LOCK();
          plVar6 = plVar5 + 1;
          lVar4 = *plVar6;
          *plVar6 = *plVar6 + -1;
          UNLOCK();
          if (lVar4 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
            std::__shared_weak_count::__release_weak();
          }
        }
      }
      if (local_b0 != (long *)0x0) {
        LOCK();
        plVar5 = local_b0 + 1;
        lVar4 = *plVar5;
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (lVar4 == 0) {
          (**(code **)(*local_b0 + 0x10))(local_b0,local_a0);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (lVar3 == 0) {
        uVar10 = FUN_1001cc310();
        cVar8 = _os_log_type_enabled(uVar10,0x10);
        if (cVar8 == '\0') goto LAB_10023d42a;
        uStack_4a = (undefined2)iVar9;
        uStack_48 = 0;
      }
      else {
        plVar5 = (long *)param_4[1];
        local_c8 = (undefined4)*param_4;
        uStack_c4 = *(undefined4 *)((long)param_4 + 4);
        uStack_c0 = (undefined4)param_4[1];
        uStack_bc = *(undefined4 *)((long)param_4 + 0xc);
        if (plVar5 != (long *)0x0) {
          LOCK();
          plVar5[1] = plVar5[1] + 1;
          UNLOCK();
        }
        FUN_1001964c8(local_f0);
        iVar9 = FUN_10023adaa(param_3,local_a8,&local_c8,local_7c,local_f0,(undefined1)local_80);
        FUN_1001966e2(local_f0);
        if (plVar5 != (long *)0x0) {
          LOCK();
          plVar6 = plVar5 + 1;
          lVar3 = *plVar6;
          *plVar6 = *plVar6 + -1;
          UNLOCK();
          if (lVar3 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
            std::__shared_weak_count::__release_weak();
          }
        }
        if ((iVar9 == -0x80) || (iVar9 == 0)) goto LAB_10023d42a;
        uVar10 = FUN_1001cc310();
        cVar8 = _os_log_type_enabled(uVar10,0x10);
        if (cVar8 == '\0') goto LAB_10023d42a;
        uStack_4a = (undefined2)iVar9;
        uStack_48 = (undefined2)((uint)iVar9 >> 0x10);
      }
      uStack_4c = 0x400;
      uStack_50 = 1;
      uStack_54 = 0x7a0a90;
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      goto LAB_10023d42a;
    }
    uVar10 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar10,0x10);
    if (cVar8 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0x52f2;
      uStack_48 = 0x7a;
      uStack_46 = 1;
      uStack_44 = 0;
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  iVar9 = -0x32;
LAB_10023d42a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar9;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

