// name: FUN_10038667e
// address: 10038667e

void FUN_10038667e(long param_1,undefined4 param_2,long *param_3,undefined8 param_4,long param_5,
                  long param_6)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  long *plVar14;
  undefined8 local_c8;
  ulong uStack_c0;
  ulong local_b8;
  undefined8 *local_b0;
  long local_a8;
  long lStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  int local_88;
  undefined1 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  long *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined6 uStack_58;
  undefined2 local_52;
  uint local_50;
  undefined2 local_4c;
  undefined4 local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  local_7c = param_2;
  FUN_10028507e();
  plVar3 = (long *)param_3[1];
  if ((long *)*param_3 != plVar3) {
    plVar13 = (long *)*param_3 + 3;
    do {
      FUN_1001aa318(&local_b0);
      local_a8 = *(long *)PTR__CGSizeZero_10082e370;
      lStack_a0 = *(long *)(PTR__CGSizeZero_10082e370 + 8);
      local_98 = 0;
      uStack_90 = (long *)0x0;
      local_88 = 0;
      local_84 = 2;
      FUN_1001a8c4a(&local_b0,plVar13 + -3);
      local_a8 = plVar13[-2];
      lStack_a0 = plVar13[-1];
      local_88 = (int)plVar13[1];
      local_84 = *(undefined1 *)((long)plVar13 + 0xc);
      if (local_88 == 0) {
        if (*(long *)(param_1 + 0x38) != 0) {
          FUN_10028043c(&local_68,*(long *)(param_1 + 0x38),&local_b0);
          uVar8 = uStack_60;
          uVar7 = uStack_64;
          uVar6 = local_68;
          plVar14 = uStack_90;
          uVar4 = CONCAT22(uStack_5a,uStack_5c);
          local_68 = 0;
          uStack_64 = 0;
          uStack_60 = 0;
          uStack_5c = 0;
          uStack_5a = 0;
          local_98 = CONCAT44(uVar7,uVar6);
          uStack_90 = (long *)CONCAT44(uVar4,uVar8);
          if (plVar14 != (long *)0x0) {
            LOCK();
            plVar1 = plVar14 + 1;
            lVar11 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar11 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
              std::__shared_weak_count::__release_weak();
            }
          }
          plVar14 = (long *)CONCAT26(uStack_5a,CONCAT24(uStack_5c,uStack_60));
          if (plVar14 != (long *)0x0) {
            LOCK();
            plVar1 = plVar14 + 1;
            lVar11 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar11 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
              std::__shared_weak_count::__release_weak();
            }
          }
          if (local_98 != 0) goto LAB_10038676b;
          if ((*plVar13 != 0) &&
             (iVar10 = FUN_1002839e2(*(undefined8 *)(param_1 + 0x38),&local_b0,plVar13), iVar10 == 0
             )) {
            FUN_10028043c(&local_68,*(undefined8 *)(param_1 + 0x38),&local_b0);
            uVar8 = uStack_60;
            uVar7 = uStack_64;
            uVar6 = local_68;
            plVar14 = uStack_90;
            uVar4 = CONCAT22(uStack_5a,uStack_5c);
            local_68 = 0;
            uStack_64 = 0;
            uStack_60 = 0;
            uStack_5c = 0;
            uStack_5a = 0;
            local_98 = CONCAT44(uVar7,uVar6);
            uStack_90 = (long *)CONCAT44(uVar4,uVar8);
            if (plVar14 != (long *)0x0) {
              LOCK();
              plVar1 = plVar14 + 1;
              lVar11 = *plVar1;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (lVar11 == 0) {
                (**(code **)(*plVar14 + 0x10))(plVar14);
                std::__shared_weak_count::__release_weak();
              }
            }
            plVar14 = (long *)CONCAT26(uStack_5a,CONCAT24(uStack_5c,uStack_60));
            if (plVar14 != (long *)0x0) {
              LOCK();
              plVar1 = plVar14 + 1;
              lVar11 = *plVar1;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (lVar11 == 0) {
                (**(code **)(*plVar14 + 0x10))(plVar14);
                std::__shared_weak_count::__release_weak();
              }
            }
          }
        }
        if ((local_98 == 0) && (*plVar13 != 0)) {
          local_78 = 0;
          lVar11 = FUN_100165e44(DAT_1008c4d98,*plVar13,&local_78);
          if (lVar11 == 0) {
            local_88 = FUN_100171607(local_78);
          }
          else {
            FUN_1001b52da(&local_68,lVar11,1);
            uVar8 = uStack_60;
            uVar7 = uStack_64;
            uVar6 = local_68;
            plVar14 = uStack_90;
            uVar4 = CONCAT22(uStack_5a,uStack_5c);
            local_68 = 0;
            uStack_64 = 0;
            uStack_60 = 0;
            uStack_5c = 0;
            uStack_5a = 0;
            local_98 = CONCAT44(uVar7,uVar6);
            uStack_90 = (long *)CONCAT44(uVar4,uVar8);
            if (plVar14 != (long *)0x0) {
              LOCK();
              plVar1 = plVar14 + 1;
              lVar2 = *plVar1;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (lVar2 == 0) {
                local_70 = plVar14;
                (**(code **)(*plVar14 + 0x10))(plVar14);
                std::__shared_weak_count::__release_weak();
              }
            }
            plVar14 = (long *)CONCAT26(uStack_5a,CONCAT24(uStack_5c,uStack_60));
            if (plVar14 != (long *)0x0) {
              LOCK();
              plVar1 = plVar14 + 1;
              lVar2 = *plVar1;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (lVar2 == 0) {
                local_70 = plVar14;
                (**(code **)(*plVar14 + 0x10))(plVar14);
                std::__shared_weak_count::__release_weak();
              }
            }
            local_88 = 0;
            if (local_98 == 0) {
              local_88 = -0x6c;
            }
          }
          FUN_10017060f(lVar11);
          FUN_10017060f(local_78);
        }
      }
LAB_10038676b:
      if (*(char *)(param_1 + 0x50) == '\x01') {
        if (DAT_1008c7568 != -1) {
          _dispatch_once(&DAT_1008c7568,&PTR___NSConcreteGlobalBlock_100855dc0);
        }
        uVar12 = DAT_1008c7560;
        cVar9 = _os_log_type_enabled(DAT_1008c7560,2);
        if (cVar9 != '\0') {
          local_4a = (undefined4)plVar13[1];
          local_68 = 0x8400402;
          uStack_64 = SUB84(local_b0,0);
          uStack_60 = (undefined4)((ulong)local_b0 >> 0x20);
          uStack_5c = 0x800;
          uStack_5a = (undefined2)local_98;
          uStack_58 = (undefined6)((ulong)local_98 >> 0x10);
          local_52 = 0x400;
          local_50 = (uint)*(byte *)((long)plVar13 + 0xc);
          local_4c = 0x400;
          __os_log_impl(0x100000000,uVar12,2," fetched %@ %p -> %u,%d",&local_68,0x22);
        }
      }
      uVar5 = uStack_c0;
      if (uStack_c0 < local_b8) {
        FUN_100284b52(&local_c8,&local_b0);
        uStack_c0 = uVar5 + 0x30;
      }
      else {
        uStack_c0 = FUN_100284bc0(&local_c8,&local_b0);
      }
      if (uStack_90 != (long *)0x0) {
        LOCK();
        plVar14 = uStack_90 + 1;
        lVar11 = *plVar14;
        *plVar14 = *plVar14 + -1;
        UNLOCK();
        if (lVar11 == 0) {
          (**(code **)(*uStack_90 + 0x10))(uStack_90);
          std::__shared_weak_count::__release_weak();
        }
      }
      FUN_1001ab006(&local_b0);
      plVar14 = plVar13 + 2;
      plVar13 = plVar13 + 5;
    } while (plVar14 != plVar3);
  }
  uVar12 = _mach_approximate_time();
  *(undefined8 *)(param_6 + 8) = uVar12;
  std::mutex::lock();
  FUN_1003860fc(param_1 + 0x98,param_6);
  std::mutex::unlock();
  local_68 = local_7c;
  plVar3 = *(long **)(param_5 + 0x20);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10016bf14();
  }
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_68,&local_c8);
  local_b0 = &local_c8;
  FUN_1002851ec();
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

