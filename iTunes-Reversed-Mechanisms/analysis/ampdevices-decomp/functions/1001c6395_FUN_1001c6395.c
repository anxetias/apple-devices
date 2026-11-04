// name: FUN_1001c6395
// address: 1001c6395

void FUN_1001c6395(void *param_1,size_t param_2,uint param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 != (void *)0x0) {
    _memset(param_1,param_3 & 0xff,param_2);
    return;
  }
  uVar2 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    FUN_1006a95c6(uVar2);
  }
  FUN_1001782e9(0,0);
  return;
}

