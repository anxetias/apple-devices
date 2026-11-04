// name: FUN_1005458b5
// address: 1005458b5

undefined8 FUN_1005458b5(long param_1,char param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  
  if ((*(char *)(param_1 + 0x6680) != '\0') ||
     (lVar2 = FUN_100279b99(), *(char *)(lVar2 + 0x22) != '\0')) {
    uVar3 = 1;
    if (*(char *)(param_1 + 0x667f) == '\0') {
      if (param_2 != '\0') {
        cVar1 = FUN_1005459fd(param_1,1);
        if (cVar1 != '\0') {
          return 1;
        }
        uVar3 = FUN_100416f20(*(undefined4 *)(param_1 + 0x66b0),0x10cc021a);
        FUN_1001b7eb0(local_50,uVar3);
        uVar3 = FUN_100416f20(*(undefined4 *)(param_1 + 0x66b0),0x10cc021b);
        FUN_1001b7eb0(local_40,uVar3);
        FUN_1004fda52(local_30,*(undefined4 *)(param_1 + 0x28));
        FUN_100450ae1(local_50,local_40,local_30);
        FUN_1001b7a50(local_30);
        FUN_1001b7a50(local_40);
        FUN_1001b7a50(local_50);
      }
      uVar3 = 0;
    }
    return uVar3;
  }
  if (*(char *)(param_1 + 0x3ab) == '\0') {
    return 1;
  }
  if (*(char *)(param_1 + 0x667f) != '\0') {
    return 1;
  }
  if (param_2 == '\0') {
    return 1;
  }
  if (*(char *)(param_1 + 0x14e04) != '\0') {
    return 1;
  }
  cVar1 = FUN_100545e19(param_1);
  if (cVar1 == '\0') {
    return 1;
  }
  FUN_1005459fd(param_1,0);
  return 1;
}

