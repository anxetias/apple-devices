// name: FUN_1005ec89e
// address: 1005ec89e

int FUN_1005ec89e(undefined8 *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_2d8 [16];
  undefined4 local_2c8;
  char *local_2c4;
  undefined2 local_2bc;
  int local_2ba;
  undefined8 local_2ac;
  undefined4 local_2a4;
  undefined1 local_2a0 [64];
  undefined8 local_260;
  code *local_258;
  ulong local_250;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_2 + 0x1a24) != 0) {
    cVar1 = FUN_100266a70();
    if (cVar1 != '\0') {
      cVar1 = FUN_100266904(*(undefined8 *)(param_2 + 0x1a24));
      if (cVar1 == '\0') {
        cVar1 = FUN_100266b26(*(undefined8 *)(param_2 + 0x1a24));
        if (cVar1 == '\0') {
          uVar3 = FUN_100416f20(*param_2,0x10cc00aa);
          FUN_1001b7eb0(&local_2c8,uVar3);
          FUN_1005e73f0(local_2d8,param_2);
          FUN_1004508b1(&local_2c8,local_2d8);
          FUN_1001b7a50(local_2d8);
          FUN_1001b7a50(&local_2c8);
        }
      }
    }
  }
  FUN_1001c62d9(&local_2ac,0x284);
  FUN_1001dfbb3("_RAWIPOD_",local_2a0,0x40);
  local_250 = (ulong)(uint)param_2[0x1a21];
  local_260 = 0x7761526900000000;
  local_258 = FUN_1005eca8e;
  local_2ac = 0x90000000a;
  local_2a4 = 0x284;
  iVar2 = (*(code *)param_1[1])(*param_1,0x72646220);
  if (iVar2 != -0x80) {
    if (iVar2 != 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_2c8 = 0x8220202;
        local_2c4 = "Assertion failure";
        local_2bc = 0x400;
        local_2ba = iVar2;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_2c8,0x12);
      }
      if (iVar2 != 0) goto LAB_1005ec9f3;
    }
    *(undefined1 *)(param_2 + 0x1a32) = 1;
  }
LAB_1005ec9f3:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

