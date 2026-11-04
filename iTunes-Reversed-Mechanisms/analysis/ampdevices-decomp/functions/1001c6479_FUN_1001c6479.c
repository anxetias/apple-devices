// name: FUN_1001c6479
// address: 1001c6479

void * FUN_1001c6479(void *param_1,size_t param_2)

{
  char cVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  pvVar2 = _realloc(param_1,param_2);
  if (pvVar2 == (void *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006a9728(uVar3);
    }
    FUN_1001782e9(0,0);
  }
  return pvVar2;
}

