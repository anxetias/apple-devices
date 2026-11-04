// name: FUN_1005409fc
// address: 1005409fc

undefined8 FUN_1005409fc(long *param_1,long param_2,char param_3,undefined4 *param_4)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 local_88 [8];
  long *local_80;
  undefined8 local_78;
  long *plStack_70;
  undefined8 local_60;
  long local_58;
  undefined1 local_49;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined2 uStack_38;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_60 = 0;
  local_58 = 0;
  local_78 = 0;
  plStack_70 = (long *)0x0;
  local_49 = 1;
  lVar6 = (**(code **)(*param_1 + 0x48))();
  lVar8 = 0;
  if (0 < param_2) {
    lVar8 = param_2;
  }
  if (lVar6 < param_2) {
    lVar8 = 0;
  }
  if ((lVar8 == 0 && param_3 == '\0') && (lVar8 = 120000, lVar6 < 120000)) {
    lVar8 = lVar6 / 2;
  }
  (**(code **)(*param_1 + 0x210))(&local_48,param_1,lVar8,1);
  local_80 = (long *)CONCAT26(uStack_3a,CONCAT24(uStack_3c,local_40));
  plStack_70 = local_80;
  if (CONCAT44(uStack_44,local_48) != 0) {
    if (local_80 != (long *)0x0) {
      LOCK();
      local_80[1] = local_80[1] + 1;
      UNLOCK();
    }
    iVar4 = FUN_1005d26ff(local_88,0,&local_58);
    if (local_80 != (long *)0x0) {
      LOCK();
      plVar1 = local_80 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*local_80 + 0x10))(local_80);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (iVar4 != -0x80) {
      if (iVar4 == 0) {
        FUN_1005d36e5(local_58,0x61776765,&local_49);
        iVar4 = FUN_1005d38c7(0,0,&local_60);
        if (iVar4 == 0) {
          FUN_1005d3b11(local_60,0x7fffffff,local_58);
          *param_4 = 0x800001;
          uVar5 = FUN_1005d35ed(local_58);
          param_4[1] = uVar5;
          goto LAB_100540c00;
        }
        uVar7 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar7,0x10);
        if (cVar3 == '\0') goto LAB_100540c00;
        uStack_3a = (undefined2)iVar4;
        uStack_38 = (undefined2)((uint)iVar4 >> 0x10);
      }
      else {
        uVar7 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar7,0x10);
        if (cVar3 == '\0') goto LAB_100540c00;
        uStack_3a = (undefined2)iVar4;
        uStack_38 = (undefined2)((uint)iVar4 >> 0x10);
      }
      uStack_3c = 0x400;
      local_40 = 1;
      uStack_44 = 0x7a0a90;
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_48,0x12);
    }
  }
LAB_100540c00:
  if (local_58 != 0) {
    LOCK();
    piVar2 = (int *)(local_58 + 4);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      FUN_1005d25cb();
    }
  }
  uVar7 = local_60;
  if (plStack_70 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

