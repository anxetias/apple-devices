// name: FUN_1001fdba8
// address: 1001fdba8

int FUN_1001fdba8(undefined8 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  undefined1 uStack_68;
  undefined8 uStack_67;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  int local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_88 = 0;
  local_80 = 0;
  local_5c = 0;
  local_78 = 0;
  uStack_70 = 0;
  uStack_6f = 0;
  uStack_68 = 0;
  uStack_67 = 0;
  FUN_1004e17a4();
  local_58 = *param_3;
  uStack_54 = param_3[1];
  uStack_50 = param_3[2];
  uStack_4c = param_3[3];
  if (*(long *)(param_3 + 2) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_3 + 2) + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  iVar5 = FUN_1001fdd4d(&local_88,param_1,param_2,&local_58);
  plVar1 = (long *)CONCAT44(uStack_4c,uStack_50);
  if (plVar1 != (long *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (iVar5 != -0x80) {
    if (iVar5 == 0) {
      iVar5 = FUN_1001fe011(&local_88);
    }
    else {
      uVar6 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar6,0x10);
      if (cVar4 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x400;
        local_3a = iVar5;
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_48,0x12);
      }
    }
  }
  FUN_1004e1e68(param_1);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = uStack_67._3_4_;
  }
  plVar1 = (long *)CONCAT71(uStack_6f,uStack_70);
  if (plVar1 != (long *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

