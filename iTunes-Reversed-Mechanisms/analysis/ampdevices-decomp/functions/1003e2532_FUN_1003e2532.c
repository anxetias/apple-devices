// name: FUN_1003e2532
// address: 1003e2532

int FUN_1003e2532(int param_1,long param_2,long param_3,ulong *param_4,int *param_5,
                 undefined8 param_6,uint param_7,undefined4 *param_8)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong *puVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  int *piVar9;
  int iVar10;
  int local_118 [2];
  int local_110 [6];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  long *local_e0;
  long *local_d8;
  undefined8 local_d0;
  ulong *local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  int local_9c;
  undefined4 local_98;
  char *local_94;
  undefined2 local_8c;
  char *local_8a;
  long local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_5 != (int *)0x0) {
    *(undefined1 *)(param_5 + 2) = 1;
    param_5[3] = -0x10000;
    param_5[4] = 0;
  }
  iVar6 = -0x32;
  local_d0 = param_6;
  local_c8 = param_4;
  if (param_1 < 0x4d46494c) {
    if (param_1 == 0x46494c45) {
LAB_1003e25c8:
      local_98 = 0;
      uVar7 = FUN_1003b73be(param_1,param_2,0);
      local_c0 = param_3;
      iVar6 = FUN_100466aac("FFIAFFIAFFIA FIAFFIAFFIACFIACFIACFIAADDCFFIAFFIAEVAWEVAWEVAW VAWEVAWEVAWVAW.EVAWEVAW"
                            ,uVar7,local_98,local_118,0,0xf);
      iVar10 = 0x41494646;
      if (local_118[0] != 0x41494643) {
        iVar10 = local_118[0];
      }
      local_9c = iVar10;
      if (iVar6 != 0) goto LAB_1003e2772;
      uVar7 = 0;
      if (param_1 == 0x4d46494c) {
LAB_1003e265e:
        uVar7 = 0x11bd;
      }
      else if (param_1 == 0x48545450) {
        uVar7 = 0x110c;
      }
      else if (param_1 == 0x46494c45) goto LAB_1003e265e;
      *param_8 = uVar7;
      if (local_c8 != (ulong *)0x0 && iVar10 == 0x41494646) {
        *local_c8 = *local_c8 | 0x1c0;
        local_c8[0x16] = 0xffff0000;
      }
      if (local_c0 == 0) {
        iVar6 = 0;
      }
      else {
        local_b8 = (long *)0x0;
        uStack_b0 = (long *)0x0;
        *(int *)(local_c0 + 0x1030) = iVar10;
        *(byte *)(local_c0 + 2) = *(byte *)(local_c0 + 2) | 4;
        iVar6 = FUN_1003db90a(param_1,param_2,0,0,0);
        plVar1 = uStack_b0;
        if (iVar6 == 0) {
          if ((param_1 == 0x46494c45) && (DAT_1008c7848 != 0)) {
            iVar6 = -0x2f;
            if ((param_7 >> 0xc & 1) == 0) {
              uVar8 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar8,0x10);
              if (cVar5 != '\0') {
                local_98 = 0x8220202;
                local_94 = "Assertion failure";
                local_8c = 0x822;
                local_8a = "(options & kGetInfoRequestIsPreemptive) != 0";
                __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_98,0x16
                                   );
              }
              FUN_1001782e9(0,0);
            }
          }
          else {
            local_f8 = (undefined4)local_b8;
            uStack_f4 = local_b8._4_4_;
            uStack_f0 = (undefined4)uStack_b0;
            uStack_ec = uStack_b0._4_4_;
            if (uStack_b0 != (long *)0x0) {
              LOCK();
              uStack_b0[1] = uStack_b0[1] + 1;
              UNLOCK();
            }
            iVar6 = FUN_1003dc014(&local_f8,iVar10,0,0,&local_98,0,0);
            if (plVar1 != (long *)0x0) {
              LOCK();
              plVar2 = plVar1 + 1;
              lVar3 = *plVar2;
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (lVar3 == 0) {
                (**(code **)(*plVar1 + 0x10))(plVar1);
                std::__shared_weak_count::__release_weak();
              }
            }
            if ((iVar6 == 0) && (FUN_1003e2a20(&local_98,local_c0,local_c8), iVar10 == 0x41494646))
            {
              if (param_5 == (int *)0x0) {
                param_5 = local_118;
                FUN_1001c62d9(param_5,0x20);
                piVar9 = local_110;
                local_118[0] = 0x61727477;
              }
              else {
                piVar9 = param_5 + 2;
              }
              lVar3 = local_c0;
              *(undefined1 *)(param_5 + 2) = 1;
              piVar9[1] = -0x10000;
              puVar4 = local_c8;
              piVar9[2] = 0;
              local_e0 = local_b8;
              local_d8 = uStack_b0;
              if (uStack_b0 != (long *)0x0) {
                LOCK();
                uStack_b0[1] = uStack_b0[1] + 1;
                UNLOCK();
              }
              FUN_1003de1c2(local_b8,uStack_b0,lVar3,local_c8,param_5,local_d0);
              FUN_10021e316(&local_e0);
              if (puVar4 != (ulong *)0x0) {
                puVar4[0x16] = *(ulong *)(piVar9 + 1);
              }
            }
            if (local_48 != 0) {
              FUN_1001c64c1();
            }
          }
          (**(code **)(*local_b8 + 0x1d0))();
          plVar1 = uStack_b0;
          local_b8 = (long *)0x0;
          uStack_b0 = (long *)0x0;
          if (plVar1 != (long *)0x0) {
            LOCK();
            plVar2 = plVar1 + 1;
            lVar3 = *plVar2;
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (lVar3 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
              std::__shared_weak_count::__release_weak();
            }
          }
        }
        if (uStack_b0 != (long *)0x0) {
          LOCK();
          plVar1 = uStack_b0 + 1;
          lVar3 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar3 == 0) {
            (**(code **)(*uStack_b0 + 0x10))(uStack_b0);
            std::__shared_weak_count::__release_weak();
          }
        }
      }
      goto LAB_1003e2772;
    }
    if (param_1 != 0x48545450) goto LAB_1003e2772;
  }
  else if (param_1 != 0x53485244) {
    if (param_1 != 0x4d46494c) goto LAB_1003e2772;
    goto LAB_1003e25c8;
  }
  iVar6 = FUN_1003dbb78(param_2 + 0x2c,&local_9c);
  if (iVar6 == 0) {
    if ((param_1 == 0x48545450) || (param_1 == 0x53485244)) {
      uVar7 = 0x110c;
    }
    else {
      uVar7 = 0;
      if (param_1 == 0x4d46494c) {
        uVar7 = 0x11bd;
      }
    }
    *param_8 = uVar7;
    iVar6 = 0;
    if (param_3 != 0) {
      *(int *)(param_3 + 0x1030) = local_9c;
      *(byte *)(param_3 + 2) = *(byte *)(param_3 + 2) | 4;
    }
  }
LAB_1003e2772:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar6;
}

