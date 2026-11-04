// name: FUN_1005491ba
// address: 1005491ba

int FUN_1005491ba(long param_1,undefined4 param_2,void *param_3,undefined4 *param_4,uint param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  long *plVar5;
  long lVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  int iVar10;
  undefined1 local_518 [8];
  undefined8 local_510;
  void *local_508;
  long local_500;
  undefined8 local_4f8;
  byte local_4ec [4];
  undefined4 local_4e8;
  int local_4e4;
  undefined4 local_4e0;
  undefined1 local_4dc [1156];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_4f8 = 0;
  *(undefined1 *)(param_1 + 0x64a9) = 0;
  local_4e4 = 0;
  local_510 = param_6;
  local_508 = param_3;
  local_500 = param_1;
  local_4e8 = param_2;
  FUN_10057db47(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),0x73627566);
  iVar8 = 0x10000;
  if (local_4e4 != 0) {
    iVar8 = local_4e4;
  }
  iVar10 = iVar8 * 4;
  if (param_5 < 0x141) {
    iVar10 = iVar8;
  }
  if (param_5 >= 0x141 || local_4e4 == 0) {
    local_4e4 = iVar10;
  }
  cVar7 = *(char *)(param_4 + 0x101);
  uVar4 = *param_4;
  FUN_100132a30(&local_58);
  iVar8 = FUN_1001a3127(param_4 + 1,uVar4,iVar10,local_510,param_8,(uint)(cVar7 != '\0') << 4 | 5,
                        param_7,0,&local_58,0,0,&local_4f8,local_518,0,0,0,0,local_4ec,0,0);
  FUN_1001b7a50(&local_58);
  if (iVar8 == 0) {
    FUN_1001c62d9(&local_4e0,0x488);
    local_4e0 = local_4e8;
    _memcpy(local_4dc,local_508,0x460);
    FUN_10053207e(&local_58,&local_4e0,local_4f8,0);
    lVar6 = local_500;
    plVar1 = (long *)(local_500 + 0x38);
    FUN_100217418(plVar1,&local_58);
    plVar5 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,local_50));
    if (plVar5 != (long *)0x0) {
      LOCK();
      plVar2 = plVar5 + 1;
      lVar3 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        std::__shared_weak_count::__release_weak();
      }
    }
    plVar1 = (long *)*plVar1;
    if (plVar1 == (long *)0x0) {
      uVar9 = FUN_1001cc310();
      cVar7 = _os_log_type_enabled(uVar9,0x10);
      if (cVar7 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = 0x7a0a90;
        local_50 = 1;
        uStack_4c = 0x822;
        uStack_4a = 0x671d;
        uStack_48 = 0x1007e;
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      iVar8 = -0x32;
    }
    else {
      if ((local_4ec[0] & 1) != 0) {
        *(undefined1 *)(lVar6 + 0x64a9) = 1;
      }
      *(undefined8 *)(lVar6 + 0x64b8) = 0;
      (**(code **)(*plVar1 + 0xf8))(plVar1,lVar6 + 0x64b8);
      iVar8 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

