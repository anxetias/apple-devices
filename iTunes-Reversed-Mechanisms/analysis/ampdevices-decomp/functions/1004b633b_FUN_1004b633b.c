// name: FUN_1004b633b
// address: 1004b633b

int FUN_1004b633b(long *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined4 local_468;
  char *local_464;
  undefined2 local_45c;
  int local_45a;
  undefined4 local_448;
  char *local_444;
  undefined2 local_43c;
  int local_43a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((*(char *)((long)param_1 + 9) == '\0') &&
      (((iVar2 = 0, (char)param_1[0x22] == '\0' || (param_1[0x21] == 0)) ||
       (*(char *)((long)param_1 + 0x111) != '\0')))) || (iVar2 = 0, (char)param_1[1] != '\0'))
  goto LAB_1004b6405;
  if ((((char)param_1[0x22] == '\0') || (param_1[0x21] == 0)) ||
     (*(char *)((long)param_1 + 0x111) != '\0')) {
LAB_1004b638f:
    if (*param_1 == 0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = &local_448;
      FUN_1004aa912(*param_1,puVar4);
    }
    iVar2 = FUN_1004ba37b(param_1 + 10,puVar4,0);
    if ((iVar2 == -0x80) || (iVar2 == 0)) goto LAB_1004b6405;
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 == '\0') goto LAB_1004b6405;
    puVar4 = &local_468;
    local_468 = 0x8220202;
    local_464 = "Assertion failure";
    local_45c = 0x400;
    local_45a = iVar2;
  }
  else {
    iVar2 = FUN_1004ba37b(param_1 + 0x23,0,1);
    if (iVar2 == -0x80) goto LAB_1004b6405;
    if (iVar2 == 0) goto LAB_1004b638f;
    if (iVar2 == 0x1f48) {
      FUN_1004ba637(param_1);
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 == '\0') goto LAB_1004b6405;
    puVar4 = &local_448;
    local_448 = 0x8220202;
    local_444 = "Assertion failure";
    local_43c = 0x400;
    local_43a = iVar2;
  }
  __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",puVar4,0x12);
LAB_1004b6405:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

