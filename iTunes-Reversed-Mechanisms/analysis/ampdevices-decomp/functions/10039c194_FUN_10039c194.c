// name: FUN_10039c194
// address: 10039c194

undefined8 FUN_10039c194(long param_1,long *param_2)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  undefined2 uStack_42;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (long *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_58._0_4_ = 0x8220202;
      local_58._4_4_ = 0x7a0a90;
      uStack_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0x7d0f;
      uStack_48 = 0x1007c;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    lVar3 = param_1 + 0x48;
    lVar5 = *(long *)(param_1 + 0x50);
    for (lVar6 = lVar5; lVar6 != lVar3; lVar6 = *(long *)(lVar6 + 8)) {
      if (*(long **)(lVar6 + 0x10) == param_2) {
        if (lVar6 != lVar3) {
          local_58._0_4_ = SUB84(&local_58,0);
          uStack_4c = (undefined2)((ulong)&local_58 >> 0x20);
          uStack_4a = (undefined2)((ulong)&local_58 >> 0x30);
          uStack_48 = 0;
          uStack_42 = 0;
          uStack_50 = (undefined4)local_58;
          local_58 = &local_58;
          do {
            lVar6 = *(long *)(lVar5 + 8);
            if (*(long **)(lVar5 + 0x10) == param_2) {
              for (; lVar6 != lVar3; lVar6 = *(long *)(lVar6 + 8)) {
                if (*(long **)(lVar6 + 0x10) != param_2) {
                  FUN_10039eb7e(&local_58,&local_58,lVar3,lVar5,lVar6);
                  lVar6 = *(long *)(lVar6 + 8);
                  goto LAB_10039c273;
                }
              }
              FUN_10039eb7e(&local_58,&local_58,lVar3,lVar5,lVar6);
            }
LAB_10039c273:
            lVar5 = lVar6;
          } while (lVar5 != lVar3);
          FUN_10039e992(&local_58);
          uVar2 = (**(code **)(*param_2 + 0x50))(param_2);
          lVar3 = FUN_10039c016(param_1,uVar2,0);
          if (lVar3 != 0) {
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 != '\0') {
              local_58._0_4_ = 0x8220202;
              local_58._4_4_ = 0x7a0a90;
              uStack_50 = 1;
              uStack_4c = 0x822;
              uStack_4a = 0x7dfd;
              uStack_48 = 0x1007c;
              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
          }
          FUN_1001ceee0(param_2);
          uVar4 = 1;
          goto LAB_10039c2f4;
        }
        break;
      }
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_58._0_4_ = 0x8220202;
      local_58._4_4_ = 0x7a0a90;
      uStack_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0x7e67;
      uStack_48 = 0x1007c;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  uVar4 = 0;
LAB_10039c2f4:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

