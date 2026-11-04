// name: FUN_1003572fc
// address: 1003572fc

long FUN_1003572fc(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = FUN_100496019(*(undefined8 *)(param_1 + 0x66b8));
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    do {
      uVar1 = FUN_1003d12b3(param_1,*(undefined1 *)(param_1 + 0x14d07),lVar2);
      *(uint *)(lVar2 + 0x84) = uVar1;
      lVar3 = lVar3 + (ulong)uVar1;
      lVar2 = FUN_1004960d0(lVar2);
    } while (lVar2 != 0);
  }
  for (lVar2 = FUN_100496392(*(undefined8 *)(param_1 + 0x66b8)); lVar2 != 0;
      lVar2 = FUN_100496449(lVar2)) {
    uVar1 = FUN_10035728d(param_1,lVar2);
    lVar3 = lVar3 + (ulong)uVar1;
  }
  return lVar3;
}

