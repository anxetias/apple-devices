// name: FUN_1002796f8
// address: 1002796f8

void * FUN_1002796f8(char param_1,char param_2)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  char cVar6;
  undefined8 uVar7;
  void *pvVar8;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar6 = FUN_1001ee056();
  if (cVar6 == '\0') {
    uVar7 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar7,0x10);
    if (cVar6 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "JRIsCurrentThreadCooperative()";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,1);
  }
  pvVar8 = (void *)0x0;
  pvVar1 = DAT_1008b5ab0;
  pvVar2 = DAT_1008b5ab8;
  pvVar3 = DAT_1008b5ac0;
  pvVar4 = DAT_1008b5ac8;
  pvVar5 = DAT_1008b5ad0;
  switch(param_1) {
  case '\x01':
    pvVar8 = DAT_1008b5ab0;
    if ((param_2 == '\x01' && DAT_1008b5ab0 == (void *)0x0) &&
       (pvVar8 = operator_new(0x108,(nothrow_t *)PTR_nothrow_10082c970), pvVar1 = pvVar8,
       pvVar2 = DAT_1008b5ab8, pvVar3 = DAT_1008b5ac0, pvVar4 = DAT_1008b5ac8,
       pvVar5 = DAT_1008b5ad0, pvVar8 != (void *)0x0)) {
      FUN_10027a642(pvVar8,1);
      pvVar2 = DAT_1008b5ab8;
      pvVar3 = DAT_1008b5ac0;
      pvVar4 = DAT_1008b5ac8;
      pvVar5 = DAT_1008b5ad0;
    }
    break;
  case '\x02':
    pvVar8 = DAT_1008b5ab8;
    if ((param_2 == '\x01' && DAT_1008b5ab8 == (void *)0x0) &&
       (pvVar8 = operator_new(0x108,(nothrow_t *)PTR_nothrow_10082c970), pvVar1 = DAT_1008b5ab0,
       pvVar2 = pvVar8, pvVar3 = DAT_1008b5ac0, pvVar4 = DAT_1008b5ac8, pvVar5 = DAT_1008b5ad0,
       pvVar8 != (void *)0x0)) {
      FUN_10027a642(pvVar8,2);
      pvVar1 = DAT_1008b5ab0;
      pvVar3 = DAT_1008b5ac0;
      pvVar4 = DAT_1008b5ac8;
      pvVar5 = DAT_1008b5ad0;
    }
    break;
  case '\x03':
  case '\x05':
  case '\x06':
  case '\a':
    break;
  case '\x04':
    pvVar8 = DAT_1008b5ac0;
    if ((param_2 == '\x01' && DAT_1008b5ac0 == (void *)0x0) &&
       (pvVar8 = operator_new(0x108,(nothrow_t *)PTR_nothrow_10082c970), pvVar1 = DAT_1008b5ab0,
       pvVar2 = DAT_1008b5ab8, pvVar3 = pvVar8, pvVar4 = DAT_1008b5ac8, pvVar5 = DAT_1008b5ad0,
       pvVar8 != (void *)0x0)) {
      FUN_10027a642(pvVar8,4);
      pvVar1 = DAT_1008b5ab0;
      pvVar2 = DAT_1008b5ab8;
      pvVar4 = DAT_1008b5ac8;
      pvVar5 = DAT_1008b5ad0;
    }
    break;
  case '\b':
    pvVar8 = DAT_1008b5ac8;
    if ((param_2 == '\x01' && DAT_1008b5ac8 == (void *)0x0) &&
       (pvVar8 = operator_new(0x108,(nothrow_t *)PTR_nothrow_10082c970), pvVar1 = DAT_1008b5ab0,
       pvVar2 = DAT_1008b5ab8, pvVar3 = DAT_1008b5ac0, pvVar4 = pvVar8, pvVar5 = DAT_1008b5ad0,
       pvVar8 != (void *)0x0)) {
      FUN_10027a642(pvVar8,8);
      pvVar1 = DAT_1008b5ab0;
      pvVar2 = DAT_1008b5ab8;
      pvVar3 = DAT_1008b5ac0;
      pvVar5 = DAT_1008b5ad0;
    }
    break;
  default:
    if (((param_1 == -0x80) &&
        (pvVar8 = DAT_1008b5ad0, param_2 == '\x01' && DAT_1008b5ad0 == (void *)0x0)) &&
       (pvVar8 = operator_new(0x108,(nothrow_t *)PTR_nothrow_10082c970), pvVar1 = DAT_1008b5ab0,
       pvVar2 = DAT_1008b5ab8, pvVar3 = DAT_1008b5ac0, pvVar4 = DAT_1008b5ac8, pvVar5 = pvVar8,
       pvVar8 != (void *)0x0)) {
      FUN_10027a642(pvVar8,0x80);
      pvVar1 = DAT_1008b5ab0;
      pvVar2 = DAT_1008b5ab8;
      pvVar3 = DAT_1008b5ac0;
      pvVar4 = DAT_1008b5ac8;
    }
  }
  DAT_1008b5ad0 = pvVar5;
  DAT_1008b5ac8 = pvVar4;
  DAT_1008b5ac0 = pvVar3;
  DAT_1008b5ab8 = pvVar2;
  DAT_1008b5ab0 = pvVar1;
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return pvVar8;
}

