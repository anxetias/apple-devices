// name: FUN_1005faa34
// address: 1005faa34

int FUN_1005faa34(undefined8 param_1,int param_2,char param_3,undefined8 param_4)

{
  long lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  void *pvVar9;
  char *pcVar10;
  long local_e0;
  long *plStack_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [16];
  undefined8 *local_88;
  long *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_60;
  undefined4 local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar2 = FUN_1001b8428();
  if (cVar2 == '\0') {
    if (((param_2 == 200) || (param_2 == 300)) || (param_2 == 400)) {
      if (param_3 != '\0') {
        local_60 = param_4;
        puVar6 = operator_new(0x1a0,(nothrow_t *)PTR_nothrow_10082c970);
        if (puVar6 != (undefined8 *)0x0) {
          puVar6[1] = 0;
          puVar6[2] = 0;
          *puVar6 = &PTR_FUN_100870478;
          puVar6[3] = &PTR_FUN_100870558;
          FUN_1001b7a5c(puVar6 + 4,param_1);
          *(int *)(puVar6 + 6) = param_2;
          *(char *)((long)puVar6 + 0x34) = param_3;
          *(undefined4 *)(puVar6 + 7) = 0;
          local_c8 = puVar6 + 0x11;
          puVar6[8] = 0;
          puVar6[9] = 0;
          puVar6[10] = 0;
          puVar6[0xb] = 0;
          puVar6[0xc] = 0;
          puVar6[0xd] = 0;
          puVar6[0xe] = 0;
          puVar6[0xf] = 0;
          *(undefined1 *)(puVar6 + 0x10) = 0;
          local_d0 = puVar6 + 4;
          FUN_10032f0f2();
          *(undefined4 *)(puVar6 + 0x13) = 0;
          *(undefined2 *)((long)puVar6 + 0x9c) = 0;
          puVar6[0x14] = 0;
          *(undefined4 *)(puVar6 + 0x15) = 0;
          puVar6[0x16] = 0;
          puVar6[0x17] = 0;
          puVar6[0x18] = 0;
          puVar6[0x19] = 0xffffffffffffffff;
          puVar6[0x1a] = 0;
          *(undefined1 *)(puVar6 + 0x1b) = 0;
          local_c0 = puVar6 + 0x1c;
          puVar6[0x24] = 0;
          puVar6[0x2a] = 0;
          puVar6[0x2d] = 0;
          puVar6[0x2e] = 0;
          puVar6[0x1c] = 0;
          puVar6[0x1d] = 0;
          puVar6[0x1e] = 0;
          puVar6[0x1f] = 0;
          puVar6[0x2c] = puVar6 + 0x2d;
          puVar6[0x2f] = 0;
          puVar6[0x30] = 0;
          puVar6[0x31] = 0;
          puVar6[0x32] = 0;
          puVar6[0x33] = 0;
          FUN_1001c62d9(puVar6 + 7,0x48);
        }
        local_88 = puVar6;
        plVar7 = operator_new(0x20);
        plVar7[1] = 0;
        plVar7[2] = 0;
        *plVar7 = (long)&PTR_FUN_1008707c0;
        plVar7[3] = (long)puVar6;
        local_80 = plVar7;
        if (puVar6 != (undefined8 *)0x0) {
          if (puVar6[2] == 0) {
            LOCK();
            plVar7[1] = plVar7[1] + 1;
            UNLOCK();
            LOCK();
            plVar7[2] = plVar7[2] + 1;
            UNLOCK();
            puVar6[1] = puVar6;
            puVar6[2] = plVar7;
          }
          else {
            if (*(long *)(puVar6[2] + 8) != -1) goto LAB_1005fad46;
            LOCK();
            plVar7[1] = plVar7[1] + 1;
            UNLOCK();
            LOCK();
            plVar7[2] = plVar7[2] + 1;
            UNLOCK();
            puVar6[1] = puVar6;
            puVar6[2] = plVar7;
            std::__shared_weak_count::__release_weak();
          }
          plVar8 = plVar7 + 1;
          LOCK();
          lVar1 = *plVar8;
          *plVar8 = *plVar8 + -1;
          UNLOCK();
          if (lVar1 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
            std::__shared_weak_count::__release_weak();
          }
        }
LAB_1005fad46:
        puVar6 = local_88;
        if (local_88 == (undefined8 *)0x0) {
          iVar3 = -0x6c;
        }
        else {
          iVar3 = FUN_1001e9c3e(local_88 + 7);
          if (iVar3 == 0) {
            pvVar9 = operator_new(0x100,(nothrow_t *)PTR_nothrow_10082c970);
            if (pvVar9 != (void *)0x0) {
              FUN_1001b7b04(local_98,"AMPLibraryClient ChangeProcessing - ");
              FUN_100235eb6(pvVar9,local_98);
            }
            plVar7 = operator_new(0x20);
            plVar7[1] = 0;
            plVar7[2] = 0;
            *plVar7 = (long)&PTR_FUN_100870910;
            plVar7[3] = (long)pvVar9;
            if (pvVar9 != (void *)0x0) {
              if (*(long *)((long)pvVar9 + 0x10) == 0) {
                LOCK();
                plVar7[1] = plVar7[1] + 1;
                UNLOCK();
                LOCK();
                plVar7[2] = plVar7[2] + 1;
                UNLOCK();
                *(void **)((long)pvVar9 + 8) = pvVar9;
                *(long **)((long)pvVar9 + 0x10) = plVar7;
              }
              else {
                if (*(long *)(*(long *)((long)pvVar9 + 0x10) + 8) != -1) goto LAB_1005faed6;
                LOCK();
                plVar7[1] = plVar7[1] + 1;
                UNLOCK();
                LOCK();
                plVar7[2] = plVar7[2] + 1;
                UNLOCK();
                *(void **)((long)pvVar9 + 8) = pvVar9;
                *(long **)((long)pvVar9 + 0x10) = plVar7;
                std::__shared_weak_count::__release_weak();
              }
              plVar8 = plVar7 + 1;
              LOCK();
              lVar1 = *plVar8;
              *plVar8 = *plVar8 + -1;
              UNLOCK();
              if (lVar1 == 0) {
                (**(code **)(*plVar7 + 0x10))(plVar7);
                std::__shared_weak_count::__release_weak();
              }
            }
LAB_1005faed6:
            puVar6[0x1c] = pvVar9;
            plVar8 = (long *)puVar6[0x1d];
            puVar6[0x1d] = plVar7;
            if (plVar8 != (long *)0x0) {
              LOCK();
              plVar7 = plVar8 + 1;
              lVar1 = *plVar7;
              *plVar7 = *plVar7 + -1;
              UNLOCK();
              if (lVar1 == 0) {
                (**(code **)(*plVar8 + 0x10))(plVar8);
                std::__shared_weak_count::__release_weak();
              }
            }
            if (pvVar9 != (void *)0x0) {
              FUN_1001b7a50(local_98);
            }
            if (puVar6[0x1c] == 0) {
              uVar5 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar5,0x10);
              if (cVar2 != '\0') {
                local_58 = 0x8220202;
                iStack_54 = 0x7a168c;
                uStack_50 = 1;
                uStack_4c = 0x822;
                uStack_4a = 0x4205;
                uStack_48 = 0x1007f;
                __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
              cVar2 = FUN_1001782e9(0,0);
              if (cVar2 != '\0') goto LAB_1005faf60;
              iVar3 = -0x6c;
            }
            else {
LAB_1005faf60:
              FUN_1002c3cd0(&local_58,puVar6 + 1);
              local_e0 = CONCAT44(iStack_54,local_58);
              plStack_d8 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
              if (local_e0 == 0) {
                plVar7 = &local_78;
              }
              else {
                plVar7 = &local_e0;
                local_78 = local_e0;
                uStack_70 = plStack_d8;
              }
              *plVar7 = 0;
              plVar7[1] = 0;
              if (plStack_d8 != (long *)0x0) {
                LOCK();
                plVar7 = plStack_d8 + 1;
                lVar1 = *plVar7;
                *plVar7 = *plVar7 + -1;
                UNLOCK();
                if (lVar1 == 0) {
                  (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
                  std::__shared_weak_count::__release_weak();
                }
              }
              plVar7 = uStack_70;
              uVar5 = puVar6[0x1c];
              local_a8 = (undefined4)local_78;
              uStack_a4 = local_78._4_4_;
              uStack_a0 = (undefined4)uStack_70;
              uStack_9c = uStack_70._4_4_;
              if (uStack_70 != (long *)0x0) {
                LOCK();
                uStack_70[2] = uStack_70[2] + 1;
                UNLOCK();
              }
              iVar3 = FUN_1002361e2(uVar5,&local_a8);
              if (CONCAT44(uStack_9c,uStack_a0) != 0) {
                std::__shared_weak_count::__release_weak();
              }
              if (iVar3 == 0) {
                iVar4 = FUN_100236620(puVar6[0x1c],1,1,0);
                iVar3 = 0;
                if (iVar4 != 0) {
                  if (DAT_1008c7d20 != -1) {
                    _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
                  }
                  uVar5 = DAT_1008c7d18;
                  cVar2 = _os_log_type_enabled(DAT_1008c7d18,0x10);
                  iVar3 = iVar4;
                  if (cVar2 != '\0') {
                    local_58 = 0x4000100;
                    iStack_54 = iVar4;
                    __os_log_impl(0x100000000,uVar5,0x10,
                                  "**ERROR**: mCCP->Startup() failed! status=%d",&local_58,8);
                  }
                }
              }
              else {
                if (DAT_1008c7d20 != -1) {
                  _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
                }
                uVar5 = DAT_1008c7d18;
                cVar2 = _os_log_type_enabled(DAT_1008c7d18,0x10);
                if (cVar2 != '\0') {
                  local_58 = 0x4000100;
                  iStack_54 = iVar3;
                  __os_log_impl(0x100000000,uVar5,0x10,"**ERROR**: mCCP->Setup() failed! status=%d",
                                &local_58,8);
                }
              }
              if (plVar7 != (long *)0x0) {
                LOCK();
                plVar8 = plVar7 + 1;
                lVar1 = *plVar8;
                *plVar8 = *plVar8 + -1;
                UNLOCK();
                if (lVar1 == 0) {
                  (**(code **)(*plVar7 + 0x10))(plVar7);
                  std::__shared_weak_count::__release_weak();
                }
              }
              if (iVar3 == 0) {
                *(undefined1 *)(puVar6 + 0x10) = 1;
                FUN_100203686(local_60,&local_88);
                iVar3 = 0;
                goto LAB_1005fb1ed;
              }
            }
            if (DAT_1008c7d20 != -1) {
              _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
            }
            uVar5 = DAT_1008c7d18;
            cVar2 = _os_log_type_enabled(DAT_1008c7d18,0x10);
            if (cVar2 != '\0') {
              pcVar10 = "**ERROR**: SetupAndStartCCP() failed! status:%d";
              iStack_54 = iVar3;
              goto LAB_1005fb184;
            }
          }
          else {
            if (DAT_1008c7d20 != -1) {
              _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
            }
            uVar5 = DAT_1008c7d18;
            cVar2 = _os_log_type_enabled(DAT_1008c7d18,0x10);
            if (cVar2 != '\0') {
              pcVar10 = "**ERROR**: CreateLock(mLock) failed! status:%d";
              iStack_54 = iVar3;
LAB_1005fb184:
              iVar3 = iStack_54;
              local_58 = 0x4000100;
              __os_log_impl(0x100000000,uVar5,0x10,pcVar10,&local_58,8);
              if (DAT_1008c7d20 != -1) {
                _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
              }
            }
          }
          uVar5 = DAT_1008c7d18;
          cVar2 = _os_log_type_enabled(DAT_1008c7d18,0x10);
          if (cVar2 != '\0') {
            local_58 = 0x4000100;
            iStack_54 = iVar3;
            __os_log_impl(0x100000000,uVar5,0x10,
                          "**ERROR**: AMPLibraryClient::Setup() failed! status:%d",&local_58,8);
          }
        }
LAB_1005fb1ed:
        if (local_80 != (long *)0x0) {
          LOCK();
          plVar7 = local_80 + 1;
          lVar1 = *plVar7;
          *plVar7 = *plVar7 + -1;
          UNLOCK();
          if (lVar1 == 0) {
            (**(code **)(*local_80 + 0x10))(local_80);
            std::__shared_weak_count::__release_weak();
          }
        }
        goto LAB_1005face2;
      }
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        iStack_54 = 0x7a0a90;
        uStack_50 = 1;
        uStack_4c = 0x822;
        uStack_4a = 0x40c7;
        uStack_48 = 0x1007f;
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        iStack_54 = 0x7a0a90;
        uStack_50 = 1;
        uStack_4c = 0x822;
        uStack_4a = 0x40a1;
        uStack_48 = 0x1007f;
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
  }
  else {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      iStack_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0x4088;
      uStack_48 = 0x1007f;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  iVar3 = -0x32;
LAB_1005face2:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

