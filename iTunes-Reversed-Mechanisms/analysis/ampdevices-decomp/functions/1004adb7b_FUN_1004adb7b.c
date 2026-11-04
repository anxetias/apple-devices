// name: FUN_1004adb7b
// address: 1004adb7b

undefined8 FUN_1004adb7b(long param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1004adbcd(*(undefined8 *)(param_1 + 0x150));
  uVar2 = 1;
  if (cVar1 == '\0') {
    if ((param_3 & 2) != 0) {
      uVar2 = FUN_1004adbcd(*(undefined8 *)(param_1 + 0x158),param_2);
      return uVar2;
    }
    uVar2 = 0;
  }
  return uVar2;
}

