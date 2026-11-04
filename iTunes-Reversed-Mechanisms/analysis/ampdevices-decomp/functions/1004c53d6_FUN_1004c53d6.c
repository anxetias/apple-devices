// name: FUN_1004c53d6
// address: 1004c53d6

void FUN_1004c53d6(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (param_2 == 0) {
    if (*(long *)(param_1 + 0x20) != 0) {
      return;
    }
    puVar2 = (undefined8 *)(param_1 + 0x20);
  }
  else {
    if (*(long *)(param_1 + 0x18) != 0) {
      return;
    }
    puVar2 = (undefined8 *)(param_1 + 0x18);
  }
  uVar1 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                        PTR__kCFTypeDictionaryValueCallBacks_10082e140);
  *puVar2 = uVar1;
  return;
}

