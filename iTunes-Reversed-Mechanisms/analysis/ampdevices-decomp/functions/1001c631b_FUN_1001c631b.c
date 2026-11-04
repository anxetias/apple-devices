// name: FUN_1001c631b
// address: 1001c631b

void FUN_1001c631b(void *param_1,void *param_2,size_t param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == (void *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006a9550(uVar2);
    }
  }
  else {
    if (param_2 != (void *)0x0) {
      _memmove(param_2,param_1,param_3);
      return;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006a94da(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return;
}

