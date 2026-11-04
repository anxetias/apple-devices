// name: FUN_1003dbc9c
// address: 1003dbc9c

int FUN_1003dbc9c(long param_1,undefined4 *param_2,uint param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined1 *param_7,long *param_8)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  long *plVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 local_4f8;
  uint local_4f0;
  int local_4ec;
  undefined4 local_4e8;
  char *local_4e4;
  undefined2 local_4dc;
  int local_4da;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_4f8 = 0;
  if (param_7 != (undefined1 *)0x0) {
    *param_7 = 0;
  }
  local_4ec = 0x10000;
  FUN_10057db47(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),0x73627566);
  if (0x140 < param_3) {
    local_4ec = local_4ec << 2;
  }
  iVar6 = local_4ec;
  cVar5 = *(char *)(param_2 + 0x101);
  uVar3 = *param_2;
  FUN_100132a30(&local_4e8);
  iVar6 = FUN_1001a3127(param_2 + 1,uVar3,iVar6,param_4,param_6,(uint)(cVar5 != '\0') << 4 | 5,
                        param_5,0,&local_4e8,0,0,&local_4f8,&local_58,0,0,0,0,&local_4f0,0,0);
  FUN_1001b7a50(&local_4e8);
  if ((iVar6 != -0x80) && (iVar6 != 0)) {
    uVar7 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar7,0x10);
    if (cVar5 != '\0') {
      local_4e8 = 0x8220202;
      local_4e4 = "Assertion failure";
      local_4dc = 0x400;
      local_4da = iVar6;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_4e8,0x12);
    }
  }
  if ((param_7 != (undefined1 *)0x0) && ((local_4f0 & 1) != 0)) {
    *param_7 = 1;
  }
  if (iVar6 != -0x80) {
    if (iVar6 == 0) {
      FUN_1001c62d9(&local_4e8,0x488);
      FUN_10053207e(&local_58,&local_4e8,local_4f8,0);
      FUN_100217418(param_8,&local_58);
      plVar4 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,local_50));
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
      iVar6 = 0;
      if (*param_8 == 0) {
        uVar7 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar7,0x10);
        if (cVar5 != '\0') {
          local_58 = 0x8220202;
          uStack_54 = 0x7a0a90;
          local_50 = 1;
          uStack_4c = 0x822;
          uStack_4a = 0x7526;
          uStack_48 = 0x1007b;
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        iVar6 = -0x32;
      }
    }
    else {
      uVar7 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar7,0x10);
      if (cVar5 != '\0') {
        local_4e8 = 0x8220202;
        local_4e4 = "Assertion failure";
        local_4dc = 0x400;
        local_4da = iVar6;
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_4e8,0x12);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

