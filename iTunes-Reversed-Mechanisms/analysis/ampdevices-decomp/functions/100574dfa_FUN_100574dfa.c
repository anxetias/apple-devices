// name: FUN_100574dfa
// address: 100574dfa

int FUN_100574dfa(long *param_1,undefined8 param_2,undefined4 *param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long local_c0 [2];
  undefined8 local_b0;
  long local_a8;
  undefined4 *local_a0;
  long *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  long local_78 [2];
  void *local_68;
  undefined4 local_5c;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_b0 = param_2;
  local_a0 = param_3;
  local_98 = param_1;
  local_a8 = FUN_10017076e(param_2);
  if (0 < local_a8) {
    local_90 = *(undefined8 *)PTR__kCFAllocatorMalloc_10082e020;
    lVar8 = 0;
    do {
      FUN_10032f0f2(local_c0);
      local_68 = (void *)0x0;
      local_5c = 0;
      FUN_10032f0f2(local_78);
      lVar6 = FUN_10016499b(local_b0,lVar8);
      if (lVar6 == 0) {
        uVar7 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar7,0x10);
        if (cVar3 != '\0') {
          local_4a = "sinfDict != __null";
LAB_10057506f:
          local_4c = 0x822;
          local_54 = "Assertion failure";
          local_58 = 0x8220202;
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
LAB_100575024:
        FUN_1001782e9(0,0);
      }
      else {
        uVar7 = FUN_1001669a0(lVar6,PTR_cf_sinf_1008529f8);
        FUN_1001a78d6(&local_58,uVar7);
        FUN_1001a7b1c(local_c0,&local_58);
        FUN_1001a85d4(&local_58);
        if (local_c0[0] == 0) {
          uVar7 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar7,0x10);
          if (cVar3 != '\0') {
            local_4a = "sinfData != __null";
            goto LAB_10057506f;
          }
          goto LAB_100575024;
        }
        uVar7 = FUN_1001a8626(local_c0);
        uVar4 = FUN_1001a8610(local_c0);
        iVar5 = FUN_1000afa10(uVar7,uVar4,&local_68,&local_5c);
        if (iVar5 != 0) {
          if (iVar5 != -0x80) {
            uVar7 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar7,0x10);
            if (cVar3 != '\0') {
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
LAB_10057514b:
              local_4c = 0x400;
              local_54 = "Assertion failure";
              local_58 = 0x8220202;
              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
          }
LAB_100575191:
          FUN_1001a85d4(local_78);
          FUN_1001a85d4(local_c0);
          goto LAB_1005751a6;
        }
        uVar7 = FUN_100170e14(0,local_68,local_5c,local_90);
        FUN_1001a78d6(&local_58,uVar7);
        FUN_1001a7b1c(local_78,&local_58);
        FUN_1001a85d4(&local_58);
        if (local_78[0] == 0) {
          uVar7 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar7,0x10);
          if (cVar3 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "pinfData != __null";
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          _free(local_68);
          iVar5 = -0x6c;
          goto LAB_100575191;
        }
        uVar4 = FUN_100167d23(lVar6,PTR_cf_id_100852a18);
        local_88 = *local_a0;
        uStack_84 = local_a0[1];
        uStack_80 = local_a0[2];
        uStack_7c = local_a0[3];
        if (*(long *)(local_a0 + 2) != 0) {
          LOCK();
          plVar1 = (long *)(*(long *)(local_a0 + 2) + 8);
          *plVar1 = *plVar1 + 1;
          UNLOCK();
        }
        iVar5 = (**(code **)(*local_98 + 0xf0))(local_98,uVar4,0,local_78[0],0,&local_88);
        plVar1 = (long *)CONCAT44(uStack_7c,uStack_80);
        if (plVar1 != (long *)0x0) {
          LOCK();
          plVar2 = plVar1 + 1;
          lVar6 = *plVar2;
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (lVar6 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (iVar5 != 0) {
          if (iVar5 != -0x80) {
            uVar7 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar7,0x10);
            if (cVar3 != '\0') {
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
              goto LAB_10057514b;
            }
          }
          goto LAB_100575191;
        }
      }
      FUN_1001a85d4(local_78);
      FUN_1001a85d4(local_c0);
      lVar8 = lVar8 + 1;
    } while (local_a8 != lVar8);
  }
  iVar5 = 0;
LAB_1005751a6:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar5;
}

