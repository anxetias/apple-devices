// name: FUN_1001bce8e
// address: 1001bce8e

long * FUN_1001bce8e(long *param_1,long *param_2)

{
  char cVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (param_1 == (long *)0x0 || param_2 == (long *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006a26c4(uVar3);
    }
    plVar2 = (long *)0x0;
    FUN_1001782e9(0,0);
  }
  else {
    lVar4 = *param_2 + *param_1;
    plVar2 = operator_new(lVar4 * 2 + 0x10,(nothrow_t *)PTR_nothrow_10082c970);
    *plVar2 = lVar4;
    *(undefined4 *)(plVar2 + 1) = 1;
    *(undefined2 *)((long)plVar2 + lVar4 * 2 + 0xc) = 0;
    lVar4 = *param_1;
    _memcpy((void *)((long)plVar2 + 0xc),(void *)((long)param_1 + 0xc),lVar4 * 2);
    _memcpy((void *)((long)plVar2 + lVar4 * 2 + 0xc),(void *)((long)param_2 + 0xc),*param_2 * 2);
  }
  return plVar2;
}

