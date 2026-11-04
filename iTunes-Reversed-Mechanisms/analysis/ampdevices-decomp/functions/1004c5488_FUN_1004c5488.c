// name: FUN_1004c5488
// address: 1004c5488

void FUN_1004c5488(long param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  undefined1 local_40 [16];
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    cVar2 = FUN_100171439(lVar1,param_2);
    if (cVar2 != '\0') {
      *(undefined1 *)(param_1 + 0x28) = 1;
      FUN_1001b7eb0(local_40,param_2);
      FUN_1002c3438(param_1 + 0x30,local_40,local_40);
      FUN_1001b7a50(local_40);
    }
    FUN_100171552(lVar1,param_2);
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_100171552(*(long *)(param_1 + 0x20),param_2);
  }
  return;
}

