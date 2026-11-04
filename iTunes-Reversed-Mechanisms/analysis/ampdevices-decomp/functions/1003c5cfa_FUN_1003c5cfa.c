// name: FUN_1003c5cfa
// address: 1003c5cfa

long FUN_1003c5cfa(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined6 uStack_2c0;
  undefined2 uStack_2ba;
  undefined4 uStack_2b8;
  undefined2 uStack_2b4;
  undefined4 local_2b0;
  undefined3 uStack_2ac;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined1 uStack_298;
  undefined7 uStack_297;
  undefined1 uStack_290;
  undefined8 uStack_28f;
  undefined4 local_280 [4];
  long local_270;
  undefined1 local_268 [16];
  undefined4 local_258;
  char *local_254;
  undefined2 local_24c;
  int local_24a;
  undefined1 local_238 [520];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001b7a44(local_268);
  local_2c8 = 0;
  uStack_2c0 = 0;
  local_2d8 = 0;
  uStack_2d0 = 0;
  uStack_2ba = 0;
  uStack_2b8 = 0;
  uStack_2b4 = 0;
  local_2b0 = 0;
  uStack_2ac = 0;
  local_2a8 = 0x3ff0000000000000;
  local_2a0 = 0;
  uStack_298 = 0;
  uStack_297 = 0;
  uStack_290 = 0;
  uStack_28f = 0;
  cVar1 = FUN_1001b8428(param_4);
  if (cVar1 == '\0') {
    FUN_1001c334a(local_280,0x23280029);
    FUN_1001bbec4(&local_258,local_280,param_4);
    FUN_1001b80b2(local_268,&local_258);
    FUN_1001b7a50(&local_258);
    puVar4 = local_280;
  }
  else {
    FUN_1001c334a(&local_258,0x23280025);
    FUN_1001b80b2(local_268,&local_258);
    puVar4 = &local_258;
  }
  FUN_1001b7a50(puVar4);
  uStack_2d0 = FUN_1001bb41a(local_268,local_238);
  uStack_2b4 = 0x14;
  iVar2 = FUN_1002e2674(param_1,param_2,&local_2d8,&local_270);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      *(undefined8 *)(local_270 + 0x4f0) = param_3;
      FUN_100488970();
      goto LAB_1003c5e81;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_258 = 0x8220202;
      local_254 = "Assertion failure";
      local_24c = 0x400;
      local_24a = iVar2;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_258,0x12);
    }
  }
  local_270 = 0;
LAB_1003c5e81:
  FUN_1001b7a50(local_268);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return local_270;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

