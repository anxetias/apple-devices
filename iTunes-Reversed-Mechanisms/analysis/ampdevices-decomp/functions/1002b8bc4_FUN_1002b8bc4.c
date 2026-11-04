// name: FUN_1002b8bc4
// address: 1002b8bc4

undefined4
FUN_1002b8bc4(undefined4 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined6 uStack_38;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == (undefined8 *)0x0) {
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      pcVar7 = "outSinfData != nullptr";
LAB_1002b8d20:
      uStack_3c = 0x822;
      local_40 = 1;
      uStack_44 = 0x7a0a90;
      local_48 = 0x8220202;
      uStack_3a = SUB82(pcVar7,0);
      uStack_38 = (undefined6)((ulong)pcVar7 >> 0x10);
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else {
    *param_3 = 0;
    if (param_4 == (undefined8 *)0x0) {
      uVar6 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar6,0x10);
      if (cVar4 != '\0') {
        pcVar7 = "outSinf2Data != nullptr";
        goto LAB_1002b8d20;
      }
    }
    else {
      *param_4 = 0;
      if (param_5 != (undefined8 *)0x0) {
        *param_5 = 0;
        FUN_100575270(&local_48,param_1,param_2);
        plVar2 = (long *)CONCAT44(uStack_44,local_48);
        plVar3 = (long *)CONCAT26(uStack_3a,CONCAT24(uStack_3c,local_40));
        if (plVar2 == (long *)0x0) {
          uVar5 = 0;
        }
        else {
          uVar5 = (**(code **)(*plVar2 + 0x50))(plVar2,param_3,param_4,param_5);
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
        goto LAB_1002b8d53;
      }
      uVar6 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar6,0x10);
      if (cVar4 != '\0') {
        pcVar7 = "outPinfData != nullptr";
        goto LAB_1002b8d20;
      }
    }
  }
  uVar5 = 0xffffffce;
  FUN_1001782e9(0,0);
LAB_1002b8d53:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

