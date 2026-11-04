// name: FUN_1001c5630
// address: 1001c5630

bool FUN_1001c5630(void *param_1,void *param_2,size_t param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_1 == (void *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006a8706(uVar3);
    }
  }
  else {
    if (param_2 != (void *)0x0) {
      iVar2 = _memcmp(param_1,param_2,param_3);
      return iVar2 == 0;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006a8690(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return false;
}

