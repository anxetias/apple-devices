// name: FUN_1001385b2
// address: 1001385b2

void FUN_1001385b2(long param_1,long param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x28);
  if (cVar1 == *(char *)(param_2 + 0x28)) {
    if (cVar1 != '\0') {
      FUN_1001b8172(param_1,param_2);
      FUN_1001a8c4a(param_1 + 0x10,param_2 + 0x10);
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
      *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
    }
  }
  else {
    if (cVar1 != '\0') {
      FUN_100138618(param_1);
      return;
    }
    FUN_100138643(param_1,param_2);
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  return;
}

