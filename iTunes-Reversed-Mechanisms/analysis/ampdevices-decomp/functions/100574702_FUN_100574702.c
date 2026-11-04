// name: FUN_100574702
// address: 100574702

undefined4
FUN_100574702(long *param_1,undefined8 param_2,char param_3,undefined8 param_4,undefined8 param_5,
             undefined4 *param_6)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 local_110 [40];
  undefined1 local_e8 [40];
  undefined1 local_c0 [40];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 *local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_70 = param_4;
  local_68 = param_5;
  local_60 = param_6;
  FUN_1001c62d9(local_e8,0x28);
  FUN_1001c62d9(local_c0,0x28);
  FUN_1001c62d9(local_110,0x28);
  iVar4 = (**(code **)(*param_1 + 200))(param_1,param_2);
  if (iVar4 == 0x636c6370) {
    lVar8 = 0xb0;
  }
  else if (iVar4 == 0x736f756e) {
    lVar8 = 0xa0;
  }
  else if (iVar4 == 0x76696465) {
    lVar8 = 0xa8;
  }
  else {
    lVar8 = 0xb8;
  }
  cVar3 = (**(code **)(*param_1 + lVar8))(param_1,param_2,local_e8,local_c0,local_110);
  if (param_3 == '\0') {
    iVar5 = (**(code **)(*param_1 + 0x110))(param_1,local_e8,local_c0);
    if (iVar4 == 0x70363038) {
      iVar5 = 0x63363038;
    }
    if (iVar5 != 0) {
      local_98 = *local_60;
      uStack_94 = local_60[1];
      uStack_90 = local_60[2];
      uStack_8c = local_60[3];
      if (*(long *)(local_60 + 2) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(local_60 + 2) + 8);
        *plVar1 = *plVar1 + 1;
        UNLOCK();
      }
      (**(code **)(*param_1 + 0x108))(param_1,param_2,iVar5,&local_98);
      plVar1 = (long *)CONCAT44(uStack_8c,uStack_90);
      if (plVar1 != (long *)0x0) {
        LOCK();
        plVar2 = plVar1 + 1;
        lVar8 = *plVar2;
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (lVar8 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
  }
  if (cVar3 == '\0') {
    uVar7 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar7,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "foundXinf";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    uVar6 = 0x206d;
  }
  else {
    local_88 = *local_60;
    uStack_84 = local_60[1];
    uStack_80 = local_60[2];
    uStack_7c = local_60[3];
    if (*(long *)(local_60 + 2) != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)(local_60 + 2) + 8);
      *plVar1 = *plVar1 + 1;
      UNLOCK();
    }
    uVar6 = (**(code **)(*param_1 + 0x100))
                      (param_1,param_2,local_e8,local_c0,local_110,local_70,local_68,&local_88);
    plVar1 = (long *)CONCAT44(uStack_7c,uStack_80);
    if (plVar1 != (long *)0x0) {
      LOCK();
      plVar2 = plVar1 + 1;
      lVar8 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

