// name: FUN_1002738dc
// address: 1002738dc

undefined8
FUN_1002738dc(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             long *param_9)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_10039fb84(2,param_1,param_6,param_8);
  if (lVar3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "albumInfo != __null";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    uVar4 = 0xffffffce;
  }
  else {
    *param_9 = lVar3;
    *(undefined8 *)(lVar3 + 0x70) = param_7;
    FUN_1001de788(lVar3 + 0xb8,param_1 + 0x1c60,param_2);
    *(undefined4 *)(lVar3 + 0x100) = param_3;
    *(undefined4 *)(lVar3 + 0x104) = param_4;
    *(undefined1 *)(lVar3 + 0x108) = param_5;
    FUN_100277666(lVar3);
    plVar1 = *(long **)(lVar3 + 0x48);
    uVar4 = 0;
    (**(code **)(*plVar1 + 0x10))(plVar1,0x74646161,plVar1,lVar3,0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

