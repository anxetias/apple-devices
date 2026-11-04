// name: FUN_1005e754a
// address: 1005e754a

long FUN_1005e754a(long param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  undefined1 local_48 [16];
  undefined8 local_38;
  
  lVar2 = *(long *)(param_1 + 0x60);
  if (lVar2 != 0) {
    do {
      FUN_1005e73f0(local_48,lVar2);
      FUN_1001b8d18(&local_38,local_48);
      cVar1 = FUN_100169eb1(local_38,param_2);
      FUN_10014d890(&local_38);
      FUN_1001b7a50(local_48);
      if (cVar1 != '\0') {
        return lVar2;
      }
      FUN_1005e735c(local_48,lVar2);
      FUN_1001b8d18(&local_38,local_48);
      cVar1 = FUN_100169eb1(local_38,param_2);
      FUN_10014d890(&local_38);
      FUN_1001b7a50(local_48);
      if (cVar1 != '\0') {
        return lVar2;
      }
      lVar2 = *(long *)(lVar2 + 0x6878);
    } while (lVar2 != 0);
  }
  return 0;
}

