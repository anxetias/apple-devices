// name: FUN_10041de9c
// address: 10041de9c

undefined8 FUN_10041de9c(long param_1,byte param_2)

{
  char cVar1;
  short sVar2;
  undefined8 uVar3;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  
  cVar1 = FUN_1005033a5(*(undefined4 *)(param_1 + 0x80));
  uVar3 = 0;
  if (cVar1 != '\0') {
    if ((param_2 != 0) && (cVar1 = FUN_1005032cd(*(undefined4 *)(param_1 + 0x80)), cVar1 != '\0')) {
      *(undefined1 *)(param_1 + 0x1356) = 1;
      return 0;
    }
    if (*(short *)(param_1 + 0x1350) == 2) {
      uVar3 = FUN_100416f20(*(undefined4 *)(param_1 + 0x58),param_2 ^ 0x10cc01bf);
      FUN_1001b7eb0(local_30,uVar3);
      FUN_1001bbec4(local_50,local_30,param_1 + 0x60);
      FUN_1001b7a50(local_30);
      FUN_1001c334a(local_30,0x10cf0022);
      FUN_1001c334a(local_40,0x10cf0023);
      sVar2 = FUN_10045006d(local_50,local_30,local_40,param_1 + 0x4c8);
      FUN_1001b7a50(local_40);
      FUN_1001b7a50(local_30);
      FUN_1001b7a50(local_50);
      *(short *)(param_1 + 0x1350) = sVar2;
      uVar3 = 0xffffff80;
      if (sVar2 != 2) {
        *(bool *)(param_1 + 0x1356) = sVar2 == 1;
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}

