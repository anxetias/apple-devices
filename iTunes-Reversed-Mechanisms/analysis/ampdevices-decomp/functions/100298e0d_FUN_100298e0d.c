// name: FUN_100298e0d
// address: 100298e0d

int FUN_100298e0d(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined1 local_f6 [14];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c0;
  ulong local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined2 local_8c;
  undefined2 uStack_8a;
  undefined2 uStack_88;
  undefined4 uStack_86;
  int local_78;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_c0 = param_4;
  local_a8 = FUN_1001c63e1(0x1000);
  if (local_a8 == 0) {
    uVar8 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar8,0x10);
    if (cVar5 != '\0') {
      local_98 = 0x8220202;
      local_94 = "Assertion failure";
      local_8c = 0x822;
      uStack_8a = 0xd9a;
      uStack_88 = 0x7a;
      uStack_86 = 1;
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_98,0x16);
    }
    FUN_1001782e9(0,0);
    iVar6 = -0x6c;
  }
  else {
    iVar6 = (**(code **)(*(long *)*param_1 + 0xf8))((long *)*param_1,&local_b0);
    if (iVar6 != -0x80) {
      if (iVar6 == 0) {
        local_a0 = local_b0;
        do {
          plVar4 = (long *)param_1[1];
          local_e8 = *(undefined4 *)param_1;
          uStack_e4 = *(undefined4 *)((long)param_1 + 4);
          uStack_e0 = *(undefined4 *)(param_1 + 1);
          uStack_dc = *(undefined4 *)((long)param_1 + 0xc);
          if (plVar4 != (long *)0x0) {
            LOCK();
            plVar4[1] = plVar4[1] + 1;
            UNLOCK();
          }
          iVar6 = FUN_1002994d8(&local_e8,param_2,0,0x10000);
          if (plVar4 != (long *)0x0) {
            LOCK();
            plVar1 = plVar4 + 1;
            lVar2 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar2 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
              std::__shared_weak_count::__release_weak();
            }
          }
          if (iVar6 != 0) goto LAB_1002990fc;
          iVar6 = (**(code **)(*(long *)*param_1 + 0xf8))((long *)*param_1,&local_a0);
          if (iVar6 != 0) {
            if (iVar6 == -0x80) goto LAB_1002990fc;
            uVar8 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar8,0x10);
            if (cVar5 == '\0') goto LAB_1002990fc;
            uStack_8a = (undefined2)iVar6;
            uStack_88 = (undefined2)((uint)iVar6 >> 0x10);
            goto LAB_1002992c8;
          }
          local_a0 = local_a0 + -4;
          iVar6 = FUN_10026b3e0(param_2,param_3);
          if (iVar6 != 0) {
            if (iVar6 == -0x80) goto LAB_1002990fc;
            uVar8 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar8,0x10);
            if (cVar5 == '\0') goto LAB_1002990fc;
            uStack_8a = (undefined2)iVar6;
            uStack_88 = (undefined2)((uint)iVar6 >> 0x10);
            goto LAB_1002992c8;
          }
          uVar3 = *(uint *)(param_3 + 0x14);
          if (0x700 < (ulong)uVar3) {
            uVar8 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar8,0x10);
            if (cVar5 != '\0') {
              local_98 = 0x8220202;
              local_94 = "Assertion failure";
              local_8c = 0x822;
              uStack_8a = 0x75f1;
              uStack_88 = 0x7b;
              uStack_86 = 1;
              __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_98,0x16);
            }
            FUN_1001782e9(0,0);
            iVar6 = -0x32;
            goto LAB_1002990fc;
          }
          cVar5 = FUN_100271d6f(param_3,local_c0);
          if (cVar5 == '\0') {
            iVar6 = 0;
            goto LAB_100299072;
          }
          local_b8 = (ulong)uVar3;
          iVar6 = (**(code **)(*(long *)*param_1 + 0xa8))((long *)*param_1,&local_b8,local_a8);
          if (iVar6 != 0) {
            if (iVar6 == -0x80) goto LAB_1002990fc;
            if (iVar6 != -0x27) {
              uVar8 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar8,0x10);
              if (cVar5 != '\0') {
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
LAB_1002993aa:
                local_4c = 0x400;
                local_54 = "Assertion failure";
                local_58 = 0x8220202;
                __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x12)
                ;
              }
              goto LAB_1002990fc;
            }
LAB_1002991f9:
            iVar6 = 0;
            break;
          }
          if (local_b8 != *(uint *)(param_3 + 0x14)) {
            uVar8 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar8,0x10);
            if (cVar5 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "count == decodedHeader->frameSize";
              __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
            iVar6 = -0x27;
            goto LAB_1002990fc;
          }
          cVar5 = FUN_100271d11(param_3,local_a8);
          if (cVar5 != '\0') goto LAB_1002991f9;
          plVar4 = (long *)param_1[1];
          local_d8 = *(undefined4 *)param_1;
          uStack_d4 = *(undefined4 *)((long)param_1 + 4);
          uStack_d0 = *(undefined4 *)(param_1 + 1);
          uStack_cc = *(undefined4 *)((long)param_1 + 0xc);
          if (plVar4 != (long *)0x0) {
            LOCK();
            plVar4[1] = plVar4[1] + 1;
            UNLOCK();
          }
          iVar7 = FUN_1002994d8(&local_d8,local_f6,0,0);
          if (plVar4 != (long *)0x0) {
            LOCK();
            plVar1 = plVar4 + 1;
            lVar2 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar2 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
              std::__shared_weak_count::__release_weak();
            }
          }
          iVar6 = iVar7;
          if (iVar7 == 0) {
            iVar6 = FUN_10026b3e0(local_f6,&local_98);
            if (iVar6 != 0) {
              if (iVar6 != -0x80) {
                uVar8 = FUN_1001cc310();
                cVar5 = _os_log_type_enabled(uVar8,0x10);
                if (cVar5 != '\0') {
                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
                  goto LAB_1002993aa;
                }
              }
              goto LAB_1002990fc;
            }
            iVar6 = iVar7;
            if ((((*(int *)(param_3 + 0xc) == CONCAT22(uStack_8a,local_8c)) &&
                 (*(char *)(param_3 + 1) == local_98._1_1_)) &&
                (*(char *)(param_3 + 2) == local_98._2_1_)) &&
               ((*(char *)(param_3 + 5) == local_94._1_1_ && (*(int *)(param_3 + 0x20) == local_78))
               )) goto LAB_1002991f9;
          }
LAB_100299072:
          local_a0 = local_a0 + 1;
          (**(code **)(*(long *)*param_1 + 0xf0))();
        } while ((ulong)(local_a0 - local_b0) < 0x10000);
        (**(code **)(*(long *)*param_1 + 0xf0))((long *)*param_1,local_a0);
      }
      else {
        uVar8 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar8,0x10);
        if (cVar5 != '\0') {
          uStack_8a = (undefined2)iVar6;
          uStack_88 = (undefined2)((uint)iVar6 >> 0x10);
LAB_1002992c8:
          local_8c = 0x400;
          local_94 = "Assertion failure";
          local_98 = 0x8220202;
          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_98,0x12);
        }
      }
    }
LAB_1002990fc:
    FUN_1001c64c1(local_a8);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar6;
}

