// name: FUN_10046a190
// address: 10046a190

int FUN_10046a190(long param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long *local_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_10046a0b6(param_1,"initializing full");
  *(undefined1 *)(param_1 + 0x70) = 4;
  FUN_1004d82aa(param_1,4);
  local_38 = (long *)0x0;
  FUN_100414ed6(&local_58);
  if (local_38 == &local_58) {
    lVar4 = 0x20;
LAB_10046a1f9:
    (**(code **)(*local_38 + lVar4))();
  }
  else {
    lVar4 = 0x28;
    if (local_38 != (long *)0x0) goto LAB_10046a1f9;
  }
  local_58._0_4_ = 0;
  local_58._4_4_ = 0;
  FUN_1001ee6ff(FUN_10028b69b,0,0xffffffff,0,&local_58,"");
  iVar3 = FUN_1005361c7();
  if (iVar3 == -0x80) {
LAB_10046a7ce:
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_58._0_4_ = 0x8220202;
      local_58._4_4_ = 0x7a0a90;
      uStack_50 = 1;
      local_4c = 0x822;
      local_4a = "false";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    *(undefined1 *)(param_1 + 0x70) = 8;
    uVar2 = 8;
  }
  else {
    if (iVar3 != 0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
LAB_10046a7b6:
        local_4c = 0x400;
        uStack_50 = 1;
        local_58._4_4_ = 0x7a0a90;
        local_58._0_4_ = 0x8220202;
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
LAB_10046a7c9:
      if (iVar3 == 0) {
        iVar3 = 0;
        goto LAB_10046a801;
      }
      goto LAB_10046a7ce;
    }
    iVar3 = FUN_1001cc840();
    if ((iVar3 != -0x80) && (iVar3 != 0)) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_58._0_4_ = 0x8220202;
        local_58._4_4_ = 0x7a0a90;
        uStack_50 = 1;
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
    iVar3 = FUN_1001c703f(DAT_1008c76a0 + 0x15c8,FUN_100469a6c);
    if (iVar3 == -0x80) goto LAB_10046a7ce;
    if (iVar3 != 0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
        goto LAB_10046a7b6;
      }
      goto LAB_10046a7c9;
    }
    uVar5 = FUN_1001c156e();
    iVar3 = FUN_1001c6b4a(uVar5,DAT_1008c76a0 + 0x15c8);
    if (iVar3 == -0x80) goto LAB_10046a7ce;
    if (iVar3 != 0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
        goto LAB_10046a7b6;
      }
      goto LAB_10046a7c9;
    }
    uVar5 = FUN_1001cc6d6();
    iVar3 = FUN_1001c6b4a(uVar5,DAT_1008c76a0 + 0x15c8);
    if (iVar3 == -0x80) goto LAB_10046a7ce;
    if (iVar3 != 0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
        goto LAB_10046a7b6;
      }
      goto LAB_10046a7c9;
    }
    iVar3 = FUN_1001a5adc("itunes.apple.com.");
    if ((iVar3 != -0x80) && (iVar3 != 0)) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_58._0_4_ = 0x8220202;
        local_58._4_4_ = 0x7a0a90;
        uStack_50 = 1;
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
    uVar5 = FUN_1001a5b34();
    iVar3 = FUN_1001c6b4a(uVar5,DAT_1008c76a0 + 0x15c8);
    if (iVar3 == -0x80) goto LAB_10046a7ce;
    if (iVar3 != 0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
        goto LAB_10046a7b6;
      }
      goto LAB_10046a7c9;
    }
    FUN_10027b26d();
    FUN_10046a8a6();
    FUN_1003675df();
    iVar3 = FUN_10046ada4();
    if (iVar3 == -0x80) goto LAB_10046a7ce;
    if (iVar3 != 0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
        goto LAB_10046a7b6;
      }
      goto LAB_10046a7c9;
    }
    iVar3 = FUN_10046ae84();
    if (iVar3 == -0x80) goto LAB_10046a7ce;
    if (iVar3 != 0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
        goto LAB_10046a7b6;
      }
      goto LAB_10046a7c9;
    }
    iVar3 = FUN_1003b886e();
    if (iVar3 == -0x80) goto LAB_10046a7ce;
    if (iVar3 != 0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
        goto LAB_10046a7b6;
      }
      goto LAB_10046a7c9;
    }
    iVar3 = FUN_10046b388();
    if (iVar3 == -0x80) goto LAB_10046a7ce;
    if (iVar3 != 0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
        goto LAB_10046a7b6;
      }
      goto LAB_10046a7c9;
    }
    iVar3 = FUN_10046b512();
    if (iVar3 == -0x80) goto LAB_10046a7ce;
    if (iVar3 != 0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
        goto LAB_10046a7b6;
      }
      goto LAB_10046a7c9;
    }
    *(undefined1 *)(param_1 + 0x70) = 5;
    FUN_1001c1811(3);
    uVar2 = *(undefined1 *)(param_1 + 0x70);
    iVar3 = 0;
  }
  FUN_1004d82aa(param_1,uVar2);
LAB_10046a801:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

