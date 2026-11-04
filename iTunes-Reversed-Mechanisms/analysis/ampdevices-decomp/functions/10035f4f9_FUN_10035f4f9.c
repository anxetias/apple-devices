// name: FUN_10035f4f9
// address: 10035f4f9

undefined4 FUN_10035f4f9(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined2 uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined1 local_2b0 [568];
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  uint local_64;
  undefined2 local_5e;
  undefined2 local_5c;
  undefined1 local_5a;
  undefined1 local_59;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_78 = param_4;
  iVar4 = FUN_100313af0(param_1,local_2b0);
  uVar5 = 0xe;
  iVar2 = local_4a;
  if (iVar4 == -0x80) goto LAB_10035f68a;
  if (iVar4 == 0) {
    iVar4 = FUN_10031ab0f(param_1,&local_5e,1);
    iVar2 = local_4a;
    if (iVar4 == -0x80) goto LAB_10035f68a;
    if (iVar4 == 0) {
      FUN_100476ac1(&local_58,*(undefined8 *)(param_1 + 8));
      local_70 = FUN_1001b83ae(&local_58);
      local_5a = *(long *)(*(long *)(param_1 + 0x10) + 8) != 0;
      local_59 = true;
      if (!(bool)local_5a) {
        local_59 = *(long *)(*(long *)(param_1 + 0x10) + 0x20) != 0;
      }
      local_5c = local_5e;
      local_64 = (uint)*(ushort *)(param_1 + 0x54);
      local_68 = *(undefined4 *)(param_1 + 0x50);
      uVar1 = *(undefined2 *)(param_1 + 0x56);
      uVar5 = FUN_1002b6093(param_1);
      uVar5 = FUN_10035e308(local_68,param_2,local_2b0,local_70,param_3,local_78,local_5c,local_5a,
                            local_59,local_64,uVar1,uVar5);
      FUN_1001b7a50(&local_58);
      iVar2 = local_4a;
      goto LAB_10035f68a;
    }
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    iVar2 = local_4a;
  }
  else {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    iVar2 = local_4a;
  }
  local_4a = iVar4;
  if (cVar3 != '\0') {
    local_4c = 0x400;
    local_54 = "Assertion failure";
    local_58 = 0x8220202;
    __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    iVar2 = local_4a;
  }
LAB_10035f68a:
  local_4a = iVar2;
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

