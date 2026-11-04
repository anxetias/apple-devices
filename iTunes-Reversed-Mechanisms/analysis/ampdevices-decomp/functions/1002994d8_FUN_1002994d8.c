// name: FUN_1002994d8
// address: 1002994d8

int FUN_1002994d8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  bool bVar7;
  undefined1 local_1c0 [20];
  int local_1ac;
  long local_a8;
  undefined4 local_9c;
  undefined4 local_98;
  char *local_94;
  undefined2 local_8c;
  int local_8a;
  undefined4 local_78;
  char *local_74;
  undefined2 local_6c;
  int local_6a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  ___bzero(local_1c0,0x118);
  local_a8 = 4;
  iVar3 = (**(code **)(*(long *)*param_1 + 0xb0))((long *)*param_1,&local_a8,&local_9c,1,local_1c0);
  if (iVar3 != -0x80) {
    if (iVar3 == 0) {
      do {
        if (local_1ac != 1) {
          if ((local_1ac != 0) || (local_a8 != 4)) goto LAB_1002996d5;
          goto LAB_10029960d;
        }
        iVar3 = FUN_1001ceb57(param_3,0,0xffffffffffffffff,0);
      } while (iVar3 == 0);
LAB_10029957a:
      (**(code **)(*(long *)*param_1 + 0x110))();
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        puVar6 = &local_78;
        local_78 = 0x8220202;
        local_74 = "Assertion failure";
        local_6c = 0x400;
        local_6a = iVar3;
LAB_1002995da:
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",puVar6,0x12);
      }
    }
  }
  goto LAB_1002996db;
  while( true ) {
    while (local_1ac == 1) {
      iVar3 = FUN_1001ceb57(param_3,0,0xffffffffffffffff,0);
      if (iVar3 != 0) goto LAB_10029957a;
    }
    if ((local_1ac != 0) || (local_a8 != 1)) break;
LAB_10029960d:
    uVar1 = local_9c;
    uVar5 = local_9c >> 0x18 | (local_9c & 0xff0000) >> 8 | (local_9c & 0xff00) << 8 |
            local_9c << 0x18;
    if (0xffdfffff < uVar5) {
      FUN_10026b6a9(uVar5,param_2);
      iVar3 = FUN_10026b3e0(param_2,&local_78);
      if (iVar3 == 0) {
        iVar3 = 0;
        goto LAB_1002996db;
      }
    }
    bVar7 = param_4 == 0;
    param_4 = param_4 + -1;
    if (bVar7) {
      iVar3 = -0x32;
      goto LAB_1002996db;
    }
    local_9c = uVar1 >> 8;
    FUN_1001c62d9(local_1c0,0x118);
    local_a8 = 1;
    iVar3 = (**(code **)(*(long *)*param_1 + 0xb0))
                      ((long *)*param_1,&local_a8,(long)&local_9c + 3,1,local_1c0);
    if (iVar3 != 0) {
      if (iVar3 == -0x80) goto LAB_1002996db;
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 == '\0') goto LAB_1002996db;
      puVar6 = &local_98;
      local_98 = 0x8220202;
      local_94 = "Assertion failure";
      local_8c = 0x400;
      local_8a = iVar3;
      goto LAB_1002995da;
    }
  }
LAB_1002996d5:
  iVar3 = -0x27;
LAB_1002996db:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

