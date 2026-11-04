// name: FUN_100548d34
// address: 100548d34

/* WARNING: Type propagation algorithm not settling */

ulong FUN_100548d34(undefined4 param_1,long param_2,int param_3,void *param_4,int param_5,
                   undefined4 param_6)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  char cVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  int iVar9;
  ulong uVar10;
  int *piVar11;
  ulong uVar12;
  undefined8 local_508;
  int local_4fc;
  void *local_4f8;
  uint local_4f0;
  undefined4 local_4ec;
  int local_4e8 [3];
  undefined2 uStack_4dc;
  undefined2 uStack_4da;
  undefined2 uStack_4d8;
  int local_58 [3];
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined4 uStack_46;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_508 = 0;
  iVar9 = 0;
  if (param_3 == 0x46494c45) {
    iVar9 = (uint)*(byte *)(param_2 + 0x64af) * 2 + 4;
    if (*(char *)(param_2 + 0x64b0) == '\0') {
      iVar9 = (uint)*(byte *)(param_2 + 0x64af) * 2;
    }
  }
  local_4fc = param_5;
  local_4f8 = param_4;
  local_4ec = param_6;
  if (DAT_1008c7810 == (long *)0x0) {
    local_4e8[0] = 0;
    local_4e8[1] = 0;
    local_4e8[2] = 0;
    uStack_4dc = 0;
    uStack_4da = 0;
  }
  else {
    (**(code **)(*DAT_1008c7810 + 0x40))(local_4e8,DAT_1008c7810,param_3);
  }
  plVar2 = (long *)(param_2 + 0x38);
  FUN_100217418(plVar2,local_4e8);
  plVar4 = (long *)CONCAT26(uStack_4da,CONCAT24(uStack_4dc,local_4e8[2]));
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      std::__shared_weak_count::__release_weak();
    }
  }
  uVar7 = 0;
  if (*plVar2 != 0) goto LAB_100548f95;
  if (param_3 == 0x44574e4c) {
    uVar7 = FUN_100548be8(param_2,local_4f8);
    goto LAB_100548f95;
  }
  uVar6 = FUN_1003ae8a5(param_1,local_4f8,param_3,(int)(char)local_4ec,iVar9,&local_508);
  uVar12 = (ulong)uVar6;
  if (uVar6 != 0xffffff80) {
    if (uVar6 == 0) {
      FUN_1001c62d9(local_4e8,0x488);
      local_4e8[0] = param_3;
      _memcpy(local_4e8 + 1,local_4f8,0x460);
      FUN_10053207e(local_58,local_4e8,local_508,(char)local_4ec == '\x04');
      FUN_100217418(plVar2,local_58);
      plVar4 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,local_58[2]));
      if (plVar4 != (long *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        lVar3 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar3 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
          std::__shared_weak_count::__release_weak();
        }
      }
      plVar4 = (long *)*plVar2;
      if (plVar4 == (long *)0x0) {
        uVar8 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar8,0x10);
        if (cVar5 != '\0') {
          local_58[0] = 0x8220202;
          local_58[1] = 0x7a0a90;
          local_58[2] = 1;
          uStack_4c = 0x822;
          uStack_4a = 0x671d;
          uStack_48 = 0x7e;
          uStack_46 = 1;
          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",local_58,0x16);
        }
        FUN_1001782e9(0,0);
        uVar12 = 0xffffffce;
        goto LAB_100548f78;
      }
      if (*(char *)(param_2 + 0x64ae) != '\0') {
        uVar7 = 0;
        goto LAB_100548f95;
      }
      if (*(undefined8 **)(param_2 + 0x4b8) == (undefined8 *)0x0) {
        local_4f0 = 0;
        if ((*(char *)(param_2 + 0x64b2) == '\0') &&
           (FUN_10057db47(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),0x66627566
                          ,&local_4f0), 1 < local_4f0)) {
          uVar7 = (ulong)(local_4f0 >> 1);
        }
        else {
          uVar7 = 0x8000;
        }
        local_4f0 = (uint)uVar7;
        uVar12 = ((((uint)(local_4fc * 2000) >> 3) + local_4f0) - 1) / uVar7;
        uVar10 = 2;
        if (2 < (uint)uVar12) {
          uVar10 = uVar12;
        }
        uVar6 = (**(code **)(*(long *)*plVar2 + 0x118))((long *)*plVar2,uVar10,uVar7);
        uVar12 = (ulong)uVar6;
        if ((uVar6 != 0xffffff80) && (uVar6 != 0)) {
          uVar8 = FUN_1001cc310();
          cVar5 = _os_log_type_enabled(uVar8,0x10);
          if (cVar5 != '\0') {
            piVar11 = local_58;
            local_58[0] = 0x8220202;
            local_58[1] = 0x7a0a90;
            local_58[2] = 1;
            uStack_4c = 0x400;
            uStack_4a = (undefined2)uVar6;
            uStack_48 = (undefined2)(uVar6 >> 0x10);
LAB_100549147:
            __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",piVar11,0x12);
          }
        }
      }
      else {
        uVar6 = (**(code **)(*plVar4 + 0x120))(plVar4,**(undefined8 **)(param_2 + 0x4b8));
        uVar12 = (ulong)uVar6;
        if ((uVar6 != 0xffffff80) && (uVar6 != 0)) {
          uVar8 = FUN_1001cc310();
          cVar5 = _os_log_type_enabled(uVar8,0x10);
          if (cVar5 != '\0') {
            piVar11 = local_58;
            local_58[0] = 0x8220202;
            local_58[1] = 0x7a0a90;
            local_58[2] = 1;
            uStack_4c = 0x400;
            uStack_4a = (undefined2)uVar6;
            uStack_48 = (undefined2)(uVar6 >> 0x10);
            goto LAB_100549147;
          }
        }
      }
    }
    else {
      uVar8 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar8,0x10);
      if (cVar5 != '\0') {
        piVar11 = local_4e8;
        local_4e8[0] = 0x8220202;
        local_4e8[1] = 0x7a0a90;
        local_4e8[2] = 1;
        uStack_4dc = 0x400;
        uStack_4da = (undefined2)uVar6;
        uStack_4d8 = (undefined2)(uVar6 >> 0x10);
        goto LAB_100549147;
      }
    }
    uVar7 = 0;
    if ((int)uVar12 == 0) goto LAB_100548f95;
  }
LAB_100548f78:
  uVar7 = uVar12;
  if ((long *)*plVar2 != (long *)0x0) {
    (**(code **)(*(long *)*plVar2 + 0x1d0))();
    FUN_100295c56(plVar2);
  }
LAB_100548f95:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar7;
}

