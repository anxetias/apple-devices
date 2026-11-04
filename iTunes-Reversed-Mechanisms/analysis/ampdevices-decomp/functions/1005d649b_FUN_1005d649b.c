// name: FUN_1005d649b
// address: 1005d649b

int FUN_1005d649b(long *param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  code *pcVar11;
  long *plVar12;
  undefined1 local_f0 [8];
  long local_e8;
  long *local_e0;
  long local_d8;
  long *local_d0;
  ulong local_c8;
  ulong local_c0;
  ulong local_b8;
  long local_b0;
  long *local_a8;
  ulong local_a0;
  long local_98;
  char local_8d;
  uint local_8c;
  uint local_88;
  char *local_84;
  undefined2 local_7c;
  int local_7a;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined2 uStack_58;
  undefined4 uStack_56;
  undefined2 uStack_52;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  plVar12 = (long *)*param_1;
  if (plVar12 == (long *)0x0) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_68 = 0x8220202;
      uStack_64 = 0x7a0a90;
      uStack_60 = 1;
      uStack_5c = 0x822;
      uStack_5a = 0x9b8;
      uStack_58 = 0x7f;
      uStack_56 = 1;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*param_2 != 0xffffffffffffffff) {
      local_a8 = (long *)param_2[7];
      local_8d = (char)param_2[8];
      cVar2 = *(char *)((long)param_2 + 0x41);
      uVar4 = (uint)param_2[6];
      param_2[9] = *param_2;
      param_2[10] = param_2[1];
      *(char *)(param_2 + 0xd) = (char)param_2[4];
      *(uint *)(param_2 + 0xb) = uVar4;
      *(undefined1 *)(param_2 + 0xe) = 0;
      if (uVar4 == (uint)param_2[2]) {
        iVar3 = (**(code **)(*plVar12 + 0x98))();
        if ((iVar3 == -0x80) || (iVar3 == 0)) goto LAB_1005d65f4;
        uVar6 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar6,0x10);
        if (cVar2 == '\0') goto LAB_1005d65f4;
        uStack_5a = (undefined2)iVar3;
        uStack_58 = (undefined2)((uint)iVar3 >> 0x10);
        goto LAB_1005d67bc;
      }
      local_b8 = param_2[5];
      local_a0 = (long)(int)(uint)param_2[2];
      iVar3 = (**(code **)(*plVar12 + 0x100))(plVar12,&local_c0);
      if (iVar3 == -0x80) goto LAB_1005d65f4;
      if (iVar3 == 0) {
        lVar7 = (long)(int)uVar4;
        uVar10 = uVar4 - (int)local_a0;
        if (((char)param_2[4] != '\0') && (uVar9 = *param_2, param_2[1] < uVar9)) {
          iVar3 = -0x2f;
          if (cVar2 != '\0') goto LAB_1005d65f4;
          local_b0 = lVar7;
          if (0 < (int)uVar10) {
            iVar3 = (**(code **)(*(long *)*param_1 + 0x108))((long *)*param_1,uVar10 + local_c0);
            if (iVar3 == -0x80) goto LAB_1005d65f4;
            if (iVar3 == 0) {
              iVar3 = (**(code **)(*(long *)*param_1 + 0x108))((long *)*param_1,local_c0);
              if (iVar3 == -0x80) goto LAB_1005d65f4;
              if (iVar3 == 0) {
                uVar9 = *param_2;
                goto LAB_1005d66da;
              }
              uVar6 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar6,0x10);
              if (cVar2 == '\0') goto LAB_1005d65f4;
              uStack_5a = (undefined2)iVar3;
              uStack_58 = (undefined2)((uint)iVar3 >> 0x10);
            }
            else {
              uVar6 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar6,0x10);
              if (cVar2 == '\0') goto LAB_1005d65f4;
              uStack_5a = (undefined2)iVar3;
              uStack_58 = (undefined2)((uint)iVar3 >> 0x10);
            }
            goto LAB_1005d67bc;
          }
LAB_1005d66da:
          uVar8 = local_a0 & 0xffffffff;
          if ((int)uVar4 < (int)local_a0) {
            uVar8 = (ulong)uVar4;
          }
          local_8c = uVar10;
          iVar3 = (**(code **)(*(long *)*param_1 + 0x98))
                            ((long *)*param_1,uVar9,local_b8,uVar8,1,local_f0);
          if (iVar3 == -0x80) goto LAB_1005d65f4;
          if (iVar3 != 0) {
            uVar6 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar6,0x10);
            if (cVar2 == '\0') goto LAB_1005d65f4;
            uStack_5a = (undefined2)iVar3;
            uStack_58 = (undefined2)((uint)iVar3 >> 0x10);
            goto LAB_1005d67bc;
          }
LAB_1005d6ddc:
          local_48 = 0;
          uStack_40 = 0;
          uStack_58 = 0;
          uStack_56 = 0;
          uStack_52 = 0;
          uStack_50 = 0;
          local_68 = 0;
          uStack_64 = 0;
          uStack_60 = 0;
          uStack_5c = 0;
          uStack_5a = 0;
          if (local_a8 == (long *)0x0 && local_8d != '\0') {
            FUN_1001ceabd(&local_68,0,FUN_10043b085,0,0,0);
            local_a8 = (long *)&local_68;
LAB_1005d6e8f:
            if (*local_a8 == 0) goto LAB_1005d6f19;
            FUN_1001ceb24(local_a8,0x6370726d,0,0,0);
            pcVar11 = FUN_1001cebd1;
          }
          else {
            if (local_a8 != (long *)0x0) goto LAB_1005d6e8f;
            local_a8 = (long *)0x0;
LAB_1005d6f19:
            pcVar11 = (code *)0x0;
          }
          plVar12 = local_a8;
          lVar7 = *param_1;
          if ((int)local_8c < 1) {
            local_d0 = (long *)param_1[1];
            if (local_d0 != (long *)0x0) {
              LOCK();
              local_d0[1] = local_d0[1] + 1;
              UNLOCK();
            }
            local_d8 = lVar7;
            iVar3 = FUN_1005307e3(&local_d8,local_b0 + *param_2,(long)(int)((int)local_a0 - uVar4),
                                  pcVar11,local_a8);
            if (local_d0 != (long *)0x0) {
              LOCK();
              plVar1 = local_d0 + 1;
              lVar7 = *plVar1;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (lVar7 == 0) {
                (**(code **)(*local_d0 + 0x10))(local_d0);
                std::__shared_weak_count::__release_weak();
              }
            }
            if ((iVar3 != -0x80) && (iVar3 != 0)) {
              uVar6 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar6,0x10);
              goto joined_r0x0001005d70a3;
            }
          }
          else {
            local_e0 = (long *)param_1[1];
            if (local_e0 != (long *)0x0) {
              LOCK();
              local_e0[1] = local_e0[1] + 1;
              UNLOCK();
            }
            local_e8 = lVar7;
            iVar3 = FUN_10052ff58(&local_e8,local_a0 + *param_2,local_b8 + local_a0,local_8c,pcVar11
                                  ,local_a8);
            if (local_e0 != (long *)0x0) {
              LOCK();
              plVar1 = local_e0 + 1;
              lVar7 = *plVar1;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (lVar7 == 0) {
                (**(code **)(*local_e0 + 0x10))(local_e0);
                std::__shared_weak_count::__release_weak();
              }
            }
            if ((iVar3 != -0x80) && (iVar3 != 0)) {
              uVar6 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar6,0x10);
joined_r0x0001005d70a3:
              plVar12 = local_a8;
              if (cVar2 != '\0') {
                local_7c = 0x400;
                local_84 = "Assertion failure";
                local_88 = 0x8220202;
                local_7a = iVar3;
                __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_88,0x12)
                ;
                plVar12 = local_a8;
              }
            }
          }
          FUN_1001ceb24(plVar12,0x6470726d,0,0,0);
          goto LAB_1005d65f4;
        }
        if ((int)local_a0 < (int)uVar4) {
          local_98 = 8;
          local_b0 = lVar7;
          local_8c = uVar10;
          iVar3 = (**(code **)(*(long *)*param_1 + 0x90))
                            ((long *)*param_1,*param_2 + local_a0,&local_88,8,1);
          if (iVar3 == -0x80) goto LAB_1005d65f4;
          if (iVar3 == 0) {
            if (local_98 != 8) {
              uVar6 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar6,0x10);
              if (cVar2 != '\0') {
                local_68 = 0x8220202;
                uStack_64 = 0x7a0a90;
                uStack_60 = 1;
                uStack_5c = 0x822;
                uStack_5a = 0xa00;
                uStack_58 = 0x7f;
                uStack_56 = 1;
                __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_68,0x16
                                   );
              }
              FUN_1001782e9(0,0);
LAB_1005d6cff:
              iVar3 = -0x24;
              goto LAB_1005d65f4;
            }
            if (((int)local_84 == 0x65657266) &&
               (uVar10 = local_88 >> 0x18 | (local_88 & 0xff0000) >> 8 | (local_88 & 0xff00) << 8 |
                         local_88 << 0x18, (long)(int)local_8c + 8U < (ulong)(long)(int)uVar10)) {
              uVar10 = uVar10 - local_8c;
              local_88 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                         uVar10 * 0x1000000;
              iVar3 = (**(code **)(*(long *)*param_1 + 0x98))
                                ((long *)*param_1,*param_2,local_b8,local_b0,1,&local_98);
              if (iVar3 == -0x80) goto LAB_1005d65f4;
              if (iVar3 == 0) {
                iVar3 = (**(code **)(*(long *)*param_1 + 0x98))
                                  ((long *)*param_1,local_b0 + *param_2,&local_88,8,1,&local_98);
                if ((iVar3 == -0x80) || (iVar3 == 0)) goto LAB_1005d65f4;
                uVar6 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar6,0x10);
                if (cVar2 == '\0') goto LAB_1005d65f4;
                uStack_5a = (undefined2)iVar3;
                uStack_58 = (undefined2)((uint)iVar3 >> 0x10);
              }
              else {
                uVar6 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar6,0x10);
                if (cVar2 == '\0') goto LAB_1005d65f4;
                uStack_5a = (undefined2)iVar3;
                uStack_58 = (undefined2)((uint)iVar3 >> 0x10);
              }
            }
            else {
              iVar3 = -0x2f;
              if (cVar2 != '\0') goto LAB_1005d65f4;
              lVar7 = (long)(int)local_8c;
              iVar3 = (**(code **)(*(long *)*param_1 + 0x108))((long *)*param_1,local_c0 + lVar7);
              if (iVar3 == -0x80) goto LAB_1005d65f4;
              if (iVar3 == 0) {
                iVar3 = (**(code **)(*(long *)*param_1 + 0x108))((long *)*param_1,local_c0);
                if (iVar3 == -0x80) goto LAB_1005d65f4;
                if (iVar3 == 0) {
                  FUN_1005d7388(local_b8,local_8c);
                  param_2[10] = param_2[10] + lVar7;
                  *(undefined1 *)(param_2 + 0xe) = 1;
                  iVar3 = (**(code **)(*(long *)*param_1 + 0x98))
                                    ((long *)*param_1,*param_2,local_b8,local_a0,1,&local_98);
                  if (iVar3 == -0x80) goto LAB_1005d65f4;
                  if (iVar3 == 0) goto LAB_1005d6ddc;
                  uVar6 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar6,0x10);
                  if (cVar2 == '\0') goto LAB_1005d65f4;
                  uStack_5a = (undefined2)iVar3;
                  uStack_58 = (undefined2)((uint)iVar3 >> 0x10);
                }
                else {
                  uVar6 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar6,0x10);
                  if (cVar2 == '\0') goto LAB_1005d65f4;
                  uStack_5a = (undefined2)iVar3;
                  uStack_58 = (undefined2)((uint)iVar3 >> 0x10);
                }
              }
              else {
                uVar6 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar6,0x10);
                if (cVar2 == '\0') goto LAB_1005d65f4;
                uStack_5a = (undefined2)iVar3;
                uStack_58 = (undefined2)((uint)iVar3 >> 0x10);
              }
            }
          }
          else {
            uVar6 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar6,0x10);
            if (cVar2 == '\0') goto LAB_1005d65f4;
            uStack_5a = (undefined2)iVar3;
            uStack_58 = (undefined2)((uint)iVar3 >> 0x10);
          }
        }
        else {
          local_b0 = lVar7;
          if ((local_c0 < 0x1e00000) || (local_c0 / 5 < (ulong)-uVar10)) {
LAB_1005d6d70:
            iVar3 = -0x2f;
            if (cVar2 != '\0') goto LAB_1005d65f4;
            local_8c = uVar10;
            FUN_1005d7388(local_b8);
            iVar3 = (**(code **)(*(long *)*param_1 + 0x98))
                              ((long *)*param_1,*param_2,local_b8,local_b0,1,&local_98);
            if (iVar3 == -0x80) goto LAB_1005d65f4;
            if (iVar3 == 0) {
              param_2[10] = param_2[10] + (long)(int)local_8c;
              *(undefined1 *)(param_2 + 0xe) = 1;
              goto LAB_1005d6ddc;
            }
            uVar6 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar6,0x10);
            if (cVar2 == '\0') goto LAB_1005d65f4;
            uStack_5a = (undefined2)iVar3;
            uStack_58 = (undefined2)((uint)iVar3 >> 0x10);
          }
          else {
            local_98 = 8;
            local_c8 = (ulong)-uVar10;
            local_8c = uVar10;
            iVar3 = (**(code **)(*(long *)*param_1 + 0x90))
                              ((long *)*param_1,*param_2 + local_a0,&local_88,8,1);
            if (iVar3 == -0x80) goto LAB_1005d65f4;
            if (iVar3 == 0) {
              if (local_98 != 8) {
                uVar6 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar6,0x10);
                if (cVar2 != '\0') {
                  local_68 = 0x8220202;
                  uStack_64 = 0x7a0a90;
                  uStack_60 = 1;
                  uStack_5c = 0x822;
                  uStack_5a = 0xa00;
                  uStack_58 = 0x7f;
                  uStack_56 = 1;
                  __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_68,
                                      0x16);
                }
                FUN_1001782e9(0,0);
                goto LAB_1005d6cff;
              }
              if ((int)local_84 == 0x65657266) {
                uVar4 = (local_88 >> 0x18 | (local_88 & 0xff0000) >> 8 | (local_88 & 0xff00) << 8 |
                        local_88 << 0x18) - local_8c;
                local_88 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                           uVar4 * 0x1000000;
                FUN_1001c62d9(&local_68,8);
                (**(code **)(*(long *)*param_1 + 0x98))
                          ((long *)*param_1,*param_2 + local_a0,&local_68,8,1,&local_98);
                (**(code **)(*(long *)*param_1 + 0x98))
                          ((long *)*param_1,*param_2 + local_b0,&local_88,8,1,&local_98);
              }
              else {
                uVar5 = (uint)local_c8;
                uVar10 = local_8c;
                if (uVar5 < 8) goto LAB_1005d6d70;
                local_84 = (char *)CONCAT44(local_84._4_4_,0x65657266);
                local_88 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                           uVar5 << 0x18;
                (**(code **)(*(long *)*param_1 + 0x98))
                          ((long *)*param_1,*param_2 + local_b0,&local_88,8,1,&local_98);
              }
              iVar3 = (**(code **)(*(long *)*param_1 + 0x98))
                                ((long *)*param_1,*param_2,local_b8,local_b0,1,&local_98);
              if (iVar3 == -0x80) goto LAB_1005d65f4;
              if (iVar3 == 0) {
                iVar3 = 0;
                goto LAB_1005d65f4;
              }
              uVar6 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar6,0x10);
              if (cVar2 == '\0') goto LAB_1005d65f4;
              uStack_5a = (undefined2)iVar3;
              uStack_58 = (undefined2)((uint)iVar3 >> 0x10);
            }
            else {
              uVar6 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar6,0x10);
              if (cVar2 == '\0') goto LAB_1005d65f4;
              uStack_5a = (undefined2)iVar3;
              uStack_58 = (undefined2)((uint)iVar3 >> 0x10);
            }
          }
        }
      }
      else {
        uVar6 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar6,0x10);
        if (cVar2 == '\0') goto LAB_1005d65f4;
        uStack_5a = (undefined2)iVar3;
        uStack_58 = (undefined2)((uint)iVar3 >> 0x10);
      }
LAB_1005d67bc:
      uStack_60 = 1;
      uStack_64 = 0x7a0a90;
      uStack_5c = 0x400;
      local_68 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_68,0x12);
      goto LAB_1005d65f4;
    }
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_68 = 0x8220202;
      uStack_64 = 0x7a0a90;
      uStack_60 = 1;
      uStack_5c = 0x822;
      uStack_5a = 0x9d1;
      uStack_58 = 0x7f;
      uStack_56 = 1;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
    FUN_1001782e9(0,0);
  }
  iVar3 = -0x32;
LAB_1005d65f4:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

