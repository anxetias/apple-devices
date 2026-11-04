// name: FUN_1005766ae
// address: 1005766ae

/* WARNING: Type propagation algorithm not settling */

int FUN_1005766ae(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  long local_78;
  long *plStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  int local_4c [4];
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined2 uStack_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_4c[0] = 0;
  iVar5 = 0;
  if ((param_1[5] != 0) || (iVar5 = (int)param_1[0x18], (int)param_1[0x18] != 0))
  goto LAB_100576913;
  local_98 = (undefined4)param_1[1];
  uStack_94 = *(undefined4 *)((long)param_1 + 0xc);
  uStack_90 = (undefined4)param_1[2];
  uStack_8c = *(undefined4 *)((long)param_1 + 0x14);
  if (param_1[2] != 0) {
    LOCK();
    plVar1 = (long *)(param_1[2] + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  FUN_1005705c2(local_4c + 1,&local_98,local_4c);
  FUN_100217418(param_1 + 5,local_4c + 1);
  plVar1 = (long *)CONCAT26(uStack_3a,CONCAT24(uStack_3c,local_4c[3]));
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
  plVar1 = (long *)CONCAT44(uStack_8c,uStack_90);
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
  plVar1 = (long *)param_1[5];
  if (plVar1 == (long *)0x0) {
LAB_1005768fa:
    if (local_4c[0] == 0x2351) {
      local_4c[0] = 0;
    }
  }
  else {
    cVar4 = (**(code **)(*plVar1 + 0x50))();
    if (cVar4 == '\0') goto LAB_1005768fa;
    if ((*(int *)((long)param_1 + 0x94) == 5) && (param_1[0x19] == 0)) {
      local_58 = 0;
      iVar5 = (**(code **)(*param_1 + 0x48))(param_1);
      local_4c[0] = iVar5;
      if (iVar5 != -0x80) {
        if (iVar5 == 0) {
          uVar7 = FUN_100166844(local_58,PTR_cf_sinfs_1008529f0);
          lVar6 = FUN_1001705fc(uVar7);
          param_1[0x19] = lVar6;
          FUN_10017060f(local_58);
          goto LAB_1005767ba;
        }
        uVar7 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar7,0x10);
        if (cVar4 == '\0') goto LAB_10057690a;
        uStack_3a = (undefined2)iVar5;
        uStack_38 = (undefined2)((uint)iVar5 >> 0x10);
LAB_100576a23:
        uStack_3c = 0x400;
        local_4c[3] = 1;
        local_4c[2] = 0x7a0a90;
        local_4c[1] = 0x8220202;
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",local_4c + 1,0x12);
      }
    }
    else {
LAB_1005767ba:
      if ((char)param_1[0x12] == '\x01') {
        plVar1 = (long *)param_1[5];
        lVar6 = param_1[0x19];
        local_88 = (undefined4)param_1[3];
        uStack_84 = *(undefined4 *)((long)param_1 + 0x1c);
        uStack_80 = (undefined4)param_1[4];
        uStack_7c = *(undefined4 *)((long)param_1 + 0x24);
        if (param_1[4] != 0) {
          LOCK();
          plVar2 = (long *)(param_1[4] + 8);
          *plVar2 = *plVar2 + 1;
          UNLOCK();
        }
        (**(code **)(*plVar1 + 0x30))(plVar1,lVar6,&local_88);
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
      }
      if (*(char *)((long)param_1 + 0x91) == '\x01') {
        plVar1 = (long *)param_1[5];
        uVar3 = *(undefined4 *)((long)param_1 + 0x94);
        lVar6 = param_1[0x19];
        local_78 = param_1[3];
        plStack_70 = (long *)param_1[4];
        if (param_1[4] != 0) {
          LOCK();
          plVar2 = (long *)(param_1[4] + 8);
          *plVar2 = *plVar2 + 1;
          UNLOCK();
        }
        local_68 = (undefined4)param_1[7];
        uStack_64 = *(undefined4 *)((long)param_1 + 0x3c);
        uStack_60 = (undefined4)param_1[8];
        uStack_5c = *(undefined4 *)((long)param_1 + 0x44);
        if (param_1[8] != 0) {
          LOCK();
          plVar2 = (long *)(param_1[8] + 8);
          *plVar2 = *plVar2 + 1;
          UNLOCK();
        }
        local_4c[0] = (**(code **)(*plVar1 + 0x28))
                                (plVar1,uVar3,lVar6,&local_78,&local_68,param_1 + 0x14);
        plVar1 = (long *)CONCAT44(uStack_5c,uStack_60);
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
        if (plStack_70 != (long *)0x0) {
          LOCK();
          plVar1 = plStack_70 + 1;
          lVar6 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar6 == 0) {
            (**(code **)(*plStack_70 + 0x10))(plStack_70);
            std::__shared_weak_count::__release_weak();
          }
        }
        iVar5 = local_4c[0];
        if (local_4c[0] != -0x80) {
          if (local_4c[0] == 0) goto LAB_1005768e7;
          uVar7 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar7,0x10);
          if (cVar4 != '\0') {
            uStack_3a = (undefined2)iVar5;
            uStack_38 = (undefined2)((uint)iVar5 >> 0x10);
            goto LAB_100576a23;
          }
        }
      }
      else {
LAB_1005768e7:
        if (param_1[0x16] == 0) {
          *(undefined1 *)(param_1 + 0x13) = 1;
        }
      }
    }
  }
LAB_10057690a:
  *(int *)(param_1 + 0x18) = local_4c[0];
  iVar5 = local_4c[0];
LAB_100576913:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

