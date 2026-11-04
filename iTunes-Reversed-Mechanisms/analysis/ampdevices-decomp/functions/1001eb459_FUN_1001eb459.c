// name: FUN_1001eb459
// address: 1001eb459

void FUN_1001eb459(undefined1 param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_28 [16];
  
  if (param_2 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006c3971(uVar2);
    }
    FUN_1001782e9(0,0);
  }
  else {
    FUN_1001eb330(local_28,param_1);
    FUN_1001bb41a(local_28,param_2);
    FUN_1001b7a50(local_28);
  }
  return;
}

