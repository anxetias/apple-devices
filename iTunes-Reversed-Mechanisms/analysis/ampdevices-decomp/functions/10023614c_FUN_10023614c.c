// name: FUN_10023614c
// address: 10023614c

void FUN_10023614c(long param_1)

{
  long lVar1;
  long lVar2;
  char cVar3;
  
  lVar1 = param_1 + 0x40;
  cVar3 = FUN_1001e9c23(lVar1);
  if (cVar3 != '\0') {
    FUN_100236412(param_1);
    lVar2 = *(long *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    if (lVar2 != 0) {
      std::__shared_weak_count::__release_weak();
    }
    cVar3 = FUN_1001e8dbb(param_1 + 0xd8);
    if (cVar3 != '\0') {
      FUN_1001e9587(param_1 + 0xd8);
    }
    cVar3 = FUN_1001e9c23(lVar1);
    if (cVar3 != '\0') {
      FUN_1001e9d75(lVar1);
      return;
    }
  }
  return;
}

