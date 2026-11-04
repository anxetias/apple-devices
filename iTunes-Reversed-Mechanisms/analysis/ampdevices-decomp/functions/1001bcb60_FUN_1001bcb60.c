// name: FUN_1001bcb60
// address: 1001bcb60

long * FUN_1001bcb60(size_t *param_1,void *param_2,size_t param_3)

{
  size_t sVar1;
  char cVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (param_1 == (size_t *)0x0 || param_2 == (void *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_1006a264e(uVar4);
    }
    plVar3 = (long *)0x0;
    FUN_1001782e9(0,0);
  }
  else {
    lVar5 = *param_1 + param_3;
    plVar3 = operator_new(param_3 + *param_1 + 0x10,(nothrow_t *)PTR_nothrow_10082c970);
    *plVar3 = lVar5;
    *(undefined4 *)(plVar3 + 1) = 1;
    *(undefined1 *)((long)plVar3 + lVar5 + 0xc) = 0;
    sVar1 = *param_1;
    _memcpy((void *)((long)plVar3 + 0xc),(void *)((long)param_1 + 0xc),sVar1);
    _memcpy((void *)((long)plVar3 + sVar1 + 0xc),param_2,param_3);
  }
  return plVar3;
}

