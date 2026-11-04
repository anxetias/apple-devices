// name: FUN_1001562c0
// address: 1001562c0

void FUN_1001562c0(long param_1,undefined8 param_2,long *param_3)

{
  char cVar1;
  uint uVar2;
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined1 local_40 [16];
  
  cVar1 = FUN_1001b8428(param_1 + 0x228);
  if (cVar1 == '\0') {
    FUN_1001b7b04(local_40,"flavor");
    FUN_100133b90(param_3,local_40,param_1 + 0x228);
    FUN_1001b7a50(local_40);
  }
  uVar2 = *(uint *)(param_1 + 0x224);
  if ((uVar2 & 1) != 0) {
    FUN_1001b7b04(local_40,"play");
    FUN_1001a82a6(local_48,1);
    FUN_1001a7bac(local_50,local_48);
    (**(code **)(*param_3 + 0x18))(param_3,local_40,local_50);
    FUN_1001ab240(local_50);
    FUN_1001a82e2(local_48);
    FUN_1001b7a50(local_40);
    uVar2 = *(uint *)(param_1 + 0x224);
  }
  if ((uVar2 & 4) != 0) {
    FUN_1001b7b04(local_40,"download-done");
    FUN_1001a82a6(local_48,1);
    FUN_1001a7bac(local_50,local_48);
    (**(code **)(*param_3 + 0x18))(param_3,local_40,local_50);
    FUN_1001ab240(local_50);
    FUN_1001a82e2(local_48);
    FUN_1001b7a50(local_40);
    uVar2 = *(uint *)(param_1 + 0x224);
  }
  if ((uVar2 & 8) == 0) {
    FUN_1001b7b04(local_40,"checkout-type");
    FUN_1001356a6(param_3,local_40,"download");
  }
  else {
    FUN_1001b7b04(local_40,"checkout-type");
    FUN_100156486(param_3,local_40,"stream");
  }
  FUN_1001b7a50(local_40);
  FUN_100154f30(param_1);
  return;
}

