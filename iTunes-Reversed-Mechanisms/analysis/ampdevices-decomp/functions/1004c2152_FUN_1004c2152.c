// name: FUN_1004c2152
// address: 1004c2152

/* WARNING: Type propagation algorithm not settling */

int FUN_1004c2152(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  int local_5c [4];
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined4 uStack_46;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar8 = FUN_1001c63e1(0x10000);
  if (lVar8 == 0) {
    uVar9 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar9,0x10);
    if (cVar6 != '\0') {
      local_5c[1] = 0x8220202;
      local_5c[2] = 0x7a0a90;
      local_5c[3] = 1;
      uStack_4c = 0x822;
      uStack_4a = 0x219;
      uStack_48 = 0x7a;
      uStack_46 = 1;
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",local_5c + 1,0x16);
    }
    iVar7 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x4f0) + 0x10))
              (local_5c + 1,*(long **)(param_1 + 0x4f0),0x6175636d,*param_2,param_2[1]);
    plVar2 = (long *)(param_1 + 0x570);
    FUN_100217418(plVar2,local_5c + 1);
    plVar5 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,local_5c[3]));
    if (plVar5 != (long *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (*plVar2 != 0) {
      do {
        local_5c[0] = 0;
        iVar7 = (**(code **)(*(long *)*plVar2 + 0x10))((long *)*plVar2,lVar8,0x10000,local_5c);
        bVar4 = true;
        if (iVar7 != -0x27) {
          if (iVar7 != 0) {
            if (iVar7 != -0x80) {
              uVar9 = FUN_1001cc310();
              cVar6 = _os_log_type_enabled(uVar9,0x10);
              if (cVar6 != '\0') {
                local_5c[1] = 0x8220202;
                local_5c[2] = 0x7a0a90;
                local_5c[3] = 1;
                uStack_4c = 0x400;
                uStack_4a = (undefined2)iVar7;
                uStack_48 = (undefined2)((uint)iVar7 >> 0x10);
                __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",local_5c + 1,
                                    0x12);
              }
            }
            goto LAB_1004c22c4;
          }
          bVar4 = false;
        }
        iVar7 = 0;
        if ((local_5c[0] == 0) || (FUN_10017983e(param_3,lVar8), bVar4)) goto LAB_1004c22c4;
      } while( true );
    }
    uVar9 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar9,0x10);
    if (cVar6 != '\0') {
      local_5c[1] = 0x8220202;
      local_5c[2] = 0x7a0a90;
      local_5c[3] = 1;
      uStack_4c = 0x822;
      uStack_4a = 0x541c;
      uStack_48 = 0x7d;
      uStack_46 = 1;
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",local_5c + 1,0x16);
    }
    FUN_1001782e9(0,0);
    iVar7 = -0x32;
  }
LAB_1004c22c4:
  FUN_1001c64c1(lVar8);
  FUN_1002188e4(param_1 + 0x570);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar7;
}

