// name: FUN_100238aea
// address: 100238aea

void FUN_100238aea(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x18) == '\0') {
    lVar1 = **(long **)(param_1 + 8);
    for (lVar2 = **(long **)(param_1 + 0x10); lVar2 != lVar1; lVar2 = lVar2 + -0x30) {
      *(undefined4 *)(lVar2 + -0x30) = 0;
      FUN_1002188e4(lVar2 + -0x28);
      *(undefined8 *)(lVar2 + -0x18) = 0;
      *(undefined8 *)(lVar2 + -0x10) = 0;
      FUN_100205d70(lVar2 + -0x28);
    }
  }
  return;
}

