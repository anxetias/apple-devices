// name: FUN_1004d0496
// address: 1004d0496

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_1004d0496(long param_1,long *param_2)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  int local_5c [2];
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar1 = *param_2;
  local_5c[0] = *(int *)(lVar1 + 0xe0);
  if (local_5c[0] == 0) {
    local_5c[0] = *(int *)(lVar1 + 0xdc);
    if (local_5c[0] != 0) {
      lVar6 = FUN_1004d06fc(**(undefined8 **)(param_1 + 0x10),
                            *(undefined4 *)((long)*(undefined8 **)(param_1 + 0x10) + 0xc));
      bVar2 = false;
      goto LAB_1004d04fd;
    }
    bVar3 = true;
    bVar2 = false;
LAB_1004d051b:
    lVar6 = **(long **)(param_1 + 0x18);
  }
  else {
    lVar6 = FUN_1004d06fc(**(undefined8 **)(param_1 + 8),
                          *(undefined4 *)((long)*(undefined8 **)(param_1 + 8) + 0xc));
    bVar2 = true;
LAB_1004d04fd:
    if (lVar6 == 0) {
      bVar3 = false;
      goto LAB_1004d051b;
    }
    lVar6 = *(long *)(lVar6 + 8);
    bVar3 = false;
    if (lVar6 == 0) goto LAB_1004d051b;
  }
  iVar5 = FUN_1005e4dc0(**(undefined8 **)(param_1 + 0x20),lVar1,lVar6,
                        *(undefined8 *)(param_1 + 0x28));
  if (iVar5 != -0x80) {
    if (iVar5 != 0) {
      uVar7 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar7,0x10);
      if (cVar4 != '\0') {
        local_5c[1] = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = iVar5;
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",local_5c + 1,0x12);
      }
      if (iVar5 != 0) goto LAB_1004d061a;
    }
    iVar5 = FUN_1005e565a(**(undefined8 **)(param_1 + 0x28),lVar1);
    if ((iVar5 != -0x80) && (iVar5 != 0)) {
      uVar7 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar7,0x10);
      if (cVar4 != '\0') {
        local_5c[1] = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = iVar5;
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",local_5c + 1,0x12);
      }
    }
    **(undefined1 **)(param_1 + 0x30) = 1;
    iVar5 = (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x28) + 0x20))();
    if ((iVar5 == 0) &&
       ((**(code **)(*(long *)**(undefined8 **)(param_1 + 0x28) + 0x18))
                  ((long *)**(undefined8 **)(param_1 + 0x28),1), !bVar3)) {
      if (bVar2) {
        uVar7 = *(undefined8 *)(param_1 + 8);
      }
      else {
        uVar7 = *(undefined8 *)(param_1 + 0x10);
      }
      FUN_1004d07b4(local_5c + 1,uVar7,local_5c,*(undefined8 *)(param_1 + 0x28));
    }
    FUN_1005e37a3(**(undefined8 **)(param_1 + 0x18));
    **(undefined8 **)(param_1 + 0x18) = **(undefined8 **)(param_1 + 0x28);
  }
LAB_1004d061a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 0;
}

