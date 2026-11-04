// name: FUN_1003db90a
// address: 1003db90a

/* WARNING: Removing unreachable block (ram,0x0001003db9b5) */

int FUN_1003db90a(undefined4 param_1,void *param_2,int param_3,char param_4,undefined4 param_5,
                 long *param_6)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
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
  iVar5 = FUN_1003ae8a5(0,param_2,param_1,1,param_5);
  if (iVar5 == 0 && param_4 == '\x01') {
    uVar6 = ((uint)(param_3 * 2000) >> 3) + 0xffff >> 0x10;
    uVar8 = 2;
    if (2 < uVar6) {
      uVar8 = uVar6;
    }
    iVar5 = FUN_1001d7de6(0,uVar8,0x10000);
  }
  if (iVar5 == 0) {
    FUN_1001c62d9(&local_4e8,0x488);
    local_4e8 = param_1;
    _memcpy(&local_4e4,param_2,0x460);
    FUN_10053207e(&local_58,&local_4e8,0,0);
    FUN_100217418(param_6,&local_58);
    plVar3 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,local_50));
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        std::__shared_weak_count::__release_weak();
      }
    }
    iVar9 = 0;
    if (*param_6 == 0) {
      uVar7 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar7,0x10);
      if (cVar4 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = 0x7a0a90;
        local_50 = 1;
        uStack_4c = 0x822;
        uStack_4a = 0x7526;
        uStack_48 = 0x1007b;
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      iVar9 = -0x32;
    }
  }
  else {
    iVar9 = -0x80;
    if (iVar5 != -0x80) {
      uVar7 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar7,0x10);
      iVar9 = iVar5;
      if (cVar4 != '\0') {
        local_4e8 = 0x8220202;
        local_4e4 = "Assertion failure";
        local_4dc = 0x400;
        local_4da = iVar5;
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_4e8,0x12);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar9;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

