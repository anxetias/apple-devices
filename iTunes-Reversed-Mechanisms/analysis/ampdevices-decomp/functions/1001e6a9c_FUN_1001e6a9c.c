// name: FUN_1001e6a9c
// address: 1001e6a9c

void FUN_1001e6a9c(undefined8 param_1,char *param_2,size_t param_3)

{
  char cVar1;
  undefined8 uVar2;
  ushort local_2c;
  ushort local_2a;
  ushort local_28;
  ushort local_26;
  ushort local_24;
  ushort local_22;
  
  if (param_2 == (char *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006bfdc4(uVar2);
    }
    FUN_1001782e9(0,0);
  }
  else {
    FUN_100177fe6(param_1,&local_2c);
    _snprintf(param_2,param_3,"%04u-%02u-%02uT%02u:%02u:%02uZ",(ulong)local_2c,(ulong)local_2a,
              (ulong)local_28,(ulong)local_26,(ulong)local_24,(ulong)local_22);
  }
  return;
}

