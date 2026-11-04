// name: FUN_100542b38
// address: 100542b38

undefined4
FUN_100542b38(long *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,byte *param_5)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar5 = 0xfffffffc;
  if (*(int *)((long)param_1 + 0x14) == 0x46494c45) {
    (**(code **)(*param_1 + 0xd8))();
    if ((param_5 != (byte *)0x0) && ((*param_5 & 0x10) != 0)) {
      (**(code **)(*param_1 + 0xb8))(param_1);
    }
    (**(code **)(*param_1 + 0x250))(param_1,param_2,param_3,param_4,param_5);
    uVar5 = 0;
    if (*(char *)((long)param_1 + 0xfd9) == '\x01') {
      (**(code **)(*param_1 + 0x130))(&local_58,param_1,1);
      plVar2 = (long *)CONCAT44(uStack_54,local_58);
      plVar3 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,local_50));
      if (plVar2 == (long *)0x0) {
        uVar6 = FUN_1001cc310(0,param_2);
        cVar4 = _os_log_type_enabled(uVar6,0x10);
        if (cVar4 != '\0') {
          local_58 = 0x8220202;
          uStack_54 = 0x7a0a90;
          local_50 = 1;
          uStack_4c = 0x822;
          uStack_4a = 0x5c54;
          uStack_48 = 0x1007a;
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        uVar5 = 0xffffffce;
        FUN_1001782e9(0,0);
      }
      else {
        uVar5 = (**(code **)(*plVar2 + 0x68))(plVar2,param_2,param_3,param_4,param_5);
      }
      if (plVar3 != (long *)0x0) {
        LOCK();
        plVar2 = plVar3 + 1;
        lVar1 = *plVar2;
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (lVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
    (**(code **)(*param_1 + 0xe0))(param_1,param_2);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

