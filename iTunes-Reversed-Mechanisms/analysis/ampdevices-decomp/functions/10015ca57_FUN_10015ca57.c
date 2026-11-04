// name: FUN_10015ca57
// address: 10015ca57

undefined8 FUN_10015ca57(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  uint uVar3;
  
  if ((param_1 == 0) || (*(long *)(param_1 + 0x20) == 0)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10066c5b1(uVar2);
    }
    FUN_1001782e9(0,0);
    return 0xffffffce;
  }
  uVar3 = *(uint *)(*(long *)(param_1 + 0x20) + 4);
  uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  if ((int)uVar3 < 0x6d696e66) {
    if (((uVar3 == 0x64696e66) || (uVar3 == 0x65647473)) || (uVar3 == 0x6d646961))
    goto LAB_10015caef;
  }
  else if ((int)uVar3 < 0x7472616b) {
    if ((uVar3 == 0x6d696e66) || (uVar3 == 0x7374626c)) {
LAB_10015caef:
      uVar2 = FUN_10015c7aa(param_1,0,FUN_10015ca57,param_2);
      return uVar2;
    }
  }
  else if ((uVar3 == 0x75647461) || (uVar3 == 0x7472616b)) goto LAB_10015caef;
  return 0;
}

