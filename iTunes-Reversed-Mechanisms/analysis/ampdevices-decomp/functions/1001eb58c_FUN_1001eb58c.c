// name: FUN_1001eb58c
// address: 1001eb58c

void FUN_1001eb58c(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_28 [16];
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006c39e7(uVar2);
    }
    FUN_1001782e9(0,0);
  }
  else {
    FUN_1001eb4db(local_28);
    FUN_1001bb41a(local_28,param_1);
    FUN_1001b7a50(local_28);
  }
  return;
}

