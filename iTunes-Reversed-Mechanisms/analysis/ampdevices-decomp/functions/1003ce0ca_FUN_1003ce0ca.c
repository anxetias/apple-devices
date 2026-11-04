// name: FUN_1003ce0ca
// address: 1003ce0ca

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_1003ce0ca(undefined8 param_1,undefined8 param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  int local_45c [2];
  char *local_454;
  undefined2 local_44c;
  int local_44a;
  undefined1 local_440 [1056];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  piVar4 = local_45c;
  if (param_3 != (int *)0x0) {
    piVar4 = param_3;
  }
  iVar2 = FUN_1003cdec3(param_2,param_1,&cf_relativeTrackPropertiesPath,local_440);
  *piVar4 = iVar2;
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      uVar3 = FUN_1003c7696(local_440,piVar4);
      goto LAB_1003ce14a;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_45c[1] = 0x8220202;
      local_454 = "Assertion failure";
      local_44c = 0x400;
      local_44a = iVar2;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",local_45c + 1,0x12);
    }
  }
  uVar3 = 0;
LAB_1003ce14a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

