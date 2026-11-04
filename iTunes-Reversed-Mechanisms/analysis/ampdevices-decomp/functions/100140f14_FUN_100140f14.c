// name: FUN_100140f14
// address: 100140f14

uint FUN_100140f14(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  
  uVar3 = (**(code **)(*param_1 + 0xf8))();
  iVar4 = (**(code **)(*param_1 + 0x80))(param_1);
  if (iVar4 != 1) {
    cVar1 = (**(code **)(*param_1 + 0x20))(param_1);
    if (cVar1 != '\0') {
      FUN_1001b7b04(local_50,"guid");
      FUN_10032f174(local_40);
      FUN_10012a852(param_3,local_50,local_40);
      FUN_1001b7a50(local_40);
      FUN_1001b7a50(local_50);
      FUN_1001b7b04(local_50,"uuid");
      FUN_1001eb76c(local_40);
      FUN_10012a852(param_3,local_50,local_40);
      FUN_1001b7a50(local_40);
      FUN_1001b7a50(local_50);
    }
    bVar2 = (**(code **)(*param_1 + 0xe8))(param_1,param_2,param_3,param_4);
    uVar3 = CONCAT31((int3)(uVar3 >> 8),(byte)uVar3 | bVar2);
  }
  return uVar3 & 0xffffff01;
}

