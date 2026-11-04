// name: FUN_10017fc85
// address: 10017fc85

int FUN_10017fc85(undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined1 *local_2b8;
  undefined1 *local_2b0;
  undefined4 local_2a0;
  undefined8 local_298;
  code *local_290;
  undefined1 *local_288;
  undefined8 local_280;
  undefined1 local_278 [64];
  undefined1 local_238 [512];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_280 = param_5;
  iVar1 = FUN_10017f061();
  if (((param_3 != 0) && (iVar1 != -0x30)) && (iVar1 != 0)) {
    FUN_1001e40a7(param_3,local_238,local_278);
    FUN_1001c62d9(&local_2b8,0x38);
    local_2b8 = local_238;
    local_2b0 = local_278;
    local_298 = param_1;
    local_288 = local_2b8;
    if (iVar1 == -0x25) {
      FUN_1001e7c3a(local_238,0);
      FUN_10017e4d0(&local_2b8);
      iVar1 = FUN_10017f061(param_1,param_2,local_238,param_4,local_280);
      if ((iVar1 == -0x30) || (iVar1 == 0)) goto LAB_10017fdaa;
    }
    local_2a0 = 0x1f;
    local_290 = FUN_10017e3e5;
    FUN_10017e4d0();
    iVar1 = FUN_10017f061(param_1,param_2,local_238,param_4,local_280);
  }
LAB_10017fdaa:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

