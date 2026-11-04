// name: FUN_1005e7932
// address: 1005e7932

undefined8 FUN_1005e7932(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 local_20 [16];
  
  if (param_2 != 0) {
    for (lVar1 = *(long *)(param_1 + 0x60); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x6878)) {
      if (*(int *)(lVar1 + 0x6884) == param_2) {
        FUN_1005e73f0(local_20,lVar1);
        uVar2 = FUN_1001b8d0c(local_20);
        FUN_1001b7a50(local_20);
        return uVar2;
      }
    }
  }
  return 0;
}

