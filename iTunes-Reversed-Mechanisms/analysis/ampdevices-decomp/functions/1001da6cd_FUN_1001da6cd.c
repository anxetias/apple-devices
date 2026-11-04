// name: FUN_1001da6cd
// address: 1001da6cd

void FUN_1001da6cd(long param_1)

{
  long lVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x48) + 0x10);
  lVar3 = _CFRunLoopGetCurrent();
  if (lVar1 != lVar3) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_1006b75bb(uVar4);
    }
    FUN_1001782e9(0,0);
  }
  FUN_1001e9de0(param_1);
  FUN_1001db821(param_1);
  FUN_1001e9eb9(param_1);
  return;
}

