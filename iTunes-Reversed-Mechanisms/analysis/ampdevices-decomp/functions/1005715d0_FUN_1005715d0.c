// name: FUN_1005715d0
// address: 1005715d0

int FUN_1005715d0(long *param_1,int param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,long *param_6)

{
  undefined4 uVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  char *pcVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long local_e0 [2];
  long local_d0 [2];
  int local_c0;
  int local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined2 uStack_ac;
  undefined2 uStack_aa;
  undefined6 uStack_a8;
  undefined2 uStack_a2;
  undefined8 local_a0;
  long *plStack_98;
  undefined8 local_90;
  long *plStack_88;
  undefined8 local_80;
  long *plStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined4 uStack_46;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_c0 = param_2;
  FUN_10057756c(param_6);
  lVar8 = FUN_10017076e(param_3);
  if (lVar8 < 1) {
    local_bc = 0;
  }
  else {
    local_bc = 0;
    lVar15 = 0;
    do {
      FUN_10032f0f2(local_e0);
      FUN_10032f0f2(local_d0);
      lVar9 = FUN_10016499b(param_3,lVar15);
      if (lVar9 == 0) {
        uVar10 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar10,0x10);
        if (cVar6 != '\0') {
          pcVar11 = "xinfDict != __null";
LAB_100571be1:
          uStack_ac = 0x822;
          uStack_b0 = 1;
          local_b4 = 0x7a0a90;
          local_b8 = 0x8220202;
          uStack_aa = SUB82(pcVar11,0);
          uStack_a8 = (undefined6)((ulong)pcVar11 >> 0x10);
          __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_b8,0x16);
        }
LAB_100571740:
        FUN_1001782e9(0,0);
LAB_100571749:
        FUN_1001a85d4(local_d0);
        FUN_1001a85d4(local_e0);
      }
      else {
        if (local_c0 == 5) {
          uVar10 = FUN_1001669a0(lVar9,PTR_cf_sinf_1008529f8);
          FUN_1001a78d6(&local_b8,uVar10);
          FUN_1001a7b1c(local_d0,&local_b8);
          FUN_1001a85d4(&local_b8);
          if (local_d0[0] == 0) {
            uVar10 = FUN_1001cc310();
            cVar6 = _os_log_type_enabled(uVar10,0x10);
            if (cVar6 != '\0') {
              pcVar11 = "sinf != __null";
              goto LAB_100571be1;
            }
            goto LAB_100571740;
          }
        }
        else {
          uVar10 = FUN_1001669a0(lVar9,PTR_cf_dpInfo_100852a10);
          FUN_1001a78d6(&local_b8,uVar10);
          FUN_1001a7b1c(local_e0,&local_b8);
          FUN_1001a85d4(&local_b8);
          if (local_e0[0] == 0) goto LAB_100571749;
        }
        local_b8 = 0;
        local_70 = 0;
        uStack_68 = (long *)0x0;
        local_80 = 0;
        plStack_78 = (long *)0x0;
        local_90 = 0;
        plStack_88 = (long *)0x0;
        local_a0 = 0;
        plStack_98 = (long *)0x0;
        uStack_b0 = 0;
        uStack_ac = 0;
        uStack_aa = 0;
        uStack_a8 = 0;
        uStack_a2 = 0;
        local_b8 = FUN_100167d23(lVar9,PTR_cf_id_100852a18);
        uStack_b0 = (undefined4)local_e0[0];
        uStack_ac = (undefined2)((ulong)local_e0[0] >> 0x20);
        uStack_aa = (undefined2)((ulong)local_e0[0] >> 0x30);
        uStack_a8 = (undefined6)local_d0[0];
        uStack_a2 = (undefined2)((ulong)local_d0[0] >> 0x30);
        FUN_100203686(&local_a0,param_1 + 1);
        FUN_100203686(&local_90,param_4);
        FUN_100238d72(&local_80,*param_5,param_5[1]);
        (**(code **)(*param_1 + 0x20))(&local_58,param_1,local_b8);
        uVar5 = uStack_50;
        uVar4 = uStack_54;
        uVar3 = local_58;
        plVar13 = uStack_68;
        uVar1 = CONCAT22(uStack_4a,uStack_4c);
        local_58 = 0;
        uStack_54 = 0;
        uStack_50 = 0;
        uStack_4c = 0;
        uStack_4a = 0;
        local_70 = CONCAT44(uVar4,uVar3);
        uStack_68 = (long *)CONCAT44(uVar1,uVar5);
        if (plVar13 != (long *)0x0) {
          LOCK();
          plVar14 = plVar13 + 1;
          lVar9 = *plVar14;
          *plVar14 = *plVar14 + -1;
          UNLOCK();
          if (lVar9 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
            std::__shared_weak_count::__release_weak();
          }
        }
        plVar13 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
        if (plVar13 != (long *)0x0) {
          LOCK();
          plVar14 = plVar13 + 1;
          lVar9 = *plVar14;
          *plVar14 = *plVar14 + -1;
          UNLOCK();
          if (lVar9 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (local_70 == 0) {
          uVar10 = FUN_1001cc310();
          cVar6 = _os_log_type_enabled(uVar10,0x10);
          if (cVar6 != '\0') {
            local_58 = 0x8220202;
            uStack_54 = 0x7a0a90;
            uStack_50 = 1;
            uStack_4c = 0x822;
            uStack_4a = 0x93fa;
            uStack_48 = 0x7e;
            uStack_46 = 1;
            __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          bVar2 = true;
          iVar7 = 0x20bb;
        }
        else {
          puVar12 = operator_new(0x90,(nothrow_t *)PTR_nothrow_10082c970);
          if (puVar12 != (undefined8 *)0x0) {
            *puVar12 = &PTR_FUN_10086a390;
            *(undefined4 *)(puVar12 + 1) = 0;
            puVar12[0xf] = 0;
            puVar12[2] = 0;
            puVar12[3] = 0;
            puVar12[4] = 0;
            puVar12[5] = 0;
            puVar12[6] = 0;
            puVar12[7] = 0;
            puVar12[8] = 0;
            puVar12[9] = 0;
            puVar12[10] = 0;
            puVar12[0xb] = 0;
            puVar12[0xc] = 0;
            puVar12[0xd] = 0;
            *(undefined8 *)((long)puVar12 + 0x6d) = 0;
            puVar12[0x10] = 0xffffffffffffffff;
            puVar12[0x11] = 0;
          }
          plVar13 = operator_new(0x20);
          plVar14 = plVar13 + 1;
          plVar13[1] = 0;
          plVar13[2] = 0;
          *plVar13 = (long)&PTR_FUN_10086a6b0;
          plVar13[3] = (long)puVar12;
          if (puVar12 == (undefined8 *)0x0) {
            uVar10 = FUN_1001cc310();
            cVar6 = _os_log_type_enabled(uVar10,0x10);
            if (cVar6 != '\0') {
              local_58 = 0x8220202;
              uStack_54 = 0x7a0a90;
              uStack_50 = 1;
              uStack_4c = 0x822;
              uStack_4a = 0xeebf;
              uStack_48 = 0x7c;
              uStack_46 = 1;
              __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_58,0x16)
              ;
            }
            FUN_1001782e9(0,0);
            iVar7 = 0;
LAB_100571a6a:
            uVar10 = FUN_1001cc310();
            cVar6 = _os_log_type_enabled(uVar10,0x10);
            if (cVar6 != '\0') {
              local_58 = 0x8220202;
              uStack_54 = 0x7a0a90;
              uStack_50 = 1;
              uStack_4c = 0x822;
              uStack_4a = 0x9430;
              uStack_48 = 0x7e;
              uStack_46 = 1;
              __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_58,0x16)
              ;
            }
            FUN_1001782e9(0,0);
            bVar2 = true;
            if (plVar13 == (long *)0x0) goto LAB_100571abe;
          }
          else {
            iVar7 = FUN_10056fbb6(puVar12,&local_b8);
            if (iVar7 == -0x80) {
LAB_100571a42:
              LOCK();
              lVar9 = *plVar14;
              *plVar14 = *plVar14 + -1;
              UNLOCK();
              if (lVar9 == 0) {
                (**(code **)(*plVar13 + 0x10))(plVar13);
                std::__shared_weak_count::__release_weak();
              }
              plVar13 = (long *)0x0;
              goto LAB_100571a6a;
            }
            if (iVar7 != 0) {
              uVar10 = FUN_1001cc310();
              cVar6 = _os_log_type_enabled(uVar10,0x10);
              if (cVar6 != '\0') {
                local_58 = 0x8220202;
                uStack_54 = 0x7a0a90;
                uStack_50 = 1;
                uStack_4c = 0x400;
                uStack_4a = (undefined2)iVar7;
                uStack_48 = (undefined2)((uint)iVar7 >> 0x10);
                __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_58,0x12
                                   );
              }
              goto LAB_100571a42;
            }
            plVar14 = operator_new(0x20);
            plVar14[2] = (long)puVar12;
            plVar14[3] = (long)plVar13;
            LOCK();
            plVar13[1] = plVar13[1] + 1;
            UNLOCK();
            plVar14[1] = (long)param_6;
            lVar9 = *param_6;
            *plVar14 = lVar9;
            *(long **)(lVar9 + 8) = plVar14;
            *param_6 = (long)plVar14;
            param_6[2] = param_6[2] + 1;
            bVar2 = false;
            iVar7 = 0;
          }
          LOCK();
          plVar14 = plVar13 + 1;
          lVar9 = *plVar14;
          *plVar14 = *plVar14 + -1;
          UNLOCK();
          if (lVar9 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
            std::__shared_weak_count::__release_weak();
          }
        }
LAB_100571abe:
        if (uStack_68 != (long *)0x0) {
          LOCK();
          plVar13 = uStack_68 + 1;
          lVar9 = *plVar13;
          *plVar13 = *plVar13 + -1;
          UNLOCK();
          if (lVar9 == 0) {
            (**(code **)(*uStack_68 + 0x10))(uStack_68);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (plStack_78 != (long *)0x0) {
          LOCK();
          plVar13 = plStack_78 + 1;
          lVar9 = *plVar13;
          *plVar13 = *plVar13 + -1;
          UNLOCK();
          if (lVar9 == 0) {
            (**(code **)(*plStack_78 + 0x10))(plStack_78);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (plStack_88 != (long *)0x0) {
          LOCK();
          plVar13 = plStack_88 + 1;
          lVar9 = *plVar13;
          *plVar13 = *plVar13 + -1;
          UNLOCK();
          if (lVar9 == 0) {
            (**(code **)(*plStack_88 + 0x10))(plStack_88);
            std::__shared_weak_count::__release_weak();
          }
        }
        local_bc = iVar7;
        if (plStack_98 != (long *)0x0) {
          LOCK();
          plVar13 = plStack_98 + 1;
          lVar9 = *plVar13;
          *plVar13 = *plVar13 + -1;
          UNLOCK();
          if (lVar9 == 0) {
            (**(code **)(*plStack_98 + 0x10))(plStack_98);
            std::__shared_weak_count::__release_weak();
          }
        }
        FUN_1001a85d4(local_d0);
        FUN_1001a85d4(local_e0);
        if (bVar2) break;
      }
      lVar15 = lVar15 + 1;
    } while (lVar8 != lVar15);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return local_bc;
}

