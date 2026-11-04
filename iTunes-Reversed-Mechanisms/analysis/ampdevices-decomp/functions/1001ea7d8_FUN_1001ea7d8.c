// name: FUN_1001ea7d8
// address: 1001ea7d8

undefined8 FUN_1001ea7d8(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30 [16];
  
  FUN_1001b7a44();
  FUN_1001ea62b(&local_40);
  lVar2 = FUN_100169885(local_40,local_38);
  if (lVar2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006c2e72(uVar3);
    }
    cVar1 = FUN_1001782e9(0,0);
    if (cVar1 == '\0') {
      return param_1;
    }
  }
  FUN_1001b7eb0(local_30,lVar2);
  FUN_1001b80b2(param_1,local_30);
  FUN_1001b7a50(local_30);
  FUN_10017060f(lVar2);
  return param_1;
}

