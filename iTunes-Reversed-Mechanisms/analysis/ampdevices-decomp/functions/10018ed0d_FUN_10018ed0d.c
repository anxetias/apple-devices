// name: FUN_10018ed0d
// address: 10018ed0d

undefined8 FUN_10018ed0d(long param_1,undefined8 param_2)

{
  char cVar1;
  size_t sVar2;
  undefined8 uVar3;
  
  sVar2 = _strlen((char *)(param_1 + 0x19));
  if (sVar2 != 0) {
    uVar3 = FUN_100191ef1((char *)(param_1 + 0x19),sVar2,(*(ushort *)(param_1 + 4) & 4) >> 2,param_2
                         );
    return uVar3;
  }
  uVar3 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar3,0x10);
  if (cVar1 != '\0') {
    FUN_100693454(uVar3);
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

