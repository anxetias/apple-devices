// name: FUN_1002f0a06
// address: 1002f0a06

char FUN_1002f0a06(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_3 + 0x28);
  if (lVar1 == 0) {
    return '\0';
  }
  if (*(long *)(lVar1 + 0x18) != 0) {
    if (*(long *)(param_4 + 0x18) - 1U < (ulong)*(uint *)(param_1 + 0x10)) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(*(long *)(param_4 + 0x10) + (ulong)*(uint *)(param_1 + 0x10) * 8);
    }
    lVar1 = FUN_1002f1528(lVar1,uVar2);
    return (lVar1 == 0) * '\x02';
  }
  return '\x02';
}

