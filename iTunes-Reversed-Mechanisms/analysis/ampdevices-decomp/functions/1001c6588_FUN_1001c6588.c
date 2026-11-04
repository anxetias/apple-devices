// name: FUN_1001c6588
// address: 1001c6588

void * FUN_1001c6588(void)

{
  size_t sVar1;
  char cVar2;
  void *pvVar3;
  void *local_18;
  
  if (DAT_1008a2260 != (void *)0x0) {
    return DAT_1008a2260;
  }
  local_18 = DAT_1008a2260;
  sVar1 = *(size_t *)PTR__vm_page_size_10082d2c0;
  DAT_1008a2260 = (void *)FUN_1001c6538(sVar1);
  pvVar3 = DAT_1008a2260;
  if (DAT_1008a2260 == (void *)0x0) {
    cVar2 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
    if (cVar2 != '\0') {
      FUN_1006a9814();
    }
    DAT_1008a2260 = _calloc(1,sVar1);
    pvVar3 = DAT_1008a2260;
    if (DAT_1008a2260 == (void *)0x0) {
      cVar2 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
      if (cVar2 == '\0') {
        pvVar3 = (void *)0x0;
      }
      else {
        FUN_1006a984c(&local_18);
        pvVar3 = local_18;
      }
    }
  }
  return pvVar3;
}

