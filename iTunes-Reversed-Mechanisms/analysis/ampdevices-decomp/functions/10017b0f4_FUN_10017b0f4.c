// name: FUN_10017b0f4
// address: 10017b0f4

void FUN_10017b0f4(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x20) != *(long *)(param_1 + 0x18)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_100684845(uVar2);
    }
    FUN_1001782e9(0,0);
    while (*(long *)(param_1 + 0x20) != *(long *)(param_1 + 0x18)) {
      FUN_10017b174(param_1);
    }
  }
  return;
}

